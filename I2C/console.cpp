#include "console.h"
#include "ui_console.h"

Console::Console(QWidget *parent, QString str) :
    QWidget(parent),
    ui(new Ui::Console),
    Title(str)
{
    ui->setupUi(this);
    ui->console_box->setTitle(Title);
    QPalette p = palette();
    p.setColor(QPalette::Base, Qt::white);
    p.setColor(QPalette::Text, Qt::blue);
    ui->plainTextEdit->setPalette(p);
}

Console::~Console()
{
    delete ui;
}
