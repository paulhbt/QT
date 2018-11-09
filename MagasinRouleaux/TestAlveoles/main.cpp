#include "alveoleswidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AlveolesWidget w;
    w.show();

    return a.exec();
}
