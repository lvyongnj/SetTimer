#ifndef STIMER_H
#define STIMER_H
#include <QObject>
#include <QSettings>
#include <QCheckBox>
#include <QTimeEdit>
#include <QRadioButton>
#include "serialcom.h"
#include "currenttime.h"

#define COMMAND_LEN 293

class stimer
{
public:
    stimer();
    ~stimer();
    void setNoWeekLimit(bool);
    bool noWeekLimit() const;
    int getTimerStatus(int week, int n);
    void setTimerStatue(int week, int n, bool s);
    int getTimerHour(int week, int n);
    void setTimerHour(int week, int n, int h);
    int getTimerMinute(int week, int n);
    void setTimerMinute(int week, int n, int m);
    int getSwitch(int week, int n, int n2);
    void setSwitch(int week, int n, int n2, bool s);

    void write2com();

private:
    bool  m_noWeekLimit;  //
    char *command;      //有星期限制的命令包
    char *comm_noLi; //无星期限制的命令包

    serialCom *com;
    currentTime *ct;

    void readFromConf(char *);
    void writeToConf(char *);
};

#endif // STIMER_H
