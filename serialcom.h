#ifndef SERIALCOM_H
#define SERIALCOM_H

#include <QtSerialPort/QtSerialPort>
#include <windows.h>
#include <stdio.h>
#include <iostream>

using namespace std;

class serialCom
{
public:
    serialCom();
    ~serialCom();
    bool openCom(char *, int);
    bool writeToCom(char *, int);
    char* readFromCom();

private:
    QSerialPort *comport;
    QByteArray rcvData;
};

#endif // SERIALCOM_H
