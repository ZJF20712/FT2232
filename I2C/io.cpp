#include "io.h"
#include "ui_io.h"
#include <QDebug>

#define ECHO_TEST

IO::IO(QWidget *parent, QString str) :
    QWidget(parent),
    ui(new Ui::IO),
    Title(str)
{
    ui->setupUi(this);
    change_box_name(Title);

    ui->receive_out->setReadOnly(true);
    QPalette p = palette();
    //p.setColor(QPalette::Base, Qt::white);
    p.setColor(QPalette::Text, Qt::green);
    ui->receive_out->setPalette(p);
    ui->send_in->setTextColor(Qt::green);



    init_connections();
}

IO::~IO()
{
    delete ui;
}


//Private class functions
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


//Slots
void IO::receive_bytes(QString & str)
{
    ui->receive_out->insertPlainText(str);
}

void IO::clear_send(void)
{
    ui->send_in->clear();
}
void IO::clear_receive(void)
{
    ui->receive_out->clear();
}
void IO::have_input_byte()
{
    QTextCursor cursor = ui->send_in->textCursor();
#ifndef NO_DBG
    qDebug() << "Cursor in"<< Title <<":" << cursor.position();
#endif
    if(cursor.position() > 0)
        ui->send_botton->setEnabled(true);
    else
        ui->send_botton->setEnabled(false);
}
void IO::send_clicked()
{
#ifdef ECHO_TEST
    QString str = ui->send_in->toPlainText();
    ui->receive_out->insertPlainText(str);
#endif

}
