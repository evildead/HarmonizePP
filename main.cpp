/*************************************************
 *                                               *
 *   Author: Danilo Carrabino                    *
 *                                               *
 *************************************************/


#include "harmonizemainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HarmonizeMainWindow w;
    w.show();

    return a.exec();
}
