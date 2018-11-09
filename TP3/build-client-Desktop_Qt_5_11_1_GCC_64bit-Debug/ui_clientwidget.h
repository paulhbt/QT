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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWidget
{
public:
    QGroupBox *groupBoxConnexion;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelAdresseIP;
    QLineEdit *lineEditIP;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNumPortServeur;
    QLineEdit *lineEditNum;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonQuitter;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonConnexion;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelEtatConnexion;
    QTextEdit *textEditEtat;
    QGroupBox *groupBox_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButtonNomOrdi;
    QPushButton *pushButtonNomUtilisateur;
    QPushButton *pushButtonArchitecture;
    QPushButton *pushButtonOS;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *lineEditNomORdi;
    QLineEdit *lineEditNomUtilisateur;
    QLineEdit *lineEditArchitecture;
    QLineEdit *lineEditOS;

    void setupUi(QWidget *ClientWidget)
    {
        if (ClientWidget->objectName().isEmpty())
            ClientWidget->setObjectName(QStringLiteral("ClientWidget"));
        ClientWidget->resize(485, 366);
        groupBoxConnexion = new QGroupBox(ClientWidget);
        groupBoxConnexion->setObjectName(QStringLiteral("groupBoxConnexion"));
        groupBoxConnexion->setGeometry(QRect(10, 20, 471, 151));
        widget = new QWidget(groupBoxConnexion);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 30, 471, 111));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelAdresseIP = new QLabel(widget);
        labelAdresseIP->setObjectName(QStringLiteral("labelAdresseIP"));

        horizontalLayout_2->addWidget(labelAdresseIP);

        lineEditIP = new QLineEdit(widget);
        lineEditIP->setObjectName(QStringLiteral("lineEditIP"));

        horizontalLayout_2->addWidget(lineEditIP);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelNumPortServeur = new QLabel(widget);
        labelNumPortServeur->setObjectName(QStringLiteral("labelNumPortServeur"));

        horizontalLayout->addWidget(labelNumPortServeur);

        lineEditNum = new QLineEdit(widget);
        lineEditNum->setObjectName(QStringLiteral("lineEditNum"));

        horizontalLayout->addWidget(lineEditNum);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButtonQuitter = new QPushButton(widget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));

        horizontalLayout_3->addWidget(pushButtonQuitter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonConnexion = new QPushButton(widget);
        pushButtonConnexion->setObjectName(QStringLiteral("pushButtonConnexion"));

        horizontalLayout_3->addWidget(pushButtonConnexion);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        labelEtatConnexion = new QLabel(widget);
        labelEtatConnexion->setObjectName(QStringLiteral("labelEtatConnexion"));

        verticalLayout_3->addWidget(labelEtatConnexion);

        textEditEtat = new QTextEdit(widget);
        textEditEtat->setObjectName(QStringLiteral("textEditEtat"));

        verticalLayout_3->addWidget(textEditEtat);


        horizontalLayout_4->addLayout(verticalLayout_3);

        groupBox_2 = new QGroupBox(ClientWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 170, 471, 191));
        widget1 = new QWidget(groupBox_2);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 30, 451, 151));
        horizontalLayout_5 = new QHBoxLayout(widget1);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        pushButtonNomOrdi = new QPushButton(widget1);
        pushButtonNomOrdi->setObjectName(QStringLiteral("pushButtonNomOrdi"));

        verticalLayout_4->addWidget(pushButtonNomOrdi);

        pushButtonNomUtilisateur = new QPushButton(widget1);
        pushButtonNomUtilisateur->setObjectName(QStringLiteral("pushButtonNomUtilisateur"));

        verticalLayout_4->addWidget(pushButtonNomUtilisateur);

        pushButtonArchitecture = new QPushButton(widget1);
        pushButtonArchitecture->setObjectName(QStringLiteral("pushButtonArchitecture"));

        verticalLayout_4->addWidget(pushButtonArchitecture);

        pushButtonOS = new QPushButton(widget1);
        pushButtonOS->setObjectName(QStringLiteral("pushButtonOS"));

        verticalLayout_4->addWidget(pushButtonOS);


        horizontalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        lineEditNomORdi = new QLineEdit(widget1);
        lineEditNomORdi->setObjectName(QStringLiteral("lineEditNomORdi"));

        verticalLayout_5->addWidget(lineEditNomORdi);

        lineEditNomUtilisateur = new QLineEdit(widget1);
        lineEditNomUtilisateur->setObjectName(QStringLiteral("lineEditNomUtilisateur"));

        verticalLayout_5->addWidget(lineEditNomUtilisateur);

        lineEditArchitecture = new QLineEdit(widget1);
        lineEditArchitecture->setObjectName(QStringLiteral("lineEditArchitecture"));

        verticalLayout_5->addWidget(lineEditArchitecture);

        lineEditOS = new QLineEdit(widget1);
        lineEditOS->setObjectName(QStringLiteral("lineEditOS"));

        verticalLayout_5->addWidget(lineEditOS);


        horizontalLayout_5->addLayout(verticalLayout_5);


        retranslateUi(ClientWidget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), ClientWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(ClientWidget);
    } // setupUi

    void retranslateUi(QWidget *ClientWidget)
    {
        ClientWidget->setWindowTitle(QApplication::translate("ClientWidget", "ClientWidget", nullptr));
        groupBoxConnexion->setTitle(QApplication::translate("ClientWidget", "Connexion au serveur", nullptr));
        labelAdresseIP->setText(QApplication::translate("ClientWidget", "Adresse IP du serveur", nullptr));
        labelNumPortServeur->setText(QApplication::translate("ClientWidget", "Num\303\251ro de port du serveur", nullptr));
        pushButtonQuitter->setText(QApplication::translate("ClientWidget", "Quitter", nullptr));
        pushButtonConnexion->setText(QApplication::translate("ClientWidget", "Connexion", nullptr));
        labelEtatConnexion->setText(QApplication::translate("ClientWidget", "Etat de la connexion", nullptr));
        groupBox_2->setTitle(QApplication::translate("ClientWidget", "Informations Client", nullptr));
        pushButtonNomOrdi->setText(QApplication::translate("ClientWidget", "Nom de l'ordinateur disant", nullptr));
        pushButtonNomUtilisateur->setText(QApplication::translate("ClientWidget", "Nom de l'utilisateur", nullptr));
        pushButtonArchitecture->setText(QApplication::translate("ClientWidget", "Architecture processeur", nullptr));
        pushButtonOS->setText(QApplication::translate("ClientWidget", "Os de l'ordinateur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWidget: public Ui_ClientWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWIDGET_H
