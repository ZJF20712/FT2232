#include "io.h"
#include "ui_io.h"

IO::IO(QWidget *parent, QString str) :
    QWidget(parent),
    ui(new Ui::IO),
    Title(str)
{
    ui->setupUi(this);
    change_box_name(Title);
    QPalette p = palette();
    p.setColor(QPalette::Base, Qt::white);
    p.setColor(QPalette::Text, Qt::green);
    ui->receive_out->setPalette(p);
    ui->send_in->setTextColor(Qt::green);

    init_connections();
}

IO::~IO()
{
    delete ui;
}


void IO::init_connections()
{
    connect(ui->send_in, &QTextEdit::cursorPositionChanged, this, &IO::have_input_byte);
    connect(ui->send_botton, &QPushButton::clicked, this, &IO::send_clicked);
    //connect(ui->send_in, SIGNAL(cursorPositionChanged()), this, SLOT(have_input_byte()));
    //connect(ui->send_botton, SIGNAL(clicked()), this, SLOT(send_clicked()));


}

void IO::change_box_name(QString& str)
{
    ui->io_box->setTitle(str);

}



void IO::have_input_byte()
{
    //if(ui->send_in->)
        ui->send_botton->setEnabled(true);
    //else
        //ui->send_botton->ser_Enabled(false);
}

void IO::send_clicked()
{

}
