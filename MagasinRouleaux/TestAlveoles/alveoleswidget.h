/**
    @file alveolesWidget.h
    @brief Déclaration de la classe alveolesWidget, correspondant à l'IHM
    @author Paul HABERT
    @date 16/10/2018
*/

#ifndef ALVEOLESWIDGET_H
#define ALVEOLESWIDGET_H

#include <QWidget>
#include "alveoleslibres.h"

namespace Ui {
class AlveolesWidget;
}

class AlveolesWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AlveolesWidget(QWidget *parent = nullptr);
    ~AlveolesWidget();

private slots:
    void on_pushButtonReserver_clicked();

    void on_pushButtonLiberer_clicked();

private:
    Ui::AlveolesWidget *ui;
    AlveolesLibres mesAlveoles;
};
#endif // ALVEOLESWIDGET_H
