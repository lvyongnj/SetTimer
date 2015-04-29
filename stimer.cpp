#include "stimer.h"

stimer::stimer()
{
    command = new char[COMMAND_LEN];
    comm_noLi = new char[COMMAND_LEN];
    com = new serialCom;
    ct = new currentTime;
    ct->latestTime();
//包头
    command[0]=0x54;
    command[1]=0x58;
    command[2]=0x4c;
    command[3]=0x45;
    command[4]=0x44;
    command[5]=0x43;
    command[6]=0x4f;
    command[7]=0x4e;
    command[8]=0x54;
    command[9]=0x52;
    command[10]=0x4f;
    command[11]=0x4c;
    command[12]=0x4c;
    command[13]=0x45;
    command[14]=0x52;
    command[15]=0xbb;
//命令
    command[16]=0x01;

    command[17]=0xbb;
    command[18]=0x00;
    command[19]=0x00;
    command[20]=0x00;
    command[21]=0x11;
    command[22]=0x11;
    command[23]=0x11;
    command[24]=0x11;
    command[25]=0x00;
    command[26]=0x00;
    command[27]=0x00;
    command[28]=0x00;
    command[29]=0x10;
    command[30]=0x10;
    command[31]=0x10;
    command[32]=0x10;
    command[33]=0x00;
    command[34]=0x00;
    command[35]=0x00;
    command[36]=0x00;

    command[37] = ct->second();
    command[38] = ct->minute();
    command[39] = ct->hour();
    command[40] = ct->day();
    command[41] = ct->month();
    command[42] = ct->year();
    command[43] = ct->week();

    strncpy(comm_noLi, command, 44);

    readFromConf("SetTimer1");
    if(m_noWeekLimit == true)
        com->openCom(comm_noLi, COMMAND_LEN);
    else
        com->openCom(command, COMMAND_LEN);
}

stimer::~stimer()
{
    writeToConf("SetTimer1");
}

void stimer::readFromConf(char *confname)
{
    QSettings conf("SetTimer.org", confname);
    m_noWeekLimit = conf.value("weekLimit").toBool();
    for(int i = 1; i <= 7; i++){
        char qe = 0x00, qe2 = 0x00;
        for(int j = 0; j <= 7; j++){
            char buf[100];
            sprintf(buf, "planEnable_week%d_plan%d", i, j);
            qe |= (conf.value(buf).toInt() << j);
            sprintf(buf, "NoWeekLimit/planEnable_plan%d", j);
            qe2 |= (conf.value(buf).toInt() << j);
        }
        command[53 + (i-1)*32] = qe;
        comm_noLi[53 + (i-1)*32] = qe2;
        for(int j = 0; j <= 7; j++){
            char buf[100];
            sprintf(buf, "hour_week%d_plan%d", i, j);
            command[53 + (i-1)*32 + 1 + j*3] = conf.value(buf).toInt();
            sprintf(buf, "NoWeekLimit/hour_plan%d", j);
            comm_noLi[53 + (i-1)*32 + 1 + j*3] = conf.value(buf).toInt();

            sprintf(buf, "minute_week%d_plan%d", i, j);
            command[53 + (i-1)*32 + 2 + j*3] = conf.value(buf).toInt();
            sprintf(buf, "NoWeekLimit/minute_plan%d", j);
            comm_noLi[53 + (i-1)*32 + 2 + j*3] = conf.value(buf).toInt();

            char sw = 0x00, sw2 = 0x00;
            for(int k = 0; k <= 7; k++){
                sprintf(buf, "switch_week%d_plan%d_switch%d", i, j, k);
                sw |= (conf.value(buf).toInt() << k);
                sprintf(buf, "NOWeekLimit/switch_plan%d_switch%d", j, k);
                sw2 |= (conf.value(buf).toInt() << k);
            }
            command[53 + (i-1)*32 + 3 + j*3] = sw;
            comm_noLi[53 + (i-1)*32 + 3 + j*3] = sw2;
        }
    }
}

