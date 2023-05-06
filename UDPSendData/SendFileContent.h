#pragma once

#include <QDebug>
#include <QObject>
#include <QUdpSocket>
#include <QFile>

class SendFileContent : public QObject
{
    Q_OBJECT

public:
    explicit SendFileContent(QString LocalIP, QString LocalPort, QString SendIP, QString SendPort, QString ReadFileDir, QObject* parent = Q_NULLPTR);
    ~SendFileContent();

    void working();

private:
    QUdpSocket* udpSocket;
    QFile* DataFile;
    QString m_LocalIP;
    QString m_LocalPort;
    QString m_SendIP;
    QString m_SendPort;
    QString m_ReadFileDir;
    int bindresult;

signals:
    void workFinished(void);

public slots:

};