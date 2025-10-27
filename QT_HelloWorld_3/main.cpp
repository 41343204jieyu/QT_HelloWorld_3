#include "designwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DesignWidget w;
    w.show();
    return a.exec();
}
