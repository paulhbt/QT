/********************************************************************************
** Form generated from reading UI file 'alveoleswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALVEOLESWIDGET_H
#define UI_ALVEOLESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlveolesWidget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *labelAlveolesLibres;
    QListWidget *listWidgetAlveolesLibres;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButtonReserver;
    QPushButton *pushButtonLiberer;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelRangeesColonnes;
    QListWidget *listWidgetOccupee;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonQuitter;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *AlveolesWidget)
    {
        if (AlveolesWidget->objectName().isEmpty())
            AlveolesWidget->setObjectName(QStringLiteral("AlveolesWidget"));
        AlveolesWidget->resize(470, 400);
        AlveolesWidget->setMinimumSize(QSize(470, 400));
        AlveolesWidget->setMaximumSize(QSize(470, 400));
        layoutWidget = new QWidget(AlveolesWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 435, 381));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelAlveolesLibres = new QLabel(layoutWidget);
        labelAlveolesLibres->setObjectName(QStringLiteral("labelAlveolesLibres"));

        verticalLayout->addWidget(labelAlveolesLibres);

        listWidgetAlveolesLibres = new QListWidget(layoutWidget);
        listWidgetAlveolesLibres->setObjectName(QStringLiteral("listWidgetAlveolesLibres"));

        verticalLayout->addWidget(listWidgetAlveolesLibres);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        pushButtonReserver = new QPushButton(layoutWidget);
        pushButtonReserver->setObjectName(QStringLiteral("pushButtonReserver"));

        verticalLayout_3->addWidget(pushButtonReserver);

        pushButtonLiberer = new QPushButton(layoutWidget);
        pushButtonLiberer->setObjectName(QStringLiteral("pushButtonLiberer"));

        verticalLayout_3->addWidget(pushButtonLiberer);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelRangeesColonnes = new QLabel(layoutWidget);
        labelRangeesColonnes->setObjectName(QStringLiteral("labelRangeesColonnes"));

        verticalLayout_2->addWidget(labelRangeesColonnes);

        listWidgetOccupee = new QListWidget(layoutWidget);
        listWidgetOccupee->setObjectName(QStringLiteral("listWidgetOccupee"));

        verticalLayout_2->addWidget(listWidgetOccupee);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonQuitter = new QPushButton(layoutWidget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));

        horizontalLayout_2->addWidget(pushButtonQuitter);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_2);


        retranslateUi(AlveolesWidget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), AlveolesWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(AlveolesWidget);
    } // setupUi

    void retranslateUi(QWidget *AlveolesWidget)
    {
        AlveolesWidget->setWindowTitle(QApplication::translate("AlveolesWidget", "Test Alv\303\251oles", nullptr));
        labelAlveolesLibres->setText(QApplication::translate("AlveolesWidget", "Num\303\251ros d'alv\303\251oles libres", nullptr));
        pushButtonReserver->setText(QApplication::translate("AlveolesWidget", "R\303\251server >>", nullptr));
        pushButtonLiberer->setText(QApplication::translate("AlveolesWidget", "<< Lib\303\251rer", nullptr));
        labelRangeesColonnes->setText(QApplication::translate("AlveolesWidget", "Rang\303\251es & colonnes occup\303\251es", nullptr));
        pushButtonQuitter->setText(QApplication::translate("AlveolesWidget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlveolesWidget: public Ui_AlveolesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALVEOLESWIDGET_H
