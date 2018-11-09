/********************************************************************************
** Form generated from reading UI file 'serveurwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVEURWIDGET_H
#define UI_SERVEURWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServeurWidget
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelNumeroDePort;
    QDoubleSpinBox *SpinBoxNumeroDePort;
    QPushButton *pushButtonLancerServeur;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelClients;
    QTextEdit *textEditClients;
    QPushButton *pushButtonQuitter;

    void setupUi(QWidget *ServeurWidget)
    {
        if (ServeurWidget->objectName().isEmpty())
            ServeurWidget->setObjectName(QStringLiteral("ServeurWidget"));
        ServeurWidget->resize(431, 282);
        verticalLayoutWidget = new QWidget(ServeurWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 411, 261));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelNumeroDePort = new QLabel(verticalLayoutWidget);
        labelNumeroDePort->setObjectName(QStringLiteral("labelNumeroDePort"));

        horizontalLayout_2->addWidget(labelNumeroDePort);

        SpinBoxNumeroDePort = new QDoubleSpinBox(verticalLayoutWidget);
        SpinBoxNumeroDePort->setObjectName(QStringLiteral("SpinBoxNumeroDePort"));
        SpinBoxNumeroDePort->setDecimals(0);
        SpinBoxNumeroDePort->setMaximum(5000);
        SpinBoxNumeroDePort->setValue(1025);

        horizontalLayout_2->addWidget(SpinBoxNumeroDePort);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButtonLancerServeur = new QPushButton(verticalLayoutWidget);
        pushButtonLancerServeur->setObjectName(QStringLiteral("pushButtonLancerServeur"));

        verticalLayout->addWidget(pushButtonLancerServeur);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelClients = new QLabel(verticalLayoutWidget);
        labelClients->setObjectName(QStringLiteral("labelClients"));

        verticalLayout_2->addWidget(labelClients);

        textEditClients = new QTextEdit(verticalLayoutWidget);
        textEditClients->setObjectName(QStringLiteral("textEditClients"));

        verticalLayout_2->addWidget(textEditClients);

        pushButtonQuitter = new QPushButton(verticalLayoutWidget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));

        verticalLayout_2->addWidget(pushButtonQuitter);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(ServeurWidget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), ServeurWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(ServeurWidget);
    } // setupUi

    void retranslateUi(QWidget *ServeurWidget)
    {
        ServeurWidget->setWindowTitle(QApplication::translate("ServeurWidget", "ServeurWidget", nullptr));
        labelNumeroDePort->setText(QApplication::translate("ServeurWidget", "Num\303\251ro de port", nullptr));
        pushButtonLancerServeur->setText(QApplication::translate("ServeurWidget", "Lancement serveur", nullptr));
        labelClients->setText(QApplication::translate("ServeurWidget", "Clients", nullptr));
        pushButtonQuitter->setText(QApplication::translate("ServeurWidget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServeurWidget: public Ui_ServeurWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVEURWIDGET_H
