#include "dab_mainwindow.h"
#include "ui_dab_mainwindow.h"

DAB_MainWindow::DAB_MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DAB_MainWindow)
{
    ui->setupUi(this);

    //création de la socket
    socketDeDialogueAvecServeur = new QTcpSocket (this);

    bool bon;
      bon = connect( socketDeDialogueAvecServeur, &QTcpSocket::connected, this, &DAB_MainWindow::onQTcpSocket_connected);
      bon = connect( socketDeDialogueAvecServeur, &QTcpSocket::disconnected, this, &DAB_MainWindow::onQTcpSocket_disconnected);
      bon = connect( socketDeDialogueAvecServeur, QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error), this, &DAB_MainWindow::onQTcpSocket_error);
      bon = connect( socketDeDialogueAvecServeur, &QTcpSocket::readyRead, this, &DAB_MainWindow::onQTcpSocket_readyRead);

      if(!bon)
      {
          QMessageBox::information(this,"erreur","erreur de connexion");
      }

      ui->groupBoxOperations->setEnabled(false);
}

DAB_MainWindow::~DAB_MainWindow()
{
    delete ui;
}

void DAB_MainWindow::on_pushButtonConnexion_clicked()
{
    if(ui->pushButtonConnexion->text()== "Connexion")
            {
                socketDeDialogueAvecServeur->connectToHost(ui->lineEditAdresse->text(),ui->lineEditPort->text().toInt());
            }
            else
            {
                socketDeDialogueAvecServeur->disconnectFromHost();
    }
}

void DAB_MainWindow::on_pushButtonEnvoi_clicked()
{
    quint16 taille=0;
        QBuffer tampon;
        QChar requete;
        float montant = ui->lineEditMontant->text().toFloat();

        tampon.open(QIODevice::WriteOnly);
        QDataStream out(&tampon);

        if(ui->radioButtonSolde->isChecked())
        {
            requete = 'S';
            out<<taille<<requete<<montant;
            taille = tampon.size()-sizeof(taille);
            tampon.seek(0);
            out<<taille;
            socketDeDialogueAvecServeur->write(tampon.buffer());
        }

        if(ui->radioButtonRetrait->isChecked())
        {

            requete='R';
            out<<taille<<requete<<montant;
            taille = tampon.size()-sizeof(taille);
            tampon.seek(0);
            out<<taille;
            socketDeDialogueAvecServeur->write(tampon.buffer());
        }

        if(ui->radioButtonDepot->isChecked())
        {

            requete='D';
            out<<taille<<requete<<montant;
            taille = tampon.size()-sizeof(taille);
            tampon.seek(0);
            out<<taille;
            socketDeDialogueAvecServeur->write(tampon.buffer());
        }

        ui->listWidgetEtatConnexion->addItem(requete);
}

void DAB_MainWindow::on_pushButtonNumeroDeCompte_clicked()
{
    quint16 taille= 0;
        QChar commande='N';
        int compte=ui->lineEditNumeroCompte->text().toInt();
        QBuffer tampon;
        tampon.open(QIODevice::WriteOnly);
        // association du tampon au flux de sortie
        QDataStream out(&tampon);
        // construction de la trame
        out << taille << commande << compte;
        // calcul de la taille de la trame
        taille = tampon.size() - sizeof(taille);
        // placement sur la premiere position du flux pour pouvoir modifier la taille
        tampon.seek(0);
        // modification de la trame avec la taille reel de la trame
        out << taille;
        // envoi du QByteArray du tampon via le socket
        if(compte > 0){
        socketDeDialogueAvecServeur->write(tampon.buffer());
        }

}

void DAB_MainWindow::onQTcpSocket_connected()
{
    // changer le message du bouton de connexion en déconnexion
       ui->pushButtonConnexion->setText("Déconnexion");
       // rendre accessible zone des demandes
       ui->groupBoxOperations->setEnabled(true);
       ui->radioButtonSolde->setChecked(true);

       // désactiver les zones de saisie d'adresse ip et de numéro de port
       ui->lineEditAdresse->setEnabled(false);
       ui->lineEditPort->setEnabled(false);
       ui->listWidgetEtatConnexion->addItem("Connecté");

       quint64 taille = 0;
       QString message;
       // si le nombre d'octets recu est au moins egal a celui de lataille de ce que l'on doit recevoir
       if (socketDeDialogueAvecServeur->bytesAvailable() >= (qint64)sizeof(taille))
       {
           //association de la socket au flux d'entree
           QDataStream in(socketDeDialogueAvecServeur);
           // extraire la taille de ce que l'on doit recevoir
           in >> taille;
           //si le nombre d'octet recu est au moins egal a celui de ce que l'on doit recevoir
           if (socketDeDialogueAvecServeur->bytesAvailable() >= (qint64)taille)
           {
               //extraire le message de la banque et le mettre dans message
               in>>message;
               ui->listWidgetEtatConnexion->addItem(message);
               qDebug()<< message;
           }
       }
}

void DAB_MainWindow::onQTcpSocket_disconnected()
{
    // changer le message du bouton de Déconnexion en Connexion
        ui->pushButtonConnexion->setText("Connexion");
        // fermeture de la socket
        socketDeDialogueAvecServeur->close();
        // rendre accessible les zone de saisie d'adresse ip et de numero de port
        ui->lineEditAdresse->setEnabled(true);
        ui->lineEditPort->setEnabled(true);
        // desactiver zone des demandes
        ui->groupBoxOperations->setEnabled(false);
        ui->listWidgetEtatConnexion->addItem("Déconnecté");
}

void DAB_MainWindow::onQTcpSocket_error(QAbstractSocket::SocketError socketError)
{
 //ui->listWidgetEtatConnexion->append(socketDeDialogueAvecServeur->errorString());
}

void DAB_MainWindow::onQTcpSocket_readyRead()
{
    quint16 taille=0;
      QString message;

      // si le nombre d'octets recu est au moins egal a celui de lataille de ce que l'on doit recevoir
      if (socketDeDialogueAvecServeur->bytesAvailable() >= (qint64)sizeof(taille))
      {
          //association de la socket au flux d'entree
          QDataStream in(socketDeDialogueAvecServeur);
          // extraire la taille de ce que l'on doit recevoir
          in >> taille;
          //si le nombre d'octet recu est au moins egal a celui de ce que l'on doit recevoir
          if (socketDeDialogueAvecServeur->bytesAvailable() >= (qint64)taille)
          {
              //extraire le message de la banque et le mettre dans message
              in>>message;
              ui->lineEditMessageBanque->clear();
              ui->lineEditMessageBanque->setText(message);

              qDebug() << "message reçu : " << taille << " : " << message;
          }
      }
}

void DAB_MainWindow::onQTcpSocket_stateChanged(QAbstractSocket::SocketState socketState)
{
QString message;
switch (socketState) {

case QAbstractSocket::HostLookupState:
    message="Le client effectue une recherche de nom d'hôte";
    break;
case QAbstractSocket::ConnectingState:
    message="Le client demande l'établissement d'une connexion";
    break;
case QAbstractSocket::ConnectedState:
    message="Une connexion est établie avec le serveur.";
    break;

case QAbstractSocket::ClosingState:
    message="Le client n'a plus de données à envoyer";
    break;

case QAbstractSocket::UnconnectedState:
    message="Le client n'est plus connecté";
    break;
case QAbstractSocket::ListeningState:
    message="For internal use only";
    break;
}
//ui->listWidgettextEtatConnexion->append(message);
}
