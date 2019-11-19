#ifndef CONSOLE_H
#define CONSOLE_H

#include <QWidget>

namespace Ui {
class Console;
}

class Console : public QWidget
{
    Q_OBJECT

public:
    explicit Console(QWidget *parent = nullptr, QString str = "FT2232_CH1");
    ~Console();

private:
    Ui::Console *ui;
    QString Title;
};

#endif // CONSOLE_H
