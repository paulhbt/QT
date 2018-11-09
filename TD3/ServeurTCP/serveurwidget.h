#ifndef SERVEURWIDGET_H
#define SERVEURWIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QTcpServer>
#include <QHostInfo>
#include <QProcess>

namespace Ui {
class ServeurWidget;
}

class ServeurWidget : public QWidget
{
    Q_OBJECT

public:
         explicit ServeurWidget(QWidget *parent = nullptr);
        ~ServeurWidget();
        void onQTcpServer_newConnection();
        void onQTcpSocket_readyRead();
        void onQProcess_readyReadStandardOutput();
        void onQTcpSocket_disconnected();
private slots:

        void on_pushButtonQuitter_clicked();
        void on_pushButtonLancerServeur_clicked();

private:
      Ui::ServeurWidget *ui;
      QTcpServer *socketEcouteServeur;
      QTcpSocket *socketDialogueClient;
      QChar typeDeDemande;
      QProcess *process;
};

#endif // SERVEURWIDGET_H
