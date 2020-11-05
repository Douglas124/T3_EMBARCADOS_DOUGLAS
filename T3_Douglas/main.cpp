#include "acesso.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Acesso w;
    w.show();
    return a.exec();
}
