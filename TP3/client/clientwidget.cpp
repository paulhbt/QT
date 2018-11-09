#include "clientwidget.h"
#include "ui_clientwidget.h"


ClientWidget::ClientWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientWidget)
{
    ui->setupUi(this);

    socketDeDialogueAvecServeur=new QTcpSocket(this);

    connect(socketDeDialogueAvecServeur,&QTcpSocket::connected,this,&ClientDialogueWindows::onQTcpSocket_connected);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::disconnected,this,&ClientDialogueWindows::onQTcpSocket_disconnected);
    connect(socketDeDialogueAvecServeur,QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error),this,&ClientDialogueWindows::onQTcpSocket_error);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::hostFound,this,&ClientDialogueWindows::onQTcpSocket_hostFound);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::stateChanged,this,&ClientDialogueWindows::onQTcpSocket_stateChanged);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::aboutToClose,this,&ClientDialogueWindows::onQTcpSocket_aboutToClose);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::bytesWritten,this,&ClientDialogueWindows::onQTcpSocket_bytesWritten);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::readChannelFinished,this,&ClientDialogueWindows::onQTcpSocket_readChannelFinished);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::readyRead,this,&ClientDialogueWindows::onQTcpSocket_readyRead);

}

ClientWidget::~ClientWidget()
{
    delete ui;
}

void ClientWidget::on_pushButtonNomOrdi_clicked()
{
}

void ClientWidget::on_pushButtonOS_clicked()
{

}

void ClientWidget::on_pushButtonArchitecture_clicked()
{

}

void ClientWidget::on_pushButtonNomUtilisateur_clicked()
{

}

void ClientWidget::on_pushButtonConnexion_clicked()
{
    if(ui->pushButtonConnexion->text()!="Déconnexion"){
        //pour chaque nouvelle connexion on réinitialise la zone événement
        ui->textEditEtat->clear();
        //connexion au serveur
        socketDeDialogueAvecServeur->connectToHost(ui->lineEditIP->text(),ui->lineEditNomUtilisateur->text(),ui->lineEditArchitectureProcesseur->text(),ui->lineEditOSOrdinateur->text());
    }

    else {
        socketDeDialogueAvecServeur->disconnectFromHost();
    }

}

void ClientWidget::onQTcpSocket_connected()
{

}

void ClientWidget::onQTcpSocket_disconnected()
{

}

void ClientWidget::onQTcpSocket_error(QAbstractSocket::SocketError socketError)
{

}

void ClientWidget::onQTcpSocket_hostFound()
{

}

void ClientWidget::onQTcpSocket_stateChanged(QAbstractSocket::SocketState socketState)
{
QString message;
switch(socketState)
}

void ClientWidget::onQTcpSocket_aboutToClose()
{

}

void ClientWidget::onQTcpSocket_bytesWritten(qint64 bytes)
{

}

void ClientWidget::onQTcpSocket_readChannelFinished()
{

}

void ClientWidget::onQTcpSocket__readyRead()
{

}
