#include "sock.h"
#include<QDebug>

Sock::Sock(QObject *parent, QString _IP, quint16 _Port):QTcpServer (parent),listen_IP(_IP),listen_Port(_Port)
{
    if(!QTcpServer::listen(QHostAddress(listen_IP),listen_Port))
    {
        qDebug()<<"监听失败: "<<errorString();
        close();
    }
}

Sock::~Sock()
{
    for(auto s:SockArray){
        if(s){
            s->close();
            delete s;
            s=nullptr;
        }
    }
    delete c;
}

void Sock::incomingConnection(qintptr handle)
{
    c = new QTcpSocket(this);
    c->setSocketDescriptor(handle);
    /*加入连接队列*/
    SockArray.push_back(c);
    if(SockArray.size() > 1){
        connect(SockArray[1],&QTcpSocket::readyRead,this,&Sock::receiveMessage);
    }
    emit NewConnect(c->peerAddress().toString(),c->peerPort());
    CON_FLAG = true;
    c = nullptr;
    if(SockArray.size() == 1){
        connect(SockArray[0],SIGNAL(error(QAbstractSocket::SocketError)),this,SLOT(MSGError(QAbstractSocket::SocketError)));
    }
}

void Sock::sendMessage()
{
    QJsonDocument jsondocument;
    jsondocument.setObject(message);
    QByteArray dataArray = jsondocument.toJson();
    SockArray[0]->write(dataArray);
}

void Sock::sendMsgFrom_manual_mode(QByteArray &data)
{
    SockArray[0]->write(data);
}

void Sock::receiveMessage()
{
    JsonInit();
    if(this->voiceFlag)
    {
        if(SockArray[1]->bytesAvailable()>0)
        {
            QByteArray buffer;
            buffer = SockArray[1]->readAll();
            QString strmessage = QString::fromLocal8Bit(buffer).toUtf8().data();
            qDebug()<<strmessage;
            message.insert("voicecom",strmessage);
            QJsonDocument jsondocument;
            jsondocument.setObject(message);
            QByteArray dataArray = jsondocument.toJson();
            SockArray[0]->write(dataArray);
            emit receiveOK(strmessage);
        }
    }
    SockArray[1]->readAll();
}

void Sock::MSGError(QAbstractSocket::SocketError)
{
    int error = SockArray[0]->error();
    if(error==QAbstractSocket::RemoteHostClosedError)//客户端断开
    {
        for(auto& s : SockArray){                    //小车一旦断开，清空所有连接
            s->close();
        }
        SockArray.clear();
        if(CON_FLAG == true)
        {
            emit sock_disc();
        }
        CON_FLAG = false;
    }
}

void Sock::JsonInit()
{
    message.insert("arm0", "200");
    message.insert("arm1", "200");
    message.insert("arm2", "200");
    message.insert("arm3", "200");
    message.insert("arm4", "200");
    message.insert("arm5", "200");
    message.insert("status", "okey");
}
