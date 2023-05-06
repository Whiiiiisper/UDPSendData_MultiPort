/********************************************************************************
** Form generated from reading UI file 'UDPSendData.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDPSENDDATA_H
#define UI_UDPSENDDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UDPSendDataClass
{
public:
    QLabel *TargetIP_label;
    QLineEdit *TargetIP_lineEdit;
    QLineEdit *TargetPort_lineEdit;
    QLabel *TargetPort_label;
    QLabel *LocalPort_label;
    QLabel *LocalIP_label;
    QLineEdit *LocalPort_lineEdit;
    QLineEdit *LocalIP_lineEdit;
    QLineEdit *DataFile_lineEdit;
    QLabel *DataFile_label;
    QPushButton *Prepare_pushButton;
    QLabel *LocalPort_label_2;
    QLineEdit *LocalPort_lineEdit_2;
    QLineEdit *TargetPort_lineEdit_2;
    QLabel *LocalIP_label_2;
    QLineEdit *LocalIP_lineEdit_2;
    QLineEdit *TargetIP_lineEdit_2;
    QLabel *TargetIP_label_2;
    QLabel *DataFile_label_2;
    QLabel *TargetPort_label_2;
    QLineEdit *DataFile_lineEdit_2;
    QCheckBox *checkBox;

    void setupUi(QWidget *UDPSendDataClass)
    {
        if (UDPSendDataClass->objectName().isEmpty())
            UDPSendDataClass->setObjectName(QString::fromUtf8("UDPSendDataClass"));
        UDPSendDataClass->resize(429, 374);
        TargetIP_label = new QLabel(UDPSendDataClass);
        TargetIP_label->setObjectName(QString::fromUtf8("TargetIP_label"));
        TargetIP_label->setGeometry(QRect(30, 20, 61, 16));
        TargetIP_lineEdit = new QLineEdit(UDPSendDataClass);
        TargetIP_lineEdit->setObjectName(QString::fromUtf8("TargetIP_lineEdit"));
        TargetIP_lineEdit->setGeometry(QRect(30, 40, 113, 20));
        TargetPort_lineEdit = new QLineEdit(UDPSendDataClass);
        TargetPort_lineEdit->setObjectName(QString::fromUtf8("TargetPort_lineEdit"));
        TargetPort_lineEdit->setGeometry(QRect(30, 100, 113, 20));
        TargetPort_label = new QLabel(UDPSendDataClass);
        TargetPort_label->setObjectName(QString::fromUtf8("TargetPort_label"));
        TargetPort_label->setGeometry(QRect(30, 80, 71, 16));
        LocalPort_label = new QLabel(UDPSendDataClass);
        LocalPort_label->setObjectName(QString::fromUtf8("LocalPort_label"));
        LocalPort_label->setGeometry(QRect(30, 200, 71, 16));
        LocalIP_label = new QLabel(UDPSendDataClass);
        LocalIP_label->setObjectName(QString::fromUtf8("LocalIP_label"));
        LocalIP_label->setGeometry(QRect(30, 140, 71, 16));
        LocalPort_lineEdit = new QLineEdit(UDPSendDataClass);
        LocalPort_lineEdit->setObjectName(QString::fromUtf8("LocalPort_lineEdit"));
        LocalPort_lineEdit->setGeometry(QRect(30, 220, 113, 20));
        LocalIP_lineEdit = new QLineEdit(UDPSendDataClass);
        LocalIP_lineEdit->setObjectName(QString::fromUtf8("LocalIP_lineEdit"));
        LocalIP_lineEdit->setGeometry(QRect(30, 160, 113, 20));
        DataFile_lineEdit = new QLineEdit(UDPSendDataClass);
        DataFile_lineEdit->setObjectName(QString::fromUtf8("DataFile_lineEdit"));
        DataFile_lineEdit->setGeometry(QRect(30, 280, 111, 20));
        DataFile_label = new QLabel(UDPSendDataClass);
        DataFile_label->setObjectName(QString::fromUtf8("DataFile_label"));
        DataFile_label->setGeometry(QRect(30, 260, 61, 16));
        Prepare_pushButton = new QPushButton(UDPSendDataClass);
        Prepare_pushButton->setObjectName(QString::fromUtf8("Prepare_pushButton"));
        Prepare_pushButton->setGeometry(QRect(310, 40, 51, 111));
        LocalPort_label_2 = new QLabel(UDPSendDataClass);
        LocalPort_label_2->setObjectName(QString::fromUtf8("LocalPort_label_2"));
        LocalPort_label_2->setGeometry(QRect(170, 200, 71, 16));
        LocalPort_lineEdit_2 = new QLineEdit(UDPSendDataClass);
        LocalPort_lineEdit_2->setObjectName(QString::fromUtf8("LocalPort_lineEdit_2"));
        LocalPort_lineEdit_2->setEnabled(false);
        LocalPort_lineEdit_2->setGeometry(QRect(170, 220, 113, 20));
        TargetPort_lineEdit_2 = new QLineEdit(UDPSendDataClass);
        TargetPort_lineEdit_2->setObjectName(QString::fromUtf8("TargetPort_lineEdit_2"));
        TargetPort_lineEdit_2->setEnabled(false);
        TargetPort_lineEdit_2->setGeometry(QRect(170, 100, 113, 20));
        LocalIP_label_2 = new QLabel(UDPSendDataClass);
        LocalIP_label_2->setObjectName(QString::fromUtf8("LocalIP_label_2"));
        LocalIP_label_2->setGeometry(QRect(170, 140, 71, 16));
        LocalIP_lineEdit_2 = new QLineEdit(UDPSendDataClass);
        LocalIP_lineEdit_2->setObjectName(QString::fromUtf8("LocalIP_lineEdit_2"));
        LocalIP_lineEdit_2->setEnabled(false);
        LocalIP_lineEdit_2->setGeometry(QRect(170, 160, 113, 20));
        TargetIP_lineEdit_2 = new QLineEdit(UDPSendDataClass);
        TargetIP_lineEdit_2->setObjectName(QString::fromUtf8("TargetIP_lineEdit_2"));
        TargetIP_lineEdit_2->setEnabled(false);
        TargetIP_lineEdit_2->setGeometry(QRect(170, 40, 113, 20));
        TargetIP_label_2 = new QLabel(UDPSendDataClass);
        TargetIP_label_2->setObjectName(QString::fromUtf8("TargetIP_label_2"));
        TargetIP_label_2->setGeometry(QRect(170, 20, 61, 16));
        DataFile_label_2 = new QLabel(UDPSendDataClass);
        DataFile_label_2->setObjectName(QString::fromUtf8("DataFile_label_2"));
        DataFile_label_2->setGeometry(QRect(170, 260, 61, 16));
        TargetPort_label_2 = new QLabel(UDPSendDataClass);
        TargetPort_label_2->setObjectName(QString::fromUtf8("TargetPort_label_2"));
        TargetPort_label_2->setGeometry(QRect(170, 80, 71, 16));
        DataFile_lineEdit_2 = new QLineEdit(UDPSendDataClass);
        DataFile_lineEdit_2->setObjectName(QString::fromUtf8("DataFile_lineEdit_2"));
        DataFile_lineEdit_2->setEnabled(false);
        DataFile_lineEdit_2->setGeometry(QRect(170, 280, 111, 20));
        checkBox = new QCheckBox(UDPSendDataClass);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(310, 210, 61, 31));

        retranslateUi(UDPSendDataClass);
        QObject::connect(Prepare_pushButton, SIGNAL(clicked()), UDPSendDataClass, SLOT(CreateSendThread()));
        QObject::connect(checkBox, SIGNAL(stateChanged(int)), UDPSendDataClass, SLOT(IfUseDoubleNet()));

        QMetaObject::connectSlotsByName(UDPSendDataClass);
    } // setupUi

    void retranslateUi(QWidget *UDPSendDataClass)
    {
        UDPSendDataClass->setWindowTitle(QApplication::translate("UDPSendDataClass", "UDPSendData", nullptr));
        TargetIP_label->setText(QApplication::translate("UDPSendDataClass", "Target IP", nullptr));
        TargetIP_lineEdit->setText(QApplication::translate("UDPSendDataClass", "192.168.20.201", nullptr));
        TargetPort_lineEdit->setText(QApplication::translate("UDPSendDataClass", "6501", nullptr));
        TargetPort_label->setText(QApplication::translate("UDPSendDataClass", "Target Port", nullptr));
        LocalPort_label->setText(QApplication::translate("UDPSendDataClass", "Local Port", nullptr));
        LocalIP_label->setText(QApplication::translate("UDPSendDataClass", "Local IP", nullptr));
        LocalPort_lineEdit->setText(QApplication::translate("UDPSendDataClass", "6501", nullptr));
        LocalIP_lineEdit->setText(QApplication::translate("UDPSendDataClass", "192.168.20.209", nullptr));
        DataFile_lineEdit->setText(QApplication::translate("UDPSendDataClass", "CC1_INPUT.txt", nullptr));
        DataFile_label->setText(QApplication::translate("UDPSendDataClass", "DataFile", nullptr));
        Prepare_pushButton->setText(QApplication::translate("UDPSendDataClass", "Send", nullptr));
        LocalPort_label_2->setText(QApplication::translate("UDPSendDataClass", "Local Port2", nullptr));
        LocalPort_lineEdit_2->setText(QApplication::translate("UDPSendDataClass", "6501", nullptr));
        TargetPort_lineEdit_2->setText(QApplication::translate("UDPSendDataClass", "6501", nullptr));
        LocalIP_label_2->setText(QApplication::translate("UDPSendDataClass", "Local IP2", nullptr));
        LocalIP_lineEdit_2->setText(QApplication::translate("UDPSendDataClass", "192.168.3.209", nullptr));
        TargetIP_lineEdit_2->setText(QApplication::translate("UDPSendDataClass", "192.168.3.201", nullptr));
        TargetIP_label_2->setText(QApplication::translate("UDPSendDataClass", "Target IP2", nullptr));
        DataFile_label_2->setText(QApplication::translate("UDPSendDataClass", "DataFile2", nullptr));
        TargetPort_label_2->setText(QApplication::translate("UDPSendDataClass", "Target Port2", nullptr));
        DataFile_lineEdit_2->setText(QApplication::translate("UDPSendDataClass", "CC2_INPUT.txt", nullptr));
        checkBox->setText(QApplication::translate("UDPSendDataClass", "\345\217\214\347\275\221", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UDPSendDataClass: public Ui_UDPSendDataClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDPSENDDATA_H
