#ifndef CLIENTWIDGET_H
#define CLIENTWIDGET_H

#include <QWidget>
#include <QTcpSocket>

namespace Ui {
class ClientWidget;
}

class ClientWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ClientWidget(QWidget *parent = nullptr);
    ~ClientWidget();

private slots:
    void on_pushButtonConnexion_clicked();

    void on_pushButtonNomOrdi_clicked();

    void on_pushButtonNomUtilisateur_clicked();

    void on_pushButtonArchiProcesseur_clicked();

    void on_pushButtonOSordinateur_clicked();

    void onQTcpSocket_connected();

    void onQTcpSocket_disconnected();

    void onQTcpSocket_error(QAbstractSocket::SocketState socketError);

    void onQTcpSocket_hostFound();

    void onQtcpSocket_stateChanged(QAbstractSocket::SocketState socketState);

    void onQTcpSocket_aboutToClose();

      void onQTcpSocket_bytesWritten(qint64 bytes);

      void onQTcpSocket_readChannelFinished();

      void onQTcpSocket_readyRead();

private:
    Ui::ClientWidget *ui;
    QTcpSocket *socketDeDialogueAvecServeur;
    QString typeDeDemande;
};

#endif // CLIENTWIDGET_H
