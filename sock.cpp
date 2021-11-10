#include "sock.h"
#include<QDebug>
Sock::Sock(QObject *parent, QString _IP, quint16 _Port):QTcpServer (parent),IP(_IP),Port(_Port)
{
    if(!QTcpServer::listen(QHostAddress(IP),Port))
    {
        qDebug()<<"监听失败: "<<errorString();
        close();
    }
    qDebug()<<"监听成功";
    qDebug()<<IP<<Port;
}

void Sock::SendMessage(QJsonObject& _message)
{
    QJsonDocument jsondocument;
    jsondocument.setObject(_message);
    QByteArray dataArray = jsondocument.toJson();
    qDebug()<<dataArray;
    socket->write(dataArray);
}

QTcpSocket *Sock::GetSocket()
{
    return this->socket;
}

bool Sock::GetConnectState()
{
    return this->isConnect;
}

void Sock::Json_Init()
{

}

void Sock::incomingConnection(qintptr handle)
{
    socket = new QTcpSocket(this);
    socket->setSocketDescriptor(handle);
    qDebug()<<socket->peerAddress().toString().toUtf8().data();
    connect(socket,&QTcpSocket::readyRead,this,&Sock::receiveMessage);
    emit NewConnect();
}

void Sock::receiveMessage()
{
    if(socket->bytesAvailable()>0)//排除无用字符
    {
        QByteArray buffer;
        buffer = socket->readAll();
        qDebug()<<QString::fromLocal8Bit(buffer).toUtf8().data();//转换成QString,并且去除“”显示出来
    }
}
