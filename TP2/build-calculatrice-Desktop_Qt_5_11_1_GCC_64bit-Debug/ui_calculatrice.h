/********************************************************************************
** Form generated from reading UI file 'calculatrice.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATRICE_H
#define UI_CALCULATRICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculatrice
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonDiviser;
    QLineEdit *lineEditAfficheur;
    QPushButton *pushButtonEgal;
    QPushButton *pushButton4;
    QPushButton *pushButton7;
    QPushButton *pushButtonClear;
    QPushButton *pushButton0;
    QPushButton *pushButton6;
    QPushButton *pushButtonPlus;
    QPushButton *pushButton3;
    QPushButton *pushButton9;
    QPushButton *pushButton8;
    QPushButton *pushButton5;
    QPushButton *pushButtonMoins;
    QPushButton *pushButton2;
    QPushButton *pushButtonMultiplier;
    QPushButton *pushButton1;

    void setupUi(QWidget *Calculatrice)
    {
        if (Calculatrice->objectName().isEmpty())
            Calculatrice->setObjectName(QStringLiteral("Calculatrice"));
        Calculatrice->resize(362, 315);
        gridLayout = new QGridLayout(Calculatrice);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButtonDiviser = new QPushButton(Calculatrice);
        pushButtonDiviser->setObjectName(QStringLiteral("pushButtonDiviser"));

        gridLayout->addWidget(pushButtonDiviser, 4, 3, 1, 1);

        lineEditAfficheur = new QLineEdit(Calculatrice);
        lineEditAfficheur->setObjectName(QStringLiteral("lineEditAfficheur"));

        gridLayout->addWidget(lineEditAfficheur, 0, 0, 1, 5);

        pushButtonEgal = new QPushButton(Calculatrice);
        pushButtonEgal->setObjectName(QStringLiteral("pushButtonEgal"));

        gridLayout->addWidget(pushButtonEgal, 4, 2, 1, 1);

        pushButton4 = new QPushButton(Calculatrice);
        pushButton4->setObjectName(QStringLiteral("pushButton4"));

        gridLayout->addWidget(pushButton4, 2, 0, 1, 1);

        pushButton7 = new QPushButton(Calculatrice);
        pushButton7->setObjectName(QStringLiteral("pushButton7"));

        gridLayout->addWidget(pushButton7, 1, 0, 1, 1);

        pushButtonClear = new QPushButton(Calculatrice);
        pushButtonClear->setObjectName(QStringLiteral("pushButtonClear"));

        gridLayout->addWidget(pushButtonClear, 4, 0, 1, 1);

        pushButton0 = new QPushButton(Calculatrice);
        pushButton0->setObjectName(QStringLiteral("pushButton0"));

        gridLayout->addWidget(pushButton0, 4, 1, 1, 1);

        pushButton6 = new QPushButton(Calculatrice);
        pushButton6->setObjectName(QStringLiteral("pushButton6"));

        gridLayout->addWidget(pushButton6, 2, 2, 1, 1);

        pushButtonPlus = new QPushButton(Calculatrice);
        pushButtonPlus->setObjectName(QStringLiteral("pushButtonPlus"));

        gridLayout->addWidget(pushButtonPlus, 1, 3, 1, 1);

        pushButton3 = new QPushButton(Calculatrice);
        pushButton3->setObjectName(QStringLiteral("pushButton3"));

        gridLayout->addWidget(pushButton3, 3, 2, 1, 1);

        pushButton9 = new QPushButton(Calculatrice);
        pushButton9->setObjectName(QStringLiteral("pushButton9"));

        gridLayout->addWidget(pushButton9, 1, 2, 1, 1);

        pushButton8 = new QPushButton(Calculatrice);
        pushButton8->setObjectName(QStringLiteral("pushButton8"));

        gridLayout->addWidget(pushButton8, 1, 1, 1, 1);

        pushButton5 = new QPushButton(Calculatrice);
        pushButton5->setObjectName(QStringLiteral("pushButton5"));

        gridLayout->addWidget(pushButton5, 2, 1, 1, 1);

        pushButtonMoins = new QPushButton(Calculatrice);
        pushButtonMoins->setObjectName(QStringLiteral("pushButtonMoins"));

        gridLayout->addWidget(pushButtonMoins, 2, 3, 1, 1);

        pushButton2 = new QPushButton(Calculatrice);
        pushButton2->setObjectName(QStringLiteral("pushButton2"));

        gridLayout->addWidget(pushButton2, 3, 1, 1, 1);

        pushButtonMultiplier = new QPushButton(Calculatrice);
        pushButtonMultiplier->setObjectName(QStringLiteral("pushButtonMultiplier"));

        gridLayout->addWidget(pushButtonMultiplier, 3, 3, 1, 1);

        pushButton1 = new QPushButton(Calculatrice);
        pushButton1->setObjectName(QStringLiteral("pushButton1"));

        gridLayout->addWidget(pushButton1, 3, 0, 1, 1);


        retranslateUi(Calculatrice);

        QMetaObject::connectSlotsByName(Calculatrice);
    } // setupUi

    void retranslateUi(QWidget *Calculatrice)
    {
        Calculatrice->setWindowTitle(QApplication::translate("Calculatrice", "Calculatrice", nullptr));
        pushButtonDiviser->setText(QApplication::translate("Calculatrice", "/", nullptr));
        lineEditAfficheur->setText(QString());
        pushButtonEgal->setText(QApplication::translate("Calculatrice", "=", nullptr));
        pushButton4->setText(QApplication::translate("Calculatrice", "4", nullptr));
        pushButton7->setText(QApplication::translate("Calculatrice", "7", nullptr));
        pushButtonClear->setText(QApplication::translate("Calculatrice", "C", nullptr));
        pushButton0->setText(QApplication::translate("Calculatrice", "0", nullptr));
        pushButton6->setText(QApplication::translate("Calculatrice", "6", nullptr));
        pushButtonPlus->setText(QApplication::translate("Calculatrice", "+", nullptr));
        pushButton3->setText(QApplication::translate("Calculatrice", "3", nullptr));
        pushButton9->setText(QApplication::translate("Calculatrice", "9", nullptr));
        pushButton8->setText(QApplication::translate("Calculatrice", "8", nullptr));
        pushButton5->setText(QApplication::translate("Calculatrice", "5", nullptr));
        pushButtonMoins->setText(QApplication::translate("Calculatrice", "-", nullptr));
        pushButton2->setText(QApplication::translate("Calculatrice", "2", nullptr));
        pushButtonMultiplier->setText(QApplication::translate("Calculatrice", "*", nullptr));
        pushButton1->setText(QApplication::translate("Calculatrice", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculatrice: public Ui_Calculatrice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATRICE_H
