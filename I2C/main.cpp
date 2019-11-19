#include "ft2232.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FT2232 w;
    w.show();

    return a.exec();
}
