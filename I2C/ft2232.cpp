#include "ft2232.h"
#include "ui_ft2232.h"
#include "ui_console.h"
#include "ui_io.h"
#include "console.h"
#include "io.h"

#include <QLabel>
#include <QMessageBox>
#include <QHBoxLayout>



FT2232::FT2232(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FT2232),
    layout(new QHBoxLayout),
    status_label(new QLabel)
{
    ui->setupUi(this);

    init_connections();
    change_ch1_window(new IO(nullptr, "FT2232_CH1"));
    change_ch2_window(new IO(nullptr, "FT2232_CH2"));
}

FT2232::~FT2232()
{
    delete ui;
    delete layout;
    delete status_label;
}


void FT2232::init_connections()
{
    //Enable/Disable Signal
    connect(ui->ch1_status, QOverload<const QString &>::of(&QComboBox::currentTextChanged), this, &FT2232::ch1_en);
    connect(ui->ch2_status, QOverload<const QString &>::of(&QComboBox::currentTextChanged), this, &FT2232::ch2_en);

    //CMD mode signal
    connect(ui->ch1_uart_cmd, QOverload<const QString &>::of(&QComboBox::currentTextChanged), this, &FT2232::ch1_cmd);
    connect(ui->ch2_uart_cmd, QOverload<const QString &>::of(&QComboBox::currentTextChanged), this, &FT2232::ch2_cmd);
}


void FT2232::change_ch1_window(QWidget *widget)
{
    if(widget == nullptr){
        if(old_left_widget == nullptr){
            return;
        }else{
            layout->removeWidget(old_left_widget);
            delete old_left_widget;
            old_left_widget = nullptr;
        }
    }else{
        if(old_left_widget == nullptr)
            layout->addWidget(widget);
        else{
            layout->replaceWidget(old_left_widget, widget);
            delete old_left_widget;
        }
        old_left_widget = widget;
    }
    ui->out_window->setLayout(layout);
}
void FT2232::change_ch2_window(QWidget *widget)
{
    if(widget == nullptr){
        if(old_right_widget == nullptr){
            return;
        }else{
            layout->removeWidget(old_right_widget);
            delete old_right_widget;
            old_right_widget = nullptr;
        }
    }else{
        if(old_right_widget == nullptr)
            layout->addWidget(widget);
        else{
            layout->replaceWidget(old_right_widget, widget);
            delete old_right_widget;
        }
        old_right_widget = widget;
    }
    ui->out_window->setLayout(layout);
}



//Slots
void FT2232::ch1_en(const QString& str)
{
    if(str == "Disable"){
       change_ch1_window(nullptr);
       ui->ch1_settings->setEnabled(false);
       ui->ch1_hex_chkbox->setEnabled(false);
       ui->ch1_open->setEnabled(false);
    }else if(str == "Enable"){
        change_ch1_window(new IO(nullptr, "FT2232_CH1"));
        ui->ch1_settings->setEnabled(true);
        ui->ch1_hex_chkbox->setEnabled(true);
        ui->ch1_open->setEnabled(true);
    }
}
void FT2232::ch2_en(const QString& str)
{
    if(str == "Disable"){
       change_ch2_window(nullptr);
        ui->ch2_settings->setEnabled(false);
        ui->ch1_hex_chkbox->setEnabled(false);
        ui->ch1_open->setEnabled(false);
    }else if(str == "Enable"){
        change_ch2_window(new IO(nullptr, "FT2232_CH2"));
        ui->ch2_settings->setEnabled(true);
        ui->ch1_hex_chkbox->setEnabled(true);
        ui->ch1_open->setEnabled(true);
    }
}

void FT2232::ch1_cmd(const QString& str)
{
    if(str == "Disable"){
       change_ch1_window(new IO(nullptr, "FT2232_CH1"));
    }else if(str == "Enable"){
        change_ch1_window(new Console(nullptr, "FT2232_CH1"));

    }
}
void FT2232::ch2_cmd(const QString& str)
{
    if(str == "Disable")
       change_ch2_window(new IO(nullptr, "FT2232_CH2"));
    else if(str == "Enable")
        change_ch2_window(new Console(nullptr, "FT2232_CH2"));
}




















