#include "UDPSendData.h"
#include "SendFileContent.h"

UDPSendData::UDPSendData(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    this->setFixedSize(400, 350);
}

UDPSendData::~UDPSendData()
{

}

void UDPSendData::CreateSendThread()
{
    //读取界面上输入的ip、端口和文件路径
    QString LocalIP1 = ui.LocalIP_lineEdit->text();
    QString LocalPort1 = ui.LocalPort_lineEdit->text();
    QString SendIP1 = ui.TargetIP_lineEdit->text();
    QString SendPort1 = ui.TargetPort_lineEdit->text();
    QString ReadFileDir1 = ui.DataFile_lineEdit->text();

    // 创建线程对象
    QThread* sub1 = new QThread;

    // 创建工作的类对象
    // 千万不要指定给创建的对象指定父对象
    // 如果指定了: QObject::moveToThread: Cannot move objects with a parent
    SendFileContent* sendwork1 = new SendFileContent(LocalIP1, LocalPort1, SendIP1, SendPort1, ReadFileDir1);

    // 将工作的类对象移动到创建的子线程对象中
    sendwork1->moveToThread(sub1);


    // 当线程开始时执行工作对象的working函数
    QObject::connect(sub1, &QThread::started, sendwork1, &SendFileContent::working);

    //工作对象工作结束，停止线程
    QObject::connect(sendwork1, &SendFileContent::workFinished, sub1, [=]() {
        sub1->exit();
        sub1->wait();
        });

    //线程停止，销毁工作对象
    QObject::connect(sub1, &QThread::finished, sendwork1, &SendFileContent::deleteLater);

    //工作对象销毁，销毁工作线程
    QObject::connect(sendwork1, &SendFileContent::destroyed, sub1, &QThread::deleteLater);

    //线程销毁,打印信息
    QObject::connect(sub1, &QThread::destroyed, [&]() {
        qDebug() << "SendThread1 destroyed" << endl;
        });

    qDebug() << "sendthread1 all prepared";

    // 启动线程
    sub1->start();

    //若需要启动双网发送
    if (ui.checkBox->isChecked())
    {
        QString LocalIP2 = ui.LocalIP_lineEdit_2->text();
        QString LocalPort2 = ui.LocalPort_lineEdit_2->text();
        QString SendIP2 = ui.TargetIP_lineEdit_2->text();
        QString SendPort2 = ui.TargetPort_lineEdit_2->text();
        QString ReadFileDir2 = ui.DataFile_lineEdit_2->text();

        QThread* sub2 = new QThread;
        SendFileContent* sendwork2 = new SendFileContent(LocalIP2, LocalPort2, SendIP2, SendPort2, ReadFileDir2);

        sendwork2->moveToThread(sub2);

        QObject::connect(sub2, &QThread::started, sendwork2, &SendFileContent::working);

        QObject::connect(sendwork2, &SendFileContent::workFinished, sub2, [=]() {
            sub2->exit();
            sub2->wait();
            });

        QObject::connect(sub2, &QThread::finished, sendwork2, &SendFileContent::deleteLater);

        QObject::connect(sendwork2, &SendFileContent::destroyed, sub2, &QThread::deleteLater);

        QObject::connect(sub2, &QThread::destroyed, [&]() {
            qDebug() << "SendThread2 destroyed" << endl;
            });

        qDebug() << "sendthread2 all prepared";

        sub2->start();
    }
}

void UDPSendData::IfUseDoubleNet()
{
    if (ui.checkBox->isChecked())
    {
        //使用双网发送
        ui.LocalIP_lineEdit_2->setEnabled(true);
        ui.LocalPort_lineEdit_2->setEnabled(true);
        ui.TargetIP_lineEdit_2->setEnabled(true);
        ui.TargetPort_lineEdit_2->setEnabled(true);
        ui.DataFile_lineEdit_2->setEnabled(true);
    }
    else
    {
        //仅使用单网发送
        ui.LocalIP_lineEdit_2->setEnabled(false);
        ui.LocalPort_lineEdit_2->setEnabled(false);
        ui.TargetIP_lineEdit_2->setEnabled(false);
        ui.TargetPort_lineEdit_2->setEnabled(false);
        ui.DataFile_lineEdit_2->setEnabled(false);
    }
}
