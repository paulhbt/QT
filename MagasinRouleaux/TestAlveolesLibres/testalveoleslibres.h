#ifndef TESTALVEOLESLIBRES_H
#define TESTALVEOLESLIBRES_H

#include <QWidget>
#include "alveoleslibres.h"

namespace Ui {
class TestAlveolesLibres;
}

class TestAlveolesLibres : public QWidget
{
    Q_OBJECT

public:
    explicit TestAlveolesLibres(QWidget *parent = 0);
    ~TestAlveolesLibres();
    void AfficherAlveolesLibres();

private slots:
    void on_pushButtonReserver_clicked();

    void on_pushButtonLiberer_clicked();

private:
    Ui::TestAlveolesLibres *ui;
    AlveolesLibres lesAlveoles;
};

#endif // TESTALVEOLESLIBRES_H
