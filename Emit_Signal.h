#ifndef EMIT_SIGNAL_H
#define EMIT_SIGNAL_H
#include<QObject>
#include<QString>
#include<iostream>
class Emitter:public QObject
{
    Q_OBJECT
public:
    Emitter();
    void emit_signal_1();
    void emit_signal_2();
    void emit_signal_3();
signals:
    void signal_1();
    void signal_2();
    void signal_3();
};

#endif // EMIT_SIGNAL_H
