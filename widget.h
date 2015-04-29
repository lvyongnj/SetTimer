#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "stimer.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:

    void on_checkBox_clicked();

    void on_pushButton_clicked();

    void on_checkBox_1_1_clicked();

    void on_checkBox_1_2_clicked();

    void on_checkBox_1_3_clicked();

    void on_checkBox_1_4_clicked();

    void on_checkBox_1_5_clicked();

    void on_checkBox_1_6_clicked();

    void on_checkBox_1_7_clicked();

    void on_checkBox_1_8_clicked();

    void on_checkBox_2_1_clicked();

    void on_checkBox_2_2_clicked();

    void on_checkBox_2_3_clicked();

    void on_checkBox_2_4_clicked();

    void on_checkBox_2_5_clicked();

    void on_checkBox_2_6_clicked();

    void on_checkBox_2_7_clicked();

    void on_checkBox_2_8_clicked();

    void on_checkBox_3_1_clicked();

    void on_checkBox_3_2_clicked();

    void on_checkBox_3_3_clicked();

    void on_checkBox_3_4_clicked();

    void on_checkBox_3_5_clicked();

    void on_checkBox_3_6_clicked();

    void on_checkBox_3_7_clicked();

    void on_checkBox_3_8_clicked();

    void on_checkBox_4_1_clicked();

    void on_checkBox_4_2_clicked();

    void on_checkBox_4_3_clicked();

    void on_checkBox_4_4_clicked();

    void on_checkBox_4_5_clicked();

    void on_checkBox_4_6_clicked();

    void on_checkBox_4_7_clicked();

    void on_checkBox_4_8_clicked();

    void on_checkBox_5_1_clicked();

    void on_checkBox_5_2_clicked();

    void on_checkBox_5_3_clicked();

    void on_checkBox_5_4_clicked();

    void on_checkBox_5_5_clicked();

    void on_checkBox_5_6_clicked();

    void on_checkBox_5_7_clicked();

    void on_checkBox_5_8_clicked();

    void on_checkBox_6_1_clicked();

    void on_checkBox_6_2_clicked();

    void on_checkBox_6_3_clicked();

    void on_checkBox_6_4_clicked();

    void on_checkBox_6_5_clicked();

    void on_checkBox_6_6_clicked();

    void on_checkBox_6_7_clicked();

    void on_checkBox_6_8_clicked();

    void on_checkBox_7_1_clicked();

    void on_checkBox_7_2_clicked();

    void on_checkBox_7_3_clicked();

    void on_checkBox_7_4_clicked();

    void on_checkBox_7_5_clicked();

    void on_checkBox_7_6_clicked();

    void on_checkBox_7_7_clicked();

    void on_checkBox_7_8_clicked();

private:
    Ui::Widget *ui;
    stimer *st;

    QCheckBox ***cb;
    QTimeEdit ***te;
    QRadioButton ****rb;

    void showStatus();
    void enableTimer(int, int);
};

#endif // WIDGET_H