void stimer::writeToConf(char *confname)
{
    QSettings conf("SetTimer.org", confname);
    conf.setValue("weekLimit", m_noWeekLimit);
    for(int i = 1; i <= 7; i++){
        for(int j = 0; j <= 7; j++){
            char buf[100], qe, qe2;
            qe = ((command[53+(i-1)*32]>>j) & 0x01);
            sprintf(buf, "planEnable_week%d_plan%d", i, j);
            conf.setValue(buf,  qe);
            qe2 = ((comm_noLi[53+(i-1)*32]>>j) & 0x01);
            sprintf(buf, "NoWeekLimit/planEnable_plan%d", j);
            conf.setValue(buf,  qe2);
        }
        for(int j = 0; j <= 7; j++){
            char buf[100];
            sprintf(buf, "NoWeekLimit/hour_plan%d", j);
            conf.setValue(buf, comm_noLi[53 + (i-1)*32 + 1 + j*3]);
            sprintf(buf, "hour_week%d_plan%d", i, j);
            conf.setValue(buf, command[53 + (i-1)*32 + 1 + j*3]);

            sprintf(buf, "minute_week%d_plan%d", i, j);
            conf.setValue(buf, command[53 + (i-1)*32 + 2 + j*3]);
            sprintf(buf, "NoWeekLimit/minute_plan%d", j);
            conf.setValue(buf, comm_noLi[53 + (i-1)*32 + 2 + j*3]);

            for(int k = 0; k <= 7; k++){
                char sw = 0x00;
                sprintf(buf, "switch_week%d_plan%d_switch%d", i, j, k);
                sw = (command[53 + (i-1)*32 + 3 + j*3]>>k) & 0x01;
                conf.setValue(buf, sw);
                sprintf(buf, "NoWeekLimit/switch_plan%d_switch%d", j, k);
                sw = (comm_noLi[53 + (i-1)*32 + 3 + j*3]>>k) & 0x01;
                conf.setValue(buf, sw);
            }
        }
    }
}

void stimer::setNoWeekLimit(bool a)
{
    m_noWeekLimit = a;
}

bool stimer::noWeekLimit() const
{
    return m_noWeekLimit;
}

int stimer::getTimerStatus(int week, int n)
{
    if(noWeekLimit())
        return ((comm_noLi[53+week*32]>>n) & 0x01);
    else
        return ((command[53+week*32]>>n) & 0x01);
}
void stimer::setTimerStatue(int week, int n, bool s)
{
    if(noWeekLimit()){
        if(s)
            comm_noLi[53 + week*32] |= (1 << n);
        else
            comm_noLi[53 + week*32] &= ~(1 << n);
    }
    else{
        if(s)
            command[53 + week*32] |= 1 << n;
        else
            command[53 + week*32] &= ~(1 << n);
    }
}
int stimer::getTimerHour(int week, int n)
{
    if(noWeekLimit())
        return comm_noLi[53 + week*32 + 1 + n*3];
    else
        return command[53 + week*32 + 1 + n*3];
}
void stimer::setTimerHour(int week, int n, int h)
{
    if(noWeekLimit())
        comm_noLi[53 + week*32 + 1 + n*3] = h;
    else
        command[53 + week*32 + 1 + n*3] = h;
}
int stimer::getTimerMinute(int week, int n)
{
    if(noWeekLimit())
        return comm_noLi[53 + week*32 + 2 + n*3];
    else
        return command[53 + week*32 + 2 + n*3];
}
void stimer::setTimerMinute(int week, int n, int m)
{
    if(noWeekLimit())
        comm_noLi[53 + week*32 + 2 + n*3] = m;
    else
        command[53 + week*32 + 2 + n*3] = m;
}
int stimer::getSwitch(int week, int n, int n2)
{
    if(noWeekLimit())
        return ((comm_noLi[53 + week*32 + 3 + n*3] >> n2) & 0x01);
    else
        return ((command[53 + week*32 + 3 + n*3] >> n2) & 0x01);
}
void stimer::setSwitch(int week, int n, int n2, bool s)
{
    if(noWeekLimit()){
        if(s)
            comm_noLi[53 + week*32 + 3 + n*3] |= (1 << n2);
        else
            comm_noLi[53 + week*32 + 3 + n*3] &= ~(1 << n2);
    }
    else{
        if(s)
            command[53 + week*32 + 3 + n*3] |= (1 << n2);
        else
            command[53 + week*32 + 3 + n*3] &= ~(1 << n2);
    }
}
void stimer::write2com()
{
    if(noWeekLimit()){
        ct->latestTime();
        comm_noLi[37] = ct->second();
        comm_noLi[38] = ct->minute();
        comm_noLi[39] = ct->hour();
        comm_noLi[40] = ct->day();
        comm_noLi[41] = ct->month();
        comm_noLi[42] = ct->year();
        comm_noLi[43] = ct->week();
        com->writeToCom(comm_noLi, COMMAND_LEN);
    }
    else{
        ct->latestTime();
        command[37] = ct->second();
        command[38] = ct->minute();
        command[39] = ct->hour();
        command[40] = ct->day();
        command[41] = ct->month();
        command[42] = ct->year();
        command[43] = ct->week();
        com->writeToCom(command, COMMAND_LEN);
    }
}
