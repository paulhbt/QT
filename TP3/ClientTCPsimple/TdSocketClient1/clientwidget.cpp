#include "clientwidget.h"
#include "ui_clientwidget.h"

ClientWidget::ClientWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientWidget)
{
    ui->setupUi(this);
    socketDeDialogueAvecServeur = new QTcpSocket(this);

        connect( socketDeDialogueAvecServeur, &QTcpSocket::connected, this, &ClientWidget::onQTcpSocket_connected);
        connect( socketDeDialogueAvecServeur, &QTcpSocket::disconnected, this, &ClientWidget::onQTcpSocket_disconnected);
        connect( socketDeDialogueAvecServeur, &QTcpSocket::hostFound,    this, &ClientWidget::onQTcpSocket_hostFound);
        connect( socketDeDialogueAvecServeur, &QTcpSocket::stateChanged, this, &ClientWidget::onQtcpSocket_stateChanged);
        connect( socketDeDialogueAvecServeur, &QTcpSocket::aboutToClose,  this, &ClientWidget::onQTcpSocket_aboutToClose);
        connect( socketDeDialogueAvecServeur, &QTcpSocket::bytesWritten, this, &ClientWidget::onQTcpSocket_bytesWritten);
        connect( socketDeDialogueAvecServeur, &QTcpSocket::readChannelFinished, this, &ClientWidget::onQTcpSocket_readChannelFinished);
        connect( socketDeDialogueAvecServeur, &QTcpSocket::readyRead, this, &ClientWidget::onQTcpSocket_readyRead);
}

ClientWidget::~ClientWidget()
{
    delete ui;
}

void ClientWidget::on_pushButtonConnexion_clicked()
{
    QString hostname = ui->lineEditIP->text();
            QString port = ui->lineEditPort->text();
            int portint = port.toInt();
            if(ui->pushButtonConnexion->text() == "Connexion"){
                socketDeDialogueAvecServeur->connectToHost(hostname, portint);
                ui->pushButtonConnexion->setText("Deconnexion");
            }
            else{
                ui->pushButtonConnexion->setText("Connexion");
                socketDeDialogueAvecServeur->disconnectFromHost();
            }
}

void ClientWidget::on_pushButtonNomOrdi_clicked()
{
    typeDeDemande = "c";
        socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());;
}

void ClientWidget::on_pushButtonNomUtilisateur_clicked()
{
    typeDeDemande = "u";
        socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::on_pushButtonArchiProcesseur_clicked()
{
    typeDeDemande = "a";
        socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::on_pushButtonOSordinateur_clicked()
{
    typeDeDemande="o";
        socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}


void ClientWidget::onQTcpSocket_connected()
{
        ui->lineEditPort->setEnabled(0);
        ui->lineEditIP->setEnabled(0);
        ui->groupBoxInfoClient->setEnabled(1);
        ui->textEditEtatConnexion->append("connected");
}

void ClientWidget::onQTcpSocket_disconnected()
{
        ui->lineEditPort->setEnabled(1);
        ui->lineEditIP->setEnabled(1);
        ui->groupBoxInfoClient->setEnabled(0);
        ui->textEditEtatConnexion->append("disconnected");
}

void ClientWidget::onQTcpSocket_error(QAbstractSocket::SocketState socketError)
{
    ui->textEditEtatConnexion->append(socketDeDialogueAvecServeur->errorString());
}

void ClientWidget::onQTcpSocket_hostFound()
{
    ui->textEditEtatConnexion->append("E2 - Le serveur répond.");
}




void ClientWidget::onQtcpSocket_stateChanged(QAbstractSocket::SocketState socketState)
{
    QString message;
        switch (socketState)
        {

        case QAbstractSocket::HostLookupState:
            message="Le client effectue une recherche de nom d'hôte.";
            break;

        case QAbstractSocket::ConnectingState:
            message="E1 - Le client demande l'établissement d'une connexion.";
            break;

        case QAbstractSocket::ConnectedState:
            message="E3 - Une connexion est établie avec le serveur.";
            break;

        // Fermeture 1 : quand le client n'a plus de données à envoyer dans le flux,
        // il envoie un segment dont l'indicateur FIN est défini.
        // toutefois des données peuvent toujours être en attente d'être reçues.
        case QAbstractSocket::ClosingState	:
            message="F1 - le client n'a plus de données à envoyer.";
            break;

        // Fermeture 2 : le serveur envoie un segment ACK
        // pour indiquer la bonne réception du segment FIN
        // afin de fermer la session du client au serveur.
        case QAbstractSocket::UnconnectedState :
            message="F2 - Le client n'est plus connecté.";
            break;

        case QAbstractSocket::ListeningState :
            message="For internal use only. ";
            break;
    }
        ui->textEditEtatConnexion->append(message);
}



void ClientWidget::onQTcpSocket_aboutToClose()
{
    ui->textEditEtatConnexion->append("aboutToClose");
}

void ClientWidget::onQTcpSocket_bytesWritten(qint64 bytes)
{
    ui->textEditEtatConnexion->append("bytesWritten");
}

void ClientWidget::onQTcpSocket_readChannelFinished()
{
    ui->textEditEtatConnexion->append("readChannelFinished");
}

void ClientWidget::onQTcpSocket_readyRead()
{
    QByteArray donnees = socketDeDialogueAvecServeur->readAll();
            if(typeDeDemande == 'o'){
                ui->lineEditOSordinateur->insert(donnees.data());
            }
            if(typeDeDemande == 'u'){
                ui->lineEditNomUtilisateur->insert(donnees.data());
            }
            if(typeDeDemande == 'c'){
                ui->lineEditNomOrdi->insert(donnees.data());
            }
            if(typeDeDemande == 'a'){
                ui->lineEditArchiProcesseur->insert(donnees.data());
            }

}
