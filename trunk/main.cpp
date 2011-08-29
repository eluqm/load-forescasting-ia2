#include <QtGui/QApplication>
#include "interfaze.h"
#include <plottab.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Interfaze w;
    w.show();

    return a.exec();
}
