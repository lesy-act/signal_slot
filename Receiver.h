#ifndef RECEIVER_H
#define RECEIVER_H
#include<QObject>
#include<QString>
#include<iostream>

class Receiver:public QObject
{
    Q_OBJECT
public:
    Receiver();
public slots:
    void slot_1();
    void slot_2();
    void slot_3();
};

#endif // RECEIVER_H
