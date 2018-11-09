/********************************************************************************
** Form generated from reading UI file 'dab_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAB_MAINWINDOW_H
#define UI_DAB_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DAB_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonConnexion;
    QLabel *labelMessageBanque;
    QLineEdit *lineEditMessageBanque;
    QGroupBox *groupBoxOperations;
    QPushButton *pushButtonNumeroDeCompte;
    QLineEdit *lineEditNumeroCompte;
    QLineEdit *lineEditMontant;
    QLabel *labelMontant;
    QPushButton *pushButtonEnvoi;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButtonSolde;
    QRadioButton *radioButtonRetrait;
    QRadioButton *radioButtonDepot;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *labelEtatConnexion;
    QListWidget *listWidgetEtatConnexion;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelAdresse;
    QLineEdit *lineEditAdresse;
    QHBoxLayout *horizontalLayout;
    QLabel *labelPort;
    QLineEdit *lineEditPort;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DAB_MainWindow)
    {
        if (DAB_MainWindow->objectName().isEmpty())
            DAB_MainWindow->setObjectName(QStringLiteral("DAB_MainWindow"));
        DAB_MainWindow->resize(528, 512);
        centralWidget = new QWidget(DAB_MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButtonConnexion = new QPushButton(centralWidget);
        pushButtonConnexion->setObjectName(QStringLiteral("pushButtonConnexion"));
        pushButtonConnexion->setGeometry(QRect(80, 130, 80, 25));
        labelMessageBanque = new QLabel(centralWidget);
        labelMessageBanque->setObjectName(QStringLiteral("labelMessageBanque"));
        labelMessageBanque->setGeometry(QRect(30, 180, 161, 17));
        lineEditMessageBanque = new QLineEdit(centralWidget);
        lineEditMessageBanque->setObjectName(QStringLiteral("lineEditMessageBanque"));
        lineEditMessageBanque->setGeometry(QRect(20, 200, 471, 25));
        groupBoxOperations = new QGroupBox(centralWidget);
        groupBoxOperations->setObjectName(QStringLiteral("groupBoxOperations"));
        groupBoxOperations->setEnabled(false);
        groupBoxOperations->setGeometry(QRect(20, 240, 471, 201));
        pushButtonNumeroDeCompte = new QPushButton(groupBoxOperations);
        pushButtonNumeroDeCompte->setObjectName(QStringLiteral("pushButtonNumeroDeCompte"));
        pushButtonNumeroDeCompte->setGeometry(QRect(20, 60, 131, 25));
        lineEditNumeroCompte = new QLineEdit(groupBoxOperations);
        lineEditNumeroCompte->setObjectName(QStringLiteral("lineEditNumeroCompte"));
        lineEditNumeroCompte->setGeometry(QRect(160, 60, 113, 25));
        lineEditMontant = new QLineEdit(groupBoxOperations);
        lineEditMontant->setObjectName(QStringLiteral("lineEditMontant"));
        lineEditMontant->setGeometry(QRect(160, 100, 113, 25));
        labelMontant = new QLabel(groupBoxOperations);
        labelMontant->setObjectName(QStringLiteral("labelMontant"));
        labelMontant->setGeometry(QRect(20, 100, 54, 17));
        pushButtonEnvoi = new QPushButton(groupBoxOperations);
        pushButtonEnvoi->setObjectName(QStringLiteral("pushButtonEnvoi"));
        pushButtonEnvoi->setGeometry(QRect(320, 160, 80, 25));
        layoutWidget = new QWidget(groupBoxOperations);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(320, 60, 98, 83));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButtonSolde = new QRadioButton(layoutWidget);
        radioButtonSolde->setObjectName(QStringLiteral("radioButtonSolde"));

        verticalLayout_3->addWidget(radioButtonSolde);

        radioButtonRetrait = new QRadioButton(layoutWidget);
        radioButtonRetrait->setObjectName(QStringLiteral("radioButtonRetrait"));

        verticalLayout_3->addWidget(radioButtonRetrait);

        radioButtonDepot = new QRadioButton(layoutWidget);
        radioButtonDepot->setObjectName(QStringLiteral("radioButtonDepot"));

        verticalLayout_3->addWidget(radioButtonDepot);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(260, 20, 251, 141));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelEtatConnexion = new QLabel(layoutWidget1);
        labelEtatConnexion->setObjectName(QStringLiteral("labelEtatConnexion"));

        verticalLayout->addWidget(labelEtatConnexion);

        listWidgetEtatConnexion = new QListWidget(layoutWidget1);
        listWidgetEtatConnexion->setObjectName(QStringLiteral("listWidgetEtatConnexion"));

        verticalLayout->addWidget(listWidgetEtatConnexion);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 30, 211, 81));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelAdresse = new QLabel(layoutWidget2);
        labelAdresse->setObjectName(QStringLiteral("labelAdresse"));

        horizontalLayout_2->addWidget(labelAdresse);

        lineEditAdresse = new QLineEdit(layoutWidget2);
        lineEditAdresse->setObjectName(QStringLiteral("lineEditAdresse"));

        horizontalLayout_2->addWidget(lineEditAdresse);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelPort = new QLabel(layoutWidget2);
        labelPort->setObjectName(QStringLiteral("labelPort"));

        horizontalLayout->addWidget(labelPort);

        lineEditPort = new QLineEdit(layoutWidget2);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));

        horizontalLayout->addWidget(lineEditPort);


        verticalLayout_2->addLayout(horizontalLayout);

        DAB_MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DAB_MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 528, 22));
        DAB_MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DAB_MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DAB_MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DAB_MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DAB_MainWindow->setStatusBar(statusBar);

        retranslateUi(DAB_MainWindow);

        QMetaObject::connectSlotsByName(DAB_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DAB_MainWindow)
    {
        DAB_MainWindow->setWindowTitle(QApplication::translate("DAB_MainWindow", "DAB_MainWindow", nullptr));
        pushButtonConnexion->setText(QApplication::translate("DAB_MainWindow", "Connexion", nullptr));
        labelMessageBanque->setText(QApplication::translate("DAB_MainWindow", "Message de la banque :", nullptr));
        groupBoxOperations->setTitle(QApplication::translate("DAB_MainWindow", "Op\303\251rations envoy\303\251es \303\240 la banque", nullptr));
        pushButtonNumeroDeCompte->setText(QApplication::translate("DAB_MainWindow", "Num\303\251ro de comptes", nullptr));
        labelMontant->setText(QApplication::translate("DAB_MainWindow", "Montant :", nullptr));
        pushButtonEnvoi->setText(QApplication::translate("DAB_MainWindow", "Envoi", nullptr));
        radioButtonSolde->setText(QApplication::translate("DAB_MainWindow", "Solde", nullptr));
        radioButtonRetrait->setText(QApplication::translate("DAB_MainWindow", "Retrait", nullptr));
        radioButtonDepot->setText(QApplication::translate("DAB_MainWindow", "D\303\251pot", nullptr));
        labelEtatConnexion->setText(QApplication::translate("DAB_MainWindow", "Etat de la connexion", nullptr));
        labelAdresse->setText(QApplication::translate("DAB_MainWindow", "Adresse : ", nullptr));
        labelPort->setText(QApplication::translate("DAB_MainWindow", "Port : ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DAB_MainWindow: public Ui_DAB_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAB_MAINWINDOW_H
