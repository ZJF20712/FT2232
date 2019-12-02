/********************************************************************************
** Form generated from reading UI file 'io.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IO_H
#define UI_IO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IO
{
public:
    QGridLayout *gridLayout;
    QGroupBox *io_box;
    QGridLayout *gridLayout_5;
    QGroupBox *send_box;
    QGridLayout *gridLayout_3;
    QTextEdit *send_in;
    QGroupBox *receive_box;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *receive_out;
    QGroupBox *functions;
    QGridLayout *gridLayout_4;
    QCheckBox *multi_send;
    QCheckBox *send_enter;
    QSpinBox *delay;
    QPushButton *send_botton;

    void setupUi(QWidget *IO)
    {
        if (IO->objectName().isEmpty())
            IO->setObjectName(QString::fromUtf8("IO"));
        IO->resize(726, 1330);
        gridLayout = new QGridLayout(IO);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        io_box = new QGroupBox(IO);
        io_box->setObjectName(QString::fromUtf8("io_box"));
        io_box->setMinimumSize(QSize(700, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Ebrima"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        io_box->setFont(font);
        gridLayout_5 = new QGridLayout(io_box);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        send_box = new QGroupBox(io_box);
        send_box->setObjectName(QString::fromUtf8("send_box"));
        gridLayout_3 = new QGridLayout(send_box);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        send_in = new QTextEdit(send_box);
        send_in->setObjectName(QString::fromUtf8("send_in"));

        gridLayout_3->addWidget(send_in, 0, 0, 1, 1);


        gridLayout_5->addWidget(send_box, 1, 0, 1, 2);

        receive_box = new QGroupBox(io_box);
        receive_box->setObjectName(QString::fromUtf8("receive_box"));
        gridLayout_2 = new QGridLayout(receive_box);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        receive_out = new QPlainTextEdit(receive_box);
        receive_out->setObjectName(QString::fromUtf8("receive_out"));

        gridLayout_2->addWidget(receive_out, 0, 0, 1, 1);


        gridLayout_5->addWidget(receive_box, 0, 0, 1, 2);

        functions = new QGroupBox(io_box);
        functions->setObjectName(QString::fromUtf8("functions"));
        gridLayout_4 = new QGridLayout(functions);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        multi_send = new QCheckBox(functions);
        multi_send->setObjectName(QString::fromUtf8("multi_send"));

        gridLayout_4->addWidget(multi_send, 0, 1, 1, 1);

        send_enter = new QCheckBox(functions);
        send_enter->setObjectName(QString::fromUtf8("send_enter"));

        gridLayout_4->addWidget(send_enter, 0, 0, 1, 1);

        delay = new QSpinBox(functions);
        delay->setObjectName(QString::fromUtf8("delay"));
        delay->setEnabled(false);

        gridLayout_4->addWidget(delay, 0, 2, 1, 1);


        gridLayout_5->addWidget(functions, 3, 0, 1, 1, Qt::AlignLeft);

        send_botton = new QPushButton(io_box);
        send_botton->setObjectName(QString::fromUtf8("send_botton"));
        send_botton->setEnabled(false);

        gridLayout_5->addWidget(send_botton, 3, 1, 1, 1, Qt::AlignVCenter);


        gridLayout->addWidget(io_box, 0, 0, 1, 1);


        retranslateUi(IO);

        QMetaObject::connectSlotsByName(IO);
    } // setupUi

    void retranslateUi(QWidget *IO)
    {
        IO->setWindowTitle(QCoreApplication::translate("IO", "Form", nullptr));
        io_box->setTitle(QCoreApplication::translate("IO", "FT2232_CH", nullptr));
        send_box->setTitle(QCoreApplication::translate("IO", "Send", nullptr));
        receive_box->setTitle(QCoreApplication::translate("IO", "Receive", nullptr));
        functions->setTitle(QCoreApplication::translate("IO", "Functions", nullptr));
        multi_send->setText(QCoreApplication::translate("IO", "Multi send Delay(ms):", nullptr));
        send_enter->setText(QCoreApplication::translate("IO", "Send Enter", nullptr));
        send_botton->setText(QCoreApplication::translate("IO", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IO: public Ui_IO {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IO_H
