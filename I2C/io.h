#ifndef IO_H
#define IO_H

#include <QWidget>
#include <QString>

namespace Ui {
class IO;
}

class IO : public QWidget
{
    Q_OBJECT

public://explicit
     IO(QWidget *parent = nullptr, QString str = "FT2232_CH1");
    ~IO();

private:
    void change_box_name(QString&);
    void init_connections(void);

private slots:
    void have_input_byte(void);
    void send_clicked(void);

private:
    Ui::IO *ui;
    QString Title;
};

#endif // IO_H
