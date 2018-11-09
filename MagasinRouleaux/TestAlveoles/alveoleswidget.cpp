/**
    @file alveolesWidget.cpp
    @brief Implémentation de la classe alveolesWidget
    @author Paul HABERT
    @date 16/10/2018
*/

#include "alveoleswidget.h"
#include "ui_alveoleswidget.h"
#include "alveoleslibres.h"
#include <list>

using namespace std;

AlveolesWidget::AlveolesWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AlveolesWidget),
    mesAlveoles(10, 20)
{
    ui->setupUi(this);


    for(const int & str : mesAlveoles)
    {
        ui->listWidgetAlveolesLibres->addItem(QString::number(str));

    }
}


AlveolesWidget::~AlveolesWidget()
{
    delete ui;
}

void AlveolesWidget::on_pushButtonReserver_clicked()
{
    int rangee, colonne;
    QString sRangee, sColonne;

    mesAlveoles.Reserver(rangee, colonne);
    if(rangee < 10){
        sRangee = "0" + QString::number(rangee);
    }
    else{
        sRangee = QString::number(rangee);
    }
    if(colonne < 10){
        sColonne = "0" + QString::number(colonne);
    }
    else{
        sColonne = QString::number(colonne);
    }
    QString item = sRangee + " - " + sColonne;
    ui->listWidgetAlveolesLibres->clear();
    for(const int & str : mesAlveoles)
    {
        ui->listWidgetAlveolesLibres->addItem(QString::number(str));

    }
    ui->listWidgetOccupee->addItem(item);
}

void AlveolesWidget::on_pushButtonLiberer_clicked()
{
    QListWidgetItem *item = ui->listWidgetOccuppee->currentItem();
    QString texte = item->text();
    delete item;
    QStringList coord = texte.split(",");
    mesAlveoles.Liberer(coord[0].toInt(),coord[1].toInt());
    AfficherAlveolesLibres();
    ui->listWidgetOccuppee->setCurrentRow(-1);
}
