#pragma once

#include <QtWidgets/QWidget>
#include "ui_UDPSendData.h"
#include <QDebug>
#include <QThread>

class UDPSendData : public QWidget
{
    Q_OBJECT

public:
    explicit UDPSendData(QWidget *parent = Q_NULLPTR);
    ~UDPSendData();

private:
    Ui::UDPSendDataClass ui;


public slots:
    void CreateSendThread();
    void IfUseDoubleNet();
};
