#ifndef FT2232_H
#define FT2232_H

#include <QMainWindow>
#include <QHBoxLayout>


QT_BEGIN_NAMESPACE

class QLabel;

namespace Ui {
class FT2232;
}
QT_END_NAMESPACE

class IO;
class Console;


class FT2232 : public QMainWindow
{
    Q_OBJECT

public:
    explicit FT2232(QWidget *parent = nullptr);
    ~FT2232();

private slots:
    void ch1_en(const QString& str);
    void ch2_en(const QString& str);
    void ch1_cmd(const QString& str);
    void ch2_cmd(const QString& str);

private:
    void init_connections();
    void change_ch1_window(QWidget *widget);
    void change_ch2_window(QWidget *widget);


private:
    Ui::FT2232 *ui;
    QHBoxLayout *layout = nullptr;
    QLabel *status_label = nullptr;
    QWidget *old_left_widget = nullptr;
    QWidget *old_right_widget = nullptr;
};

#endif // FT2232_H
