/********************************************************************************
** Form generated from reading UI file 'console.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLE_H
#define UI_CONSOLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Console
{
public:
    QGridLayout *gridLayout;
    QGroupBox *console_box;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Console)
    {
        if (Console->objectName().isEmpty())
            Console->setObjectName(QString::fromUtf8("Console"));
        Console->resize(718, 1539);
        gridLayout = new QGridLayout(Console);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        console_box = new QGroupBox(Console);
        console_box->setObjectName(QString::fromUtf8("console_box"));
        console_box->setMinimumSize(QSize(700, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Ebrima"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        console_box->setFont(font);
        gridLayout_2 = new QGridLayout(console_box);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        plainTextEdit = new QPlainTextEdit(console_box);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout_2->addWidget(plainTextEdit, 0, 0, 1, 1);


        gridLayout->addWidget(console_box, 0, 0, 1, 1);


        retranslateUi(Console);

        QMetaObject::connectSlotsByName(Console);
    } // setupUi

    void retranslateUi(QWidget *Console)
    {
        Console->setWindowTitle(QCoreApplication::translate("Console", "Form", nullptr));
        console_box->setTitle(QCoreApplication::translate("Console", "FT2232_CH", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Console: public Ui_Console {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLE_H
