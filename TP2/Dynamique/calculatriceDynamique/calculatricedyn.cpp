#include "calculatricedyn.h"
#include "ui_calculatricedyn.h"

CalculatriceDyn::CalculatriceDyn(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CalculatriceDyn)
{
    ui->setupUi(this);
}

CalculatriceDyn::~CalculatriceDyn()
{
    delete ui;
}
