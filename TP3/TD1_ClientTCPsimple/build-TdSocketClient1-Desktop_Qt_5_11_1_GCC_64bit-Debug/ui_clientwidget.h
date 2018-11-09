/********************************************************************************
** Form generated from reading UI file 'clientwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWIDGET_H
#define UI_CLIENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWidget
{
public:
    QGroupBox *groupBoxConnexion;
    QLabel *labelIPadresse;
    QLabel *label;
    QLineEdit *lineEditPort;
    QLineEdit *lineEditIP;
    QLabel *label_2;
    QPushButton *pushButtonQuitter;
    QPushButton *pushButtonConnexion;
    QTextEdit *textEditEtatConnexion;
    QGroupBox *groupBoxInfoClient;
    QPushButton *pushButtonNomOrdi;
    QPushButton *pushButtonNomUtilisateur;
    QPushButton *pushButtonArchiProcesseur;
    QPushButton *pushButtonOSordinateur;
    QLineEdit *lineEditNomOrdi;
    QLineEdit *lineEditNomUtilisateur;
    QLineEdit *lineEditArchiProcesseur;
    QLineEdit *lineEditOSordinateur;

    void setupUi(QWidget *ClientWidget)
    {
        if (ClientWidget->objectName().isEmpty())
            ClientWidget->setObjectName(QStringLiteral("ClientWidget"));
        ClientWidget->resize(663, 368);
        groupBoxConnexion = new QGroupBox(ClientWidget);
        groupBoxConnexion->setObjectName(QStringLiteral("groupBoxConnexion"));
        groupBoxConnexion->setGeometry(QRect(20, 30, 621, 151));
        labelIPadresse = new QLabel(groupBoxConnexion);
        labelIPadresse->setObjectName(QStringLiteral("labelIPadresse"));
        labelIPadresse->setGeometry(QRect(10, 36, 141, 21));
        label = new QLabel(groupBoxConnexion);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 80, 171, 21));
        lineEditPort = new QLineEdit(groupBoxConnexion);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));
        lineEditPort->setGeometry(QRect(180, 80, 161, 25));
        lineEditIP = new QLineEdit(groupBoxConnexion);
        lineEditIP->setObjectName(QStringLiteral("lineEditIP"));
        lineEditIP->setGeometry(QRect(150, 30, 191, 25));
        label_2 = new QLabel(groupBoxConnexion);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(380, 30, 121, 21));
        pushButtonQuitter = new QPushButton(groupBoxConnexion);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(10, 120, 80, 25));
        pushButtonConnexion = new QPushButton(groupBoxConnexion);
        pushButtonConnexion->setObjectName(QStringLiteral("pushButtonConnexion"));
        pushButtonConnexion->setGeometry(QRect(260, 120, 80, 25));
        textEditEtatConnexion = new QTextEdit(groupBoxConnexion);
        textEditEtatConnexion->setObjectName(QStringLiteral("textEditEtatConnexion"));
        textEditEtatConnexion->setGeometry(QRect(380, 50, 231, 91));
        groupBoxInfoClient = new QGroupBox(ClientWidget);
        groupBoxInfoClient->setObjectName(QStringLiteral("groupBoxInfoClient"));
        groupBoxInfoClient->setGeometry(QRect(20, 200, 621, 161));
        pushButtonNomOrdi = new QPushButton(groupBoxInfoClient);
        pushButtonNomOrdi->setObjectName(QStringLiteral("pushButtonNomOrdi"));
        pushButtonNomOrdi->setGeometry(QRect(10, 30, 181, 25));
        pushButtonNomUtilisateur = new QPushButton(groupBoxInfoClient);
        pushButtonNomUtilisateur->setObjectName(QStringLiteral("pushButtonNomUtilisateur"));
        pushButtonNomUtilisateur->setGeometry(QRect(10, 60, 181, 25));
        pushButtonArchiProcesseur = new QPushButton(groupBoxInfoClient);
        pushButtonArchiProcesseur->setObjectName(QStringLiteral("pushButtonArchiProcesseur"));
        pushButtonArchiProcesseur->setGeometry(QRect(10, 90, 181, 25));
        pushButtonOSordinateur = new QPushButton(groupBoxInfoClient);
        pushButtonOSordinateur->setObjectName(QStringLiteral("pushButtonOSordinateur"));
        pushButtonOSordinateur->setGeometry(QRect(10, 120, 181, 25));
        lineEditNomOrdi = new QLineEdit(groupBoxInfoClient);
        lineEditNomOrdi->setObjectName(QStringLiteral("lineEditNomOrdi"));
        lineEditNomOrdi->setGeometry(QRect(200, 30, 401, 25));
        lineEditNomUtilisateur = new QLineEdit(groupBoxInfoClient);
        lineEditNomUtilisateur->setObjectName(QStringLiteral("lineEditNomUtilisateur"));
        lineEditNomUtilisateur->setGeometry(QRect(200, 60, 401, 25));
        lineEditArchiProcesseur = new QLineEdit(groupBoxInfoClient);
        lineEditArchiProcesseur->setObjectName(QStringLiteral("lineEditArchiProcesseur"));
        lineEditArchiProcesseur->setGeometry(QRect(200, 90, 401, 25));
        lineEditOSordinateur = new QLineEdit(groupBoxInfoClient);
        lineEditOSordinateur->setObjectName(QStringLiteral("lineEditOSordinateur"));
        lineEditOSordinateur->setGeometry(QRect(200, 120, 401, 25));

        retranslateUi(ClientWidget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), ClientWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(ClientWidget);
    } // setupUi

    void retranslateUi(QWidget *ClientWidget)
    {
        ClientWidget->setWindowTitle(QApplication::translate("ClientWidget", "ClientWidget", nullptr));
        groupBoxConnexion->setTitle(QApplication::translate("ClientWidget", "Connection au serveur", nullptr));
        labelIPadresse->setText(QApplication::translate("ClientWidget", "Adresse IP du serveur :", nullptr));
        label->setText(QApplication::translate("ClientWidget", "Num\303\251ro de port du serveur :", nullptr));
        label_2->setText(QApplication::translate("ClientWidget", "Etat de la connexion", nullptr));
        pushButtonQuitter->setText(QApplication::translate("ClientWidget", "Quitter", nullptr));
        pushButtonConnexion->setText(QApplication::translate("ClientWidget", "Connexion", nullptr));
        groupBoxInfoClient->setTitle(QApplication::translate("ClientWidget", "Informations Client", nullptr));
        pushButtonNomOrdi->setText(QApplication::translate("ClientWidget", "Nom de l'ordinateur distant", nullptr));
        pushButtonNomUtilisateur->setText(QApplication::translate("ClientWidget", "Nom de l'utilisateur", nullptr));
        pushButtonArchiProcesseur->setText(QApplication::translate("ClientWidget", "Architecture processeur", nullptr));
        pushButtonOSordinateur->setText(QApplication::translate("ClientWidget", "OS de l'ordinateur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWidget: public Ui_ClientWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWIDGET_H
