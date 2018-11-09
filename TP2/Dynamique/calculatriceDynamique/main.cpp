#include "calculatricedyn.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalculatriceDyn w;
    w.show();

    return a.exec();
}
