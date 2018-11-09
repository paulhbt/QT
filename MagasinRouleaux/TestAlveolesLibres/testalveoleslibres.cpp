#include "testalveoleslibres.h"
#include "ui_testalveoleslibres.h"
#include <QDebug>

TestAlveolesLibres::TestAlveolesLibres(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestAlveolesLibres),
    lesAlveoles(4,5)
{
    ui->setupUi(this);
    AfficherAlveolesLibres();
}

TestAlveolesLibres::~TestAlveolesLibres()
{
    delete ui;
}

void TestAlveolesLibres::AfficherAlveolesLibres()
{
    ui->listWidgetAlveolesLibres->clear();
    for(int & numAlveole : lesAlveoles)
        ui->listWidgetAlveolesLibres->addItem(QString::number(numAlveole));
}

void TestAlveolesLibres::on_pushButtonReserver_clicked()
{
    int rangee;
    int colonne;
    if(lesAlveoles.Reserver(rangee,colonne))
    {
        QString texte = QString::number(rangee) + "," + QString::number(colonne);
        ui->listWidgetAlveolesOccuppees->addItem(texte);
        AfficherAlveolesLibres();
    }
}

void TestAlveolesLibres::on_pushButtonLiberer_clicked()
{
    QListWidgetItem *item = ui->listWidgetAlveolesOccuppees->currentItem();
    QString texte = item->text();
    delete item;
    QStringList coord = texte.split(",");
    lesAlveoles.Liberer(coord[0].toInt(),coord[1].toInt());
    AfficherAlveolesLibres();
    ui->listWidgetAlveolesOccuppees->setCurrentRow(-1);

}
