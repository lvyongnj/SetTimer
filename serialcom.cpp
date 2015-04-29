#include "serialcom.h"

serialCom::serialCom()
{
    comport = new QSerialPort();
}

serialCom::~serialCom()
{
    delete comport;
}

bool serialCom::openCom(char *com, int size) {
    if (comport->isOpen()) {
        return true;
    }
    int flag = 0;

    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts()){
        comport->setPortName(info.portName());
        comport->setDataBits(QSerialPort::Data8);
        comport->setParity(QSerialPort::NoParity);
        comport->setStopBits(QSerialPort::OneStop);
        comport->setBaudRate(QSerialPort::Baud115200);
        comport->open(QIODevice::ReadWrite);
        rcvData.clear();
        comport->write(com, size);
        while (comport->waitForReadyRead(1000))
             rcvData.append(comport->readAll());
        if(!strncmp("G", rcvData.data(), 1)){
            flag = 1;
            break;
        }
        else
            comport->close();
    }
    if(flag == 0)
        return false;
    else
        return true;  
}

bool serialCom::writeToCom(char *com, int size)
{
    rcvData.clear();
    comport->write(com, size);
/*
    for(int i = 0; i < size; i++){
        printf("%x  ", com[i]);
        if((i == 16) || (i == 52))
            printf("\n");
        else if(((i-52)%32== 0) && (i > 52))
            printf("\n");
    }
*/
    return true;
}

char* serialCom::readFromCom()
{
    while (comport->waitForReadyRead(1000))
        rcvData.append(comport->readAll());

    return rcvData.data();
}
