/********************************************************************************
** Form generated from reading UI file 'ft2232.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FT2232_H
#define UI_FT2232_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FT2232
{
public:
    QAction *actionload;
    QAction *actionSave_Settings;
    QAction *actionImport;
    QAction *actionSave_Data;
    QAction *actionEnglish;
    QAction *actionChinese;
    QAction *actionColor;
    QAction *actionVersion;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QWidget *verticalWidget;
    QVBoxLayout *Function_box;
    QGroupBox *ch1_ctrl;
    QGridLayout *gridLayout_3;
    QLabel *ch1_enable_label;
    QTabWidget *ch1_settings;
    QWidget *ch1_uart;
    QGridLayout *gridLayout_4;
    QLabel *ch1_uart_speed_label;
    QSpinBox *ch1_uart_speed;
    QLabel *ch1_uart_data_len_label;
    QComboBox *ch1_uart_data_len;
    QLabel *ch1_uart_chkbit_label;
    QComboBox *ch1_uart_chkbit;
    QLabel *ch1_uart_stopbit_label;
    QComboBox *ch1_uart_stopbit;
    QLabel *ch1_uart_cmd_label;
    QComboBox *ch1_uart_cmd;
    QWidget *ch1_i2c;
    QGridLayout *gridLayout_6;
    QLabel *ch1_i2c_dir_label;
    QComboBox *ch1_i2c_dir;
    QLabel *ch1_i2c_addrlen_label;
    QComboBox *ch1_i2c_add_len;
    QLabel *ch1_i2c_addr;
    QSpinBox *ch1_i2c_addr_2;
    QLabel *ch1_i2c_speed_label;
    QSpinBox *ch1_i2c_speed;
    QLabel *ch1_i2c_data_len_label;
    QComboBox *ch1_i2c_data_len;
    QWidget *ch1_spi;
    QGridLayout *gridLayout_7;
    QLabel *ch1_spi_dir_label;
    QComboBox *ch1_spi_dir;
    QLabel *ch1_spi_cpol_label;
    QComboBox *ch1_spi_cpol;
    QLabel *ch1_spi_cpha_label;
    QComboBox *ch1_spi_cpha;
    QLabel *ch1_spi_speed_label;
    QSpinBox *ch1_spi_speed;
    QLabel *ch1_spi_data_len_label;
    QComboBox *ch1_spi_data_len;
    QPushButton *ch1_open;
    QCheckBox *ch1_hex_chkbox;
    QComboBox *ch1_status;
    QGroupBox *ch2_crrl;
    QGridLayout *gridLayout_2;
    QTabWidget *ch2_settings;
    QWidget *ch2_uart;
    QGridLayout *gridLayout_8;
    QLabel *ch2_uart_spd_label;
    QSpinBox *ch2_uart_speed;
    QLabel *ch2_uart_bata_len_label;
    QComboBox *ch2_uart_data_len;
    QLabel *ch2_uart_chk_label;
    QComboBox *ch2_uart_chkbit;
    QLabel *ch2_uart_stopbit_label;
    QComboBox *ch2_uart_stopbit;
    QLabel *ch2_uart_cmd_label;
    QComboBox *ch2_uart_cmd;
    QWidget *ch2_i2c;
    QGridLayout *gridLayout_5;
    QComboBox *ch2_i2c_data_len;
    QLabel *ch2_i2c_addr_len_label;
    QLabel *ch2_i2c_dir_label;
    QLabel *ch2_i2c_databit_label;
    QComboBox *ch2_i2c_dir;
    QSpinBox *ch2_i2c_speed;
    QComboBox *ch2_i2c_add_len;
    QLabel *ch2_i2c_addr;
    QSpinBox *ch2_i2c_addr_2;
    QLabel *ch2_i2c_speed_label;
    QWidget *tab_9;
    QGridLayout *gridLayout_9;
    QComboBox *ch2_spi_cpol;
    QLabel *ch2_spi_databit_label;
    QComboBox *ch2_spi_databit;
    QLabel *ch2_spi_cpha_label;
    QComboBox *ch2_spi_cpha;
    QComboBox *ch2_spi_dir;
    QLabel *ch2_spi_dir_label;
    QLabel *ch2_spi_speed_label;
    QSpinBox *ch2_spi_speed;
    QLabel *ch2_spi_cpol_label;
    QComboBox *ch2_status;
    QPushButton *ch2_open;
    QCheckBox *ch2_hex_chkbox;
    QLabel *ch2_en_label;
    QWidget *out_window;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuLanguage;
    QMenu *menuView;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FT2232)
    {
        if (FT2232->objectName().isEmpty())
            FT2232->setObjectName(QString::fromUtf8("FT2232"));
        FT2232->resize(500, 1806);
        actionload = new QAction(FT2232);
        actionload->setObjectName(QString::fromUtf8("actionload"));
        actionSave_Settings = new QAction(FT2232);
        actionSave_Settings->setObjectName(QString::fromUtf8("actionSave_Settings"));
        actionImport = new QAction(FT2232);
        actionImport->setObjectName(QString::fromUtf8("actionImport"));
        actionSave_Data = new QAction(FT2232);
        actionSave_Data->setObjectName(QString::fromUtf8("actionSave_Data"));
        actionEnglish = new QAction(FT2232);
        actionEnglish->setObjectName(QString::fromUtf8("actionEnglish"));
        actionChinese = new QAction(FT2232);
        actionChinese->setObjectName(QString::fromUtf8("actionChinese"));
        actionColor = new QAction(FT2232);
        actionColor->setObjectName(QString::fromUtf8("actionColor"));
        actionVersion = new QAction(FT2232);
        actionVersion->setObjectName(QString::fromUtf8("actionVersion"));
        centralWidget = new QWidget(FT2232);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalWidget = new QWidget(centralWidget);
        verticalWidget->setObjectName(QString::fromUtf8("verticalWidget"));
        verticalWidget->setMinimumSize(QSize(350, 0));
        verticalWidget->setMaximumSize(QSize(321, 16777215));
        Function_box = new QVBoxLayout(verticalWidget);
        Function_box->setSpacing(6);
        Function_box->setContentsMargins(11, 11, 11, 11);
        Function_box->setObjectName(QString::fromUtf8("Function_box"));
        ch1_ctrl = new QGroupBox(verticalWidget);
        ch1_ctrl->setObjectName(QString::fromUtf8("ch1_ctrl"));
        ch1_ctrl->setMaximumSize(QSize(321, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Ebrima"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        ch1_ctrl->setFont(font);
        gridLayout_3 = new QGridLayout(ch1_ctrl);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        ch1_enable_label = new QLabel(ch1_ctrl);
        ch1_enable_label->setObjectName(QString::fromUtf8("ch1_enable_label"));
        ch1_enable_label->setMinimumSize(QSize(161, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ebrima"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        ch1_enable_label->setFont(font1);

        gridLayout_3->addWidget(ch1_enable_label, 0, 0, 1, 1);

        ch1_settings = new QTabWidget(ch1_ctrl);
        ch1_settings->setObjectName(QString::fromUtf8("ch1_settings"));
        ch1_settings->setEnabled(true);
        ch1_settings->setTabPosition(QTabWidget::North);
        ch1_settings->setTabShape(QTabWidget::Rounded);
        ch1_settings->setElideMode(Qt::ElideNone);
        ch1_settings->setDocumentMode(false);
        ch1_uart = new QWidget();
        ch1_uart->setObjectName(QString::fromUtf8("ch1_uart"));
        gridLayout_4 = new QGridLayout(ch1_uart);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        ch1_uart_speed_label = new QLabel(ch1_uart);
        ch1_uart_speed_label->setObjectName(QString::fromUtf8("ch1_uart_speed_label"));

        gridLayout_4->addWidget(ch1_uart_speed_label, 0, 0, 1, 1, Qt::AlignLeft);

        ch1_uart_speed = new QSpinBox(ch1_uart);
        ch1_uart_speed->setObjectName(QString::fromUtf8("ch1_uart_speed"));
        ch1_uart_speed->setMinimumSize(QSize(134, 0));
        ch1_uart_speed->setMinimum(1);
        ch1_uart_speed->setMaximum(20000000);
        ch1_uart_speed->setValue(9600);

        gridLayout_4->addWidget(ch1_uart_speed, 0, 1, 1, 1, Qt::AlignRight);

        ch1_uart_data_len_label = new QLabel(ch1_uart);
        ch1_uart_data_len_label->setObjectName(QString::fromUtf8("ch1_uart_data_len_label"));

        gridLayout_4->addWidget(ch1_uart_data_len_label, 1, 0, 1, 1, Qt::AlignLeft);

        ch1_uart_data_len = new QComboBox(ch1_uart);
        ch1_uart_data_len->addItem(QString());
        ch1_uart_data_len->addItem(QString());
        ch1_uart_data_len->setObjectName(QString::fromUtf8("ch1_uart_data_len"));
        ch1_uart_data_len->setMinimumSize(QSize(134, 0));

        gridLayout_4->addWidget(ch1_uart_data_len, 1, 1, 1, 1, Qt::AlignRight);

        ch1_uart_chkbit_label = new QLabel(ch1_uart);
        ch1_uart_chkbit_label->setObjectName(QString::fromUtf8("ch1_uart_chkbit_label"));

        gridLayout_4->addWidget(ch1_uart_chkbit_label, 2, 0, 1, 1);

        ch1_uart_chkbit = new QComboBox(ch1_uart);
        ch1_uart_chkbit->addItem(QString());
        ch1_uart_chkbit->addItem(QString());
        ch1_uart_chkbit->setObjectName(QString::fromUtf8("ch1_uart_chkbit"));
        ch1_uart_chkbit->setMinimumSize(QSize(134, 0));

        gridLayout_4->addWidget(ch1_uart_chkbit, 2, 1, 1, 1, Qt::AlignRight);

        ch1_uart_stopbit_label = new QLabel(ch1_uart);
        ch1_uart_stopbit_label->setObjectName(QString::fromUtf8("ch1_uart_stopbit_label"));

        gridLayout_4->addWidget(ch1_uart_stopbit_label, 3, 0, 1, 1);

        ch1_uart_stopbit = new QComboBox(ch1_uart);
        ch1_uart_stopbit->addItem(QString());
        ch1_uart_stopbit->addItem(QString());
        ch1_uart_stopbit->setObjectName(QString::fromUtf8("ch1_uart_stopbit"));
        ch1_uart_stopbit->setMinimumSize(QSize(134, 0));

        gridLayout_4->addWidget(ch1_uart_stopbit, 3, 1, 1, 1, Qt::AlignRight);

        ch1_uart_cmd_label = new QLabel(ch1_uart);
        ch1_uart_cmd_label->setObjectName(QString::fromUtf8("ch1_uart_cmd_label"));
        ch1_uart_cmd_label->setEnabled(true);

        gridLayout_4->addWidget(ch1_uart_cmd_label, 4, 0, 1, 1, Qt::AlignLeft);

        ch1_uart_cmd = new QComboBox(ch1_uart);
        ch1_uart_cmd->addItem(QString());
        ch1_uart_cmd->addItem(QString());
        ch1_uart_cmd->setObjectName(QString::fromUtf8("ch1_uart_cmd"));
        ch1_uart_cmd->setEnabled(true);
        ch1_uart_cmd->setMinimumSize(QSize(134, 0));

        gridLayout_4->addWidget(ch1_uart_cmd, 4, 1, 1, 1, Qt::AlignRight);

        ch1_settings->addTab(ch1_uart, QString());
        ch1_i2c = new QWidget();
        ch1_i2c->setObjectName(QString::fromUtf8("ch1_i2c"));
        gridLayout_6 = new QGridLayout(ch1_i2c);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        ch1_i2c_dir_label = new QLabel(ch1_i2c);
        ch1_i2c_dir_label->setObjectName(QString::fromUtf8("ch1_i2c_dir_label"));

        gridLayout_6->addWidget(ch1_i2c_dir_label, 0, 0, 1, 1);

        ch1_i2c_dir = new QComboBox(ch1_i2c);
        ch1_i2c_dir->addItem(QString());
        ch1_i2c_dir->addItem(QString());
        ch1_i2c_dir->setObjectName(QString::fromUtf8("ch1_i2c_dir"));
        ch1_i2c_dir->setMinimumSize(QSize(134, 0));
        ch1_i2c_dir->setMaximumSize(QSize(134, 16777215));

        gridLayout_6->addWidget(ch1_i2c_dir, 0, 1, 1, 1);

        ch1_i2c_addrlen_label = new QLabel(ch1_i2c);
        ch1_i2c_addrlen_label->setObjectName(QString::fromUtf8("ch1_i2c_addrlen_label"));

        gridLayout_6->addWidget(ch1_i2c_addrlen_label, 1, 0, 1, 1);

        ch1_i2c_add_len = new QComboBox(ch1_i2c);
        ch1_i2c_add_len->addItem(QString());
        ch1_i2c_add_len->addItem(QString());
        ch1_i2c_add_len->setObjectName(QString::fromUtf8("ch1_i2c_add_len"));
        ch1_i2c_add_len->setMinimumSize(QSize(134, 0));

        gridLayout_6->addWidget(ch1_i2c_add_len, 1, 1, 1, 1);

        ch1_i2c_addr = new QLabel(ch1_i2c);
        ch1_i2c_addr->setObjectName(QString::fromUtf8("ch1_i2c_addr"));

        gridLayout_6->addWidget(ch1_i2c_addr, 2, 0, 1, 1);

        ch1_i2c_addr_2 = new QSpinBox(ch1_i2c);
        ch1_i2c_addr_2->setObjectName(QString::fromUtf8("ch1_i2c_addr_2"));
        ch1_i2c_addr_2->setMinimumSize(QSize(134, 0));

        gridLayout_6->addWidget(ch1_i2c_addr_2, 2, 1, 1, 1);

        ch1_i2c_speed_label = new QLabel(ch1_i2c);
        ch1_i2c_speed_label->setObjectName(QString::fromUtf8("ch1_i2c_speed_label"));

        gridLayout_6->addWidget(ch1_i2c_speed_label, 3, 0, 1, 1);

        ch1_i2c_speed = new QSpinBox(ch1_i2c);
        ch1_i2c_speed->setObjectName(QString::fromUtf8("ch1_i2c_speed"));
        ch1_i2c_speed->setMinimumSize(QSize(134, 0));
        ch1_i2c_speed->setMinimum(1);
        ch1_i2c_speed->setMaximum(20000000);
        ch1_i2c_speed->setValue(9600);

        gridLayout_6->addWidget(ch1_i2c_speed, 3, 1, 1, 1);

        ch1_i2c_data_len_label = new QLabel(ch1_i2c);
        ch1_i2c_data_len_label->setObjectName(QString::fromUtf8("ch1_i2c_data_len_label"));

        gridLayout_6->addWidget(ch1_i2c_data_len_label, 4, 0, 1, 1);

        ch1_i2c_data_len = new QComboBox(ch1_i2c);
        ch1_i2c_data_len->addItem(QString());
        ch1_i2c_data_len->addItem(QString());
        ch1_i2c_data_len->setObjectName(QString::fromUtf8("ch1_i2c_data_len"));
        ch1_i2c_data_len->setMinimumSize(QSize(134, 0));

        gridLayout_6->addWidget(ch1_i2c_data_len, 4, 1, 1, 1);

        ch1_settings->addTab(ch1_i2c, QString());
        ch1_spi = new QWidget();
        ch1_spi->setObjectName(QString::fromUtf8("ch1_spi"));
        gridLayout_7 = new QGridLayout(ch1_spi);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        ch1_spi_dir_label = new QLabel(ch1_spi);
        ch1_spi_dir_label->setObjectName(QString::fromUtf8("ch1_spi_dir_label"));

        gridLayout_7->addWidget(ch1_spi_dir_label, 0, 0, 1, 1);

        ch1_spi_dir = new QComboBox(ch1_spi);
        ch1_spi_dir->addItem(QString());
        ch1_spi_dir->addItem(QString());
        ch1_spi_dir->setObjectName(QString::fromUtf8("ch1_spi_dir"));
        ch1_spi_dir->setMinimumSize(QSize(134, 0));

        gridLayout_7->addWidget(ch1_spi_dir, 0, 1, 1, 1);

        ch1_spi_cpol_label = new QLabel(ch1_spi);
        ch1_spi_cpol_label->setObjectName(QString::fromUtf8("ch1_spi_cpol_label"));

        gridLayout_7->addWidget(ch1_spi_cpol_label, 1, 0, 1, 1);

        ch1_spi_cpol = new QComboBox(ch1_spi);
        ch1_spi_cpol->setObjectName(QString::fromUtf8("ch1_spi_cpol"));
        ch1_spi_cpol->setMinimumSize(QSize(134, 0));

        gridLayout_7->addWidget(ch1_spi_cpol, 1, 1, 1, 1);

        ch1_spi_cpha_label = new QLabel(ch1_spi);
        ch1_spi_cpha_label->setObjectName(QString::fromUtf8("ch1_spi_cpha_label"));

        gridLayout_7->addWidget(ch1_spi_cpha_label, 2, 0, 1, 1);

        ch1_spi_cpha = new QComboBox(ch1_spi);
        ch1_spi_cpha->setObjectName(QString::fromUtf8("ch1_spi_cpha"));
        ch1_spi_cpha->setMinimumSize(QSize(134, 0));

        gridLayout_7->addWidget(ch1_spi_cpha, 2, 1, 1, 1);

        ch1_spi_speed_label = new QLabel(ch1_spi);
        ch1_spi_speed_label->setObjectName(QString::fromUtf8("ch1_spi_speed_label"));

        gridLayout_7->addWidget(ch1_spi_speed_label, 3, 0, 1, 1);

        ch1_spi_speed = new QSpinBox(ch1_spi);
        ch1_spi_speed->setObjectName(QString::fromUtf8("ch1_spi_speed"));
        ch1_spi_speed->setMinimumSize(QSize(134, 0));
        ch1_spi_speed->setMinimum(1);
        ch1_spi_speed->setMaximum(20000000);
        ch1_spi_speed->setValue(9600);

        gridLayout_7->addWidget(ch1_spi_speed, 3, 1, 1, 1);

        ch1_spi_data_len_label = new QLabel(ch1_spi);
        ch1_spi_data_len_label->setObjectName(QString::fromUtf8("ch1_spi_data_len_label"));

        gridLayout_7->addWidget(ch1_spi_data_len_label, 4, 0, 1, 1);

        ch1_spi_data_len = new QComboBox(ch1_spi);
        ch1_spi_data_len->addItem(QString());
        ch1_spi_data_len->addItem(QString());
        ch1_spi_data_len->setObjectName(QString::fromUtf8("ch1_spi_data_len"));
        ch1_spi_data_len->setMinimumSize(QSize(134, 0));

        gridLayout_7->addWidget(ch1_spi_data_len, 4, 1, 1, 1);

        ch1_settings->addTab(ch1_spi, QString());

        gridLayout_3->addWidget(ch1_settings, 1, 0, 1, 2);

        ch1_open = new QPushButton(ch1_ctrl);
        ch1_open->setObjectName(QString::fromUtf8("ch1_open"));
        ch1_open->setMinimumSize(QSize(142, 0));
        ch1_open->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(ch1_open, 2, 1, 1, 1);

        ch1_hex_chkbox = new QCheckBox(ch1_ctrl);
        ch1_hex_chkbox->setObjectName(QString::fromUtf8("ch1_hex_chkbox"));
        ch1_hex_chkbox->setMinimumSize(QSize(0, 0));

        gridLayout_3->addWidget(ch1_hex_chkbox, 2, 0, 1, 1, Qt::AlignLeft);

        ch1_status = new QComboBox(ch1_ctrl);
        ch1_status->addItem(QString());
        ch1_status->addItem(QString());
        ch1_status->setObjectName(QString::fromUtf8("ch1_status"));
        ch1_status->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(ch1_status, 0, 1, 1, 1, Qt::AlignRight);


        Function_box->addWidget(ch1_ctrl);

        ch2_crrl = new QGroupBox(verticalWidget);
        ch2_crrl->setObjectName(QString::fromUtf8("ch2_crrl"));
        ch2_crrl->setMinimumSize(QSize(0, 0));
        ch2_crrl->setMaximumSize(QSize(321, 16777215));
        ch2_crrl->setFont(font);
        gridLayout_2 = new QGridLayout(ch2_crrl);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        ch2_settings = new QTabWidget(ch2_crrl);
        ch2_settings->setObjectName(QString::fromUtf8("ch2_settings"));
        ch2_uart = new QWidget();
        ch2_uart->setObjectName(QString::fromUtf8("ch2_uart"));
        gridLayout_8 = new QGridLayout(ch2_uart);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        ch2_uart_spd_label = new QLabel(ch2_uart);
        ch2_uart_spd_label->setObjectName(QString::fromUtf8("ch2_uart_spd_label"));

        gridLayout_8->addWidget(ch2_uart_spd_label, 0, 0, 1, 1);

        ch2_uart_speed = new QSpinBox(ch2_uart);
        ch2_uart_speed->setObjectName(QString::fromUtf8("ch2_uart_speed"));
        ch2_uart_speed->setMinimumSize(QSize(134, 0));
        ch2_uart_speed->setMinimum(1);
        ch2_uart_speed->setMaximum(20000000);
        ch2_uart_speed->setValue(9600);

        gridLayout_8->addWidget(ch2_uart_speed, 0, 1, 1, 1);

        ch2_uart_bata_len_label = new QLabel(ch2_uart);
        ch2_uart_bata_len_label->setObjectName(QString::fromUtf8("ch2_uart_bata_len_label"));

        gridLayout_8->addWidget(ch2_uart_bata_len_label, 1, 0, 1, 1);

        ch2_uart_data_len = new QComboBox(ch2_uart);
        ch2_uart_data_len->addItem(QString());
        ch2_uart_data_len->addItem(QString());
        ch2_uart_data_len->setObjectName(QString::fromUtf8("ch2_uart_data_len"));
        ch2_uart_data_len->setMinimumSize(QSize(134, 0));

        gridLayout_8->addWidget(ch2_uart_data_len, 1, 1, 1, 1);

        ch2_uart_chk_label = new QLabel(ch2_uart);
        ch2_uart_chk_label->setObjectName(QString::fromUtf8("ch2_uart_chk_label"));

        gridLayout_8->addWidget(ch2_uart_chk_label, 2, 0, 1, 1);

        ch2_uart_chkbit = new QComboBox(ch2_uart);
        ch2_uart_chkbit->addItem(QString());
        ch2_uart_chkbit->addItem(QString());
        ch2_uart_chkbit->setObjectName(QString::fromUtf8("ch2_uart_chkbit"));
        ch2_uart_chkbit->setMinimumSize(QSize(134, 0));

        gridLayout_8->addWidget(ch2_uart_chkbit, 2, 1, 1, 1);

        ch2_uart_stopbit_label = new QLabel(ch2_uart);
        ch2_uart_stopbit_label->setObjectName(QString::fromUtf8("ch2_uart_stopbit_label"));

        gridLayout_8->addWidget(ch2_uart_stopbit_label, 3, 0, 1, 1);

        ch2_uart_stopbit = new QComboBox(ch2_uart);
        ch2_uart_stopbit->addItem(QString());
        ch2_uart_stopbit->addItem(QString());
        ch2_uart_stopbit->setObjectName(QString::fromUtf8("ch2_uart_stopbit"));
        ch2_uart_stopbit->setMinimumSize(QSize(134, 0));

        gridLayout_8->addWidget(ch2_uart_stopbit, 3, 1, 1, 1);

        ch2_uart_cmd_label = new QLabel(ch2_uart);
        ch2_uart_cmd_label->setObjectName(QString::fromUtf8("ch2_uart_cmd_label"));
        ch2_uart_cmd_label->setEnabled(true);

        gridLayout_8->addWidget(ch2_uart_cmd_label, 4, 0, 1, 1, Qt::AlignLeft);

        ch2_uart_cmd = new QComboBox(ch2_uart);
        ch2_uart_cmd->addItem(QString());
        ch2_uart_cmd->addItem(QString());
        ch2_uart_cmd->setObjectName(QString::fromUtf8("ch2_uart_cmd"));
        ch2_uart_cmd->setEnabled(true);
        ch2_uart_cmd->setMinimumSize(QSize(134, 0));

        gridLayout_8->addWidget(ch2_uart_cmd, 4, 1, 1, 1);

        ch2_settings->addTab(ch2_uart, QString());
        ch2_i2c = new QWidget();
        ch2_i2c->setObjectName(QString::fromUtf8("ch2_i2c"));
        gridLayout_5 = new QGridLayout(ch2_i2c);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        ch2_i2c_data_len = new QComboBox(ch2_i2c);
        ch2_i2c_data_len->addItem(QString());
        ch2_i2c_data_len->addItem(QString());
        ch2_i2c_data_len->setObjectName(QString::fromUtf8("ch2_i2c_data_len"));
        ch2_i2c_data_len->setMinimumSize(QSize(134, 0));

        gridLayout_5->addWidget(ch2_i2c_data_len, 4, 1, 1, 1, Qt::AlignRight);

        ch2_i2c_addr_len_label = new QLabel(ch2_i2c);
        ch2_i2c_addr_len_label->setObjectName(QString::fromUtf8("ch2_i2c_addr_len_label"));

        gridLayout_5->addWidget(ch2_i2c_addr_len_label, 1, 0, 1, 1);

        ch2_i2c_dir_label = new QLabel(ch2_i2c);
        ch2_i2c_dir_label->setObjectName(QString::fromUtf8("ch2_i2c_dir_label"));

        gridLayout_5->addWidget(ch2_i2c_dir_label, 0, 0, 1, 1);

        ch2_i2c_databit_label = new QLabel(ch2_i2c);
        ch2_i2c_databit_label->setObjectName(QString::fromUtf8("ch2_i2c_databit_label"));

        gridLayout_5->addWidget(ch2_i2c_databit_label, 4, 0, 1, 1, Qt::AlignLeft);

        ch2_i2c_dir = new QComboBox(ch2_i2c);
        ch2_i2c_dir->addItem(QString());
        ch2_i2c_dir->addItem(QString());
        ch2_i2c_dir->setObjectName(QString::fromUtf8("ch2_i2c_dir"));
        ch2_i2c_dir->setMinimumSize(QSize(134, 0));
        ch2_i2c_dir->setMaximumSize(QSize(134, 16777215));

        gridLayout_5->addWidget(ch2_i2c_dir, 0, 1, 1, 1, Qt::AlignRight);

        ch2_i2c_speed = new QSpinBox(ch2_i2c);
        ch2_i2c_speed->setObjectName(QString::fromUtf8("ch2_i2c_speed"));
        ch2_i2c_speed->setMinimumSize(QSize(134, 0));
        ch2_i2c_speed->setMinimum(1);
        ch2_i2c_speed->setMaximum(20000000);
        ch2_i2c_speed->setValue(9600);

        gridLayout_5->addWidget(ch2_i2c_speed, 3, 1, 1, 1, Qt::AlignRight);

        ch2_i2c_add_len = new QComboBox(ch2_i2c);
        ch2_i2c_add_len->addItem(QString());
        ch2_i2c_add_len->addItem(QString());
        ch2_i2c_add_len->setObjectName(QString::fromUtf8("ch2_i2c_add_len"));
        ch2_i2c_add_len->setMinimumSize(QSize(134, 0));

        gridLayout_5->addWidget(ch2_i2c_add_len, 1, 1, 1, 1, Qt::AlignRight);

        ch2_i2c_addr = new QLabel(ch2_i2c);
        ch2_i2c_addr->setObjectName(QString::fromUtf8("ch2_i2c_addr"));

        gridLayout_5->addWidget(ch2_i2c_addr, 2, 0, 1, 1);

        ch2_i2c_addr_2 = new QSpinBox(ch2_i2c);
        ch2_i2c_addr_2->setObjectName(QString::fromUtf8("ch2_i2c_addr_2"));
        ch2_i2c_addr_2->setMinimumSize(QSize(134, 0));

        gridLayout_5->addWidget(ch2_i2c_addr_2, 2, 1, 1, 1, Qt::AlignRight);

        ch2_i2c_speed_label = new QLabel(ch2_i2c);
        ch2_i2c_speed_label->setObjectName(QString::fromUtf8("ch2_i2c_speed_label"));

        gridLayout_5->addWidget(ch2_i2c_speed_label, 3, 0, 1, 1, Qt::AlignLeft);

        ch2_settings->addTab(ch2_i2c, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        gridLayout_9 = new QGridLayout(tab_9);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        ch2_spi_cpol = new QComboBox(tab_9);
        ch2_spi_cpol->setObjectName(QString::fromUtf8("ch2_spi_cpol"));
        ch2_spi_cpol->setMinimumSize(QSize(134, 0));

        gridLayout_9->addWidget(ch2_spi_cpol, 1, 1, 1, 1);

        ch2_spi_databit_label = new QLabel(tab_9);
        ch2_spi_databit_label->setObjectName(QString::fromUtf8("ch2_spi_databit_label"));

        gridLayout_9->addWidget(ch2_spi_databit_label, 4, 0, 1, 1, Qt::AlignLeft);

        ch2_spi_databit = new QComboBox(tab_9);
        ch2_spi_databit->addItem(QString());
        ch2_spi_databit->addItem(QString());
        ch2_spi_databit->setObjectName(QString::fromUtf8("ch2_spi_databit"));
        ch2_spi_databit->setMinimumSize(QSize(134, 0));

        gridLayout_9->addWidget(ch2_spi_databit, 4, 1, 1, 1);

        ch2_spi_cpha_label = new QLabel(tab_9);
        ch2_spi_cpha_label->setObjectName(QString::fromUtf8("ch2_spi_cpha_label"));

        gridLayout_9->addWidget(ch2_spi_cpha_label, 2, 0, 1, 1);

        ch2_spi_cpha = new QComboBox(tab_9);
        ch2_spi_cpha->setObjectName(QString::fromUtf8("ch2_spi_cpha"));
        ch2_spi_cpha->setMinimumSize(QSize(134, 0));

        gridLayout_9->addWidget(ch2_spi_cpha, 2, 1, 1, 1);

        ch2_spi_dir = new QComboBox(tab_9);
        ch2_spi_dir->addItem(QString());
        ch2_spi_dir->addItem(QString());
        ch2_spi_dir->setObjectName(QString::fromUtf8("ch2_spi_dir"));
        ch2_spi_dir->setMinimumSize(QSize(134, 0));

        gridLayout_9->addWidget(ch2_spi_dir, 0, 1, 1, 1);

        ch2_spi_dir_label = new QLabel(tab_9);
        ch2_spi_dir_label->setObjectName(QString::fromUtf8("ch2_spi_dir_label"));

        gridLayout_9->addWidget(ch2_spi_dir_label, 0, 0, 1, 1);

        ch2_spi_speed_label = new QLabel(tab_9);
        ch2_spi_speed_label->setObjectName(QString::fromUtf8("ch2_spi_speed_label"));

        gridLayout_9->addWidget(ch2_spi_speed_label, 3, 0, 1, 1);

        ch2_spi_speed = new QSpinBox(tab_9);
        ch2_spi_speed->setObjectName(QString::fromUtf8("ch2_spi_speed"));
        ch2_spi_speed->setMinimumSize(QSize(134, 0));
        ch2_spi_speed->setMinimum(1);
        ch2_spi_speed->setMaximum(20000000);
        ch2_spi_speed->setValue(9600);

        gridLayout_9->addWidget(ch2_spi_speed, 3, 1, 1, 1);

        ch2_spi_cpol_label = new QLabel(tab_9);
        ch2_spi_cpol_label->setObjectName(QString::fromUtf8("ch2_spi_cpol_label"));

        gridLayout_9->addWidget(ch2_spi_cpol_label, 1, 0, 1, 1);

        ch2_settings->addTab(tab_9, QString());

        gridLayout_2->addWidget(ch2_settings, 1, 0, 1, 3);

        ch2_status = new QComboBox(ch2_crrl);
        ch2_status->addItem(QString());
        ch2_status->addItem(QString());
        ch2_status->setObjectName(QString::fromUtf8("ch2_status"));
        ch2_status->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(ch2_status, 0, 2, 1, 1, Qt::AlignRight);

        ch2_open = new QPushButton(ch2_crrl);
        ch2_open->setObjectName(QString::fromUtf8("ch2_open"));
        ch2_open->setMinimumSize(QSize(142, 0));
        ch2_open->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(ch2_open, 2, 1, 1, 2, Qt::AlignRight);

        ch2_hex_chkbox = new QCheckBox(ch2_crrl);
        ch2_hex_chkbox->setObjectName(QString::fromUtf8("ch2_hex_chkbox"));
        ch2_hex_chkbox->setMinimumSize(QSize(147, 0));

        gridLayout_2->addWidget(ch2_hex_chkbox, 2, 0, 1, 1, Qt::AlignLeft);

        ch2_en_label = new QLabel(ch2_crrl);
        ch2_en_label->setObjectName(QString::fromUtf8("ch2_en_label"));
        ch2_en_label->setMinimumSize(QSize(161, 0));
        ch2_en_label->setFont(font1);

        gridLayout_2->addWidget(ch2_en_label, 0, 0, 1, 1);


        Function_box->addWidget(ch2_crrl);


        gridLayout->addWidget(verticalWidget, 0, 0, 1, 1);

        out_window = new QWidget(centralWidget);
        out_window->setObjectName(QString::fromUtf8("out_window"));

        gridLayout->addWidget(out_window, 0, 1, 1, 1);

        FT2232->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FT2232);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 46));
        menuBar->setDefaultUp(false);
        menuBar->setNativeMenuBar(true);
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuLanguage = new QMenu(menuBar);
        menuLanguage->setObjectName(QString::fromUtf8("menuLanguage"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        FT2232->setMenuBar(menuBar);
        statusBar = new QStatusBar(FT2232);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        FT2232->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuLanguage->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionload);
        menuFile->addAction(actionSave_Settings);
        menuFile->addAction(actionImport);
        menuFile->addAction(actionSave_Data);
        menuLanguage->addAction(actionEnglish);
        menuLanguage->addAction(actionChinese);
        menuView->addAction(actionColor);
        menuHelp->addAction(actionVersion);

        retranslateUi(FT2232);

        ch1_settings->setCurrentIndex(0);
        ch2_settings->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FT2232);
    } // setupUi

    void retranslateUi(QMainWindow *FT2232)
    {
        FT2232->setWindowTitle(QCoreApplication::translate("FT2232", "FT2232", nullptr));
        actionload->setText(QCoreApplication::translate("FT2232", "Load Settings", nullptr));
        actionSave_Settings->setText(QCoreApplication::translate("FT2232", "Save Settings", nullptr));
        actionImport->setText(QCoreApplication::translate("FT2232", "Import Foottext", nullptr));
        actionSave_Data->setText(QCoreApplication::translate("FT2232", "Save Data", nullptr));
        actionEnglish->setText(QCoreApplication::translate("FT2232", "English", nullptr));
        actionChinese->setText(QCoreApplication::translate("FT2232", "Chinese", nullptr));
        actionColor->setText(QCoreApplication::translate("FT2232", "Color", nullptr));
        actionVersion->setText(QCoreApplication::translate("FT2232", "Version", nullptr));
        ch1_ctrl->setTitle(QCoreApplication::translate("FT2232", "FT2232 CH1", nullptr));
        ch1_enable_label->setText(QCoreApplication::translate("FT2232", "Ch1:", nullptr));
        ch1_uart_speed_label->setText(QCoreApplication::translate("FT2232", "Speed :", nullptr));
        ch1_uart_data_len_label->setText(QCoreApplication::translate("FT2232", "Data length :", nullptr));
        ch1_uart_data_len->setItemText(0, QCoreApplication::translate("FT2232", "8bit", nullptr));
        ch1_uart_data_len->setItemText(1, QCoreApplication::translate("FT2232", "16bit", nullptr));

        ch1_uart_chkbit_label->setText(QCoreApplication::translate("FT2232", "Check bit :", nullptr));
        ch1_uart_chkbit->setItemText(0, QCoreApplication::translate("FT2232", "None", nullptr));
        ch1_uart_chkbit->setItemText(1, QCoreApplication::translate("FT2232", "1", nullptr));

        ch1_uart_stopbit_label->setText(QCoreApplication::translate("FT2232", "Stop bit :", nullptr));
        ch1_uart_stopbit->setItemText(0, QCoreApplication::translate("FT2232", "1", nullptr));
        ch1_uart_stopbit->setItemText(1, QCoreApplication::translate("FT2232", "2", nullptr));

        ch1_uart_cmd_label->setText(QCoreApplication::translate("FT2232", "Command line :", nullptr));
        ch1_uart_cmd->setItemText(0, QCoreApplication::translate("FT2232", "Disable", nullptr));
        ch1_uart_cmd->setItemText(1, QCoreApplication::translate("FT2232", "Enable", nullptr));

        ch1_settings->setTabText(ch1_settings->indexOf(ch1_uart), QCoreApplication::translate("FT2232", "UART", nullptr));
        ch1_i2c_dir_label->setText(QCoreApplication::translate("FT2232", "Direction :", nullptr));
        ch1_i2c_dir->setItemText(0, QCoreApplication::translate("FT2232", "Master", nullptr));
        ch1_i2c_dir->setItemText(1, QCoreApplication::translate("FT2232", "Slave", nullptr));

        ch1_i2c_addrlen_label->setText(QCoreApplication::translate("FT2232", "Address length :", nullptr));
        ch1_i2c_add_len->setItemText(0, QCoreApplication::translate("FT2232", "7bit", nullptr));
        ch1_i2c_add_len->setItemText(1, QCoreApplication::translate("FT2232", "10bit", nullptr));

        ch1_i2c_addr->setText(QCoreApplication::translate("FT2232", "Address (HEX):", nullptr));
        ch1_i2c_speed_label->setText(QCoreApplication::translate("FT2232", "Speed (KHz):", nullptr));
        ch1_i2c_data_len_label->setText(QCoreApplication::translate("FT2232", "Data bit :", nullptr));
        ch1_i2c_data_len->setItemText(0, QCoreApplication::translate("FT2232", "8bit", nullptr));
        ch1_i2c_data_len->setItemText(1, QCoreApplication::translate("FT2232", "16bit", nullptr));

        ch1_settings->setTabText(ch1_settings->indexOf(ch1_i2c), QCoreApplication::translate("FT2232", "I2C", nullptr));
        ch1_spi_dir_label->setText(QCoreApplication::translate("FT2232", "Direction :", nullptr));
        ch1_spi_dir->setItemText(0, QCoreApplication::translate("FT2232", "Master", nullptr));
        ch1_spi_dir->setItemText(1, QCoreApplication::translate("FT2232", "Slave", nullptr));

        ch1_spi_cpol_label->setText(QCoreApplication::translate("FT2232", "CPOL :", nullptr));
        ch1_spi_cpha_label->setText(QCoreApplication::translate("FT2232", "CPHA :", nullptr));
        ch1_spi_speed_label->setText(QCoreApplication::translate("FT2232", "Speed (KHz):", nullptr));
        ch1_spi_data_len_label->setText(QCoreApplication::translate("FT2232", "Data length :", nullptr));
        ch1_spi_data_len->setItemText(0, QCoreApplication::translate("FT2232", "8bit", nullptr));
        ch1_spi_data_len->setItemText(1, QCoreApplication::translate("FT2232", "16bit", nullptr));

        ch1_settings->setTabText(ch1_settings->indexOf(ch1_spi), QCoreApplication::translate("FT2232", "SPI", nullptr));
        ch1_open->setText(QCoreApplication::translate("FT2232", "Open Port", nullptr));
        ch1_hex_chkbox->setText(QCoreApplication::translate("FT2232", "Hex mode", nullptr));
        ch1_status->setItemText(0, QCoreApplication::translate("FT2232", "Enable", nullptr));
        ch1_status->setItemText(1, QCoreApplication::translate("FT2232", "Disable", nullptr));

        ch2_crrl->setTitle(QCoreApplication::translate("FT2232", "FT2232 CH2", nullptr));
        ch2_uart_spd_label->setText(QCoreApplication::translate("FT2232", "Speed :", nullptr));
        ch2_uart_bata_len_label->setText(QCoreApplication::translate("FT2232", "Data bit :", nullptr));
        ch2_uart_data_len->setItemText(0, QCoreApplication::translate("FT2232", "8bit", nullptr));
        ch2_uart_data_len->setItemText(1, QCoreApplication::translate("FT2232", "16bit", nullptr));

        ch2_uart_chk_label->setText(QCoreApplication::translate("FT2232", "Check bit :", nullptr));
        ch2_uart_chkbit->setItemText(0, QCoreApplication::translate("FT2232", "None", nullptr));
        ch2_uart_chkbit->setItemText(1, QCoreApplication::translate("FT2232", "1", nullptr));

        ch2_uart_stopbit_label->setText(QCoreApplication::translate("FT2232", "Stop bit :", nullptr));
        ch2_uart_stopbit->setItemText(0, QCoreApplication::translate("FT2232", "1", nullptr));
        ch2_uart_stopbit->setItemText(1, QCoreApplication::translate("FT2232", "2", nullptr));

        ch2_uart_cmd_label->setText(QCoreApplication::translate("FT2232", "Command line :", nullptr));
        ch2_uart_cmd->setItemText(0, QCoreApplication::translate("FT2232", "Disable", nullptr));
        ch2_uart_cmd->setItemText(1, QCoreApplication::translate("FT2232", "Enable", nullptr));

        ch2_settings->setTabText(ch2_settings->indexOf(ch2_uart), QCoreApplication::translate("FT2232", "UART", nullptr));
        ch2_i2c_data_len->setItemText(0, QCoreApplication::translate("FT2232", "8bit", nullptr));
        ch2_i2c_data_len->setItemText(1, QCoreApplication::translate("FT2232", "16bit", nullptr));

        ch2_i2c_addr_len_label->setText(QCoreApplication::translate("FT2232", "Address length :", nullptr));
        ch2_i2c_dir_label->setText(QCoreApplication::translate("FT2232", "Direction :", nullptr));
        ch2_i2c_databit_label->setText(QCoreApplication::translate("FT2232", "Data bit :", nullptr));
        ch2_i2c_dir->setItemText(0, QCoreApplication::translate("FT2232", "Master", nullptr));
        ch2_i2c_dir->setItemText(1, QCoreApplication::translate("FT2232", "Slave", nullptr));

        ch2_i2c_add_len->setItemText(0, QCoreApplication::translate("FT2232", "7bit", nullptr));
        ch2_i2c_add_len->setItemText(1, QCoreApplication::translate("FT2232", "10bit", nullptr));

        ch2_i2c_addr->setText(QCoreApplication::translate("FT2232", "Address (in HEX):", nullptr));
        ch2_i2c_speed_label->setText(QCoreApplication::translate("FT2232", "Speed (KHz):", nullptr));
        ch2_settings->setTabText(ch2_settings->indexOf(ch2_i2c), QCoreApplication::translate("FT2232", "I2C", nullptr));
        ch2_spi_databit_label->setText(QCoreApplication::translate("FT2232", "Data bit :", nullptr));
        ch2_spi_databit->setItemText(0, QCoreApplication::translate("FT2232", "8bit", nullptr));
        ch2_spi_databit->setItemText(1, QCoreApplication::translate("FT2232", "16bit", nullptr));

        ch2_spi_cpha_label->setText(QCoreApplication::translate("FT2232", "CPHA :", nullptr));
        ch2_spi_dir->setItemText(0, QCoreApplication::translate("FT2232", "Master", nullptr));
        ch2_spi_dir->setItemText(1, QCoreApplication::translate("FT2232", "Slave", nullptr));

        ch2_spi_dir_label->setText(QCoreApplication::translate("FT2232", "Direction :", nullptr));
        ch2_spi_speed_label->setText(QCoreApplication::translate("FT2232", "Speed (KHz):", nullptr));
        ch2_spi_cpol_label->setText(QCoreApplication::translate("FT2232", "CPOL :", nullptr));
        ch2_settings->setTabText(ch2_settings->indexOf(tab_9), QCoreApplication::translate("FT2232", "SPI", nullptr));
        ch2_status->setItemText(0, QCoreApplication::translate("FT2232", "Enable", nullptr));
        ch2_status->setItemText(1, QCoreApplication::translate("FT2232", "Disable", nullptr));

        ch2_open->setText(QCoreApplication::translate("FT2232", "Open Port", nullptr));
        ch2_hex_chkbox->setText(QCoreApplication::translate("FT2232", "Hex mode", nullptr));
        ch2_en_label->setText(QCoreApplication::translate("FT2232", "Ch2:", nullptr));
        menuFile->setTitle(QCoreApplication::translate("FT2232", "File", nullptr));
        menuLanguage->setTitle(QCoreApplication::translate("FT2232", "Language", nullptr));
        menuView->setTitle(QCoreApplication::translate("FT2232", "View", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("FT2232", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FT2232: public Ui_FT2232 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FT2232_H
