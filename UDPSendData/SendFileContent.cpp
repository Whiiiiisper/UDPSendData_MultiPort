#include "SendFileContent.h"


SendFileContent::SendFileContent(QString LocalIP, QString LocalPort, QString SendIP, QString SendPort, QString ReadFileDir, QObject* parent)
	: QObject(parent)
{
    m_LocalIP = LocalIP;
    m_LocalPort = LocalPort;
    m_SendIP = SendIP;
    m_SendPort = SendPort;
    m_ReadFileDir = ReadFileDir;
    
}

SendFileContent::~SendFileContent()
{

}

void SendFileContent::working()
{
    udpSocket = new QUdpSocket;
    DataFile = new QFile(m_ReadFileDir);

    qDebug() << "create socket " << m_LocalIP;

    int bindresult = udpSocket->bind(QHostAddress(m_LocalIP), m_LocalPort.toInt());
    if (bindresult != -1)
    {
        qDebug() << "UDP bind succeed " << m_LocalIP;

        if (DataFile->open(QIODevice::ReadOnly | QIODevice::Text))
        {
            qDebug() << "Data File open succeed "<< m_ReadFileDir;

            QString line;
            QTextStream in(DataFile);  //用文件构造流

            while (!in.atEnd())
            {
                line = in.readLine(); //读取一行放到字符串里,使用文件构造流后不会包含换行符
                //qDebug() << line;

                QByteArray SendData = QByteArray::fromHex(line.toLatin1());
                udpSocket->writeDatagram(SendData, QHostAddress(m_SendIP), m_SendPort.toInt());
            }

            DataFile->close();
            qDebug() << "Data File close " << m_ReadFileDir;
        }
        else
        {
            qDebug() << "Data File open error " << m_ReadFileDir;
        }
    }
    else
    {
        qDebug() << "UDP bind Failed " << m_LocalIP;
    }

    delete udpSocket;
    delete DataFile;
    qDebug() << "delete socket " << m_LocalIP << " and free file "<< m_ReadFileDir;

    emit workFinished(); 
    qDebug() << "emit workFinished signal ";
}

