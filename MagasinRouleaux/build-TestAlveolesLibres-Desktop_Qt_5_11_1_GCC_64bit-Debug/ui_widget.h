/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QLabel *labelNumAlveolesLibres;
    QLabel *labelRangeesColonnes;
    QPushButton *pushButtonReserver;
    QPushButton *pushButtonLiberer;
    QPushButton *pushButtonQuitter;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(492, 406);
        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(310, 80, 151, 231));
        listWidget_2 = new QListWidget(Widget);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(50, 80, 141, 231));
        labelNumAlveolesLibres = new QLabel(Widget);
        labelNumAlveolesLibres->setObjectName(QStringLiteral("labelNumAlveolesLibres"));
        labelNumAlveolesLibres->setGeometry(QRect(50, 50, 151, 17));
        labelRangeesColonnes = new QLabel(Widget);
        labelRangeesColonnes->setObjectName(QStringLiteral("labelRangeesColonnes"));
        labelRangeesColonnes->setGeometry(QRect(300, 50, 181, 17));
        pushButtonReserver = new QPushButton(Widget);
        pushButtonReserver->setObjectName(QStringLiteral("pushButtonReserver"));
        pushButtonReserver->setGeometry(QRect(210, 220, 80, 25));
        pushButtonLiberer = new QPushButton(Widget);
        pushButtonLiberer->setObjectName(QStringLiteral("pushButtonLiberer"));
        pushButtonLiberer->setGeometry(QRect(210, 260, 80, 25));
        pushButtonQuitter = new QPushButton(Widget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(120, 340, 261, 51));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        labelNumAlveolesLibres->setText(QApplication::translate("Widget", "Num\303\251ro d'alv\303\251oles libres", nullptr));
        labelRangeesColonnes->setText(QApplication::translate("Widget", "Rang\303\251es & colonnes occupp\303\251es", nullptr));
        pushButtonReserver->setText(QApplication::translate("Widget", "R\303\251server > >", nullptr));
        pushButtonLiberer->setText(QApplication::translate("Widget", "< < Lib\303\251rer", nullptr));
        pushButtonQuitter->setText(QApplication::translate("Widget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
