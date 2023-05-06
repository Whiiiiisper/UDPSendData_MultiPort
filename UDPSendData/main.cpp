#include "UDPSendData.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UDPSendData w;
    w.show();
    return a.exec();
}
