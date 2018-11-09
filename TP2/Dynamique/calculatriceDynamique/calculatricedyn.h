#ifndef CALCULATRICEDYN_H
#define CALCULATRICEDYN_H

#include <QWidget>

namespace Ui {
class CalculatriceDyn;
}

class CalculatriceDyn : public QWidget
{
    Q_OBJECT

public:
    explicit CalculatriceDyn(QWidget *parent = nullptr);
    ~CalculatriceDyn();

private:
    Ui::CalculatriceDyn *ui;
};

#endif // CALCULATRICEDYN_H
