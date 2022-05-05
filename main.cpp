#include "mainwindow.h"
#include "Emit_Signal.h"
#include "Receiver.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Emitter e1;
    e1.setObjectName("sy obj");
    Receiver r1;
    QObject::connect(&e1,SIGNAL(signal_1()),&r1,SLOT(slot_1()));
    QObject::connect(&e1,SIGNAL(signal_1()),&r1,SLOT(slot_2()));
    QObject::connect(&e1,SIGNAL(signal_2()),&r1,SLOT(slot_3()));
    e1.emit_signal_1();
    e1.emit_signal_2();
    return a.exec();
}
