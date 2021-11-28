#include "sock.h"
#include<QDebug>


Sock::Sock(QObject *parent, QString _IP, quint16 _Port):QTcpServer (parent),listen_IP(_IP),listen_Port(_Port)
{
    if(!QTcpServer::listen(QHostAddress(listen_IP),listen_Port))
    {
        qDebug()<<"监听失败: "<<errorString();
        close();
    }
    timer = new QTimer(this);
    connect(timer,&QTimer::timeout,[this](){
        if(this->send_WakeHand(*SockArray[0]) == false)
        {
            for(auto& s : SockArray){
                s->close();
            }
            SockArray.clear();
            if(CON_FLAG == true)
            {
                emit sock_disc();
            }
            CON_FLAG = false;
        }
    });
}

Sock::~Sock()
{
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
        timer->start(1000);
    }
}

void Sock::SendMessage()
{
    QJsonDocument jsondocument;
    jsondocument.setObject(message);
    QByteArray dataArray = jsondocument.toJson();
    SockArray[0]->write(dataArray);
}

void Sock::receiveMessage()
{
    JsonInit();
    if(this->AAA)
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
void Sock::JsonInit()
{
    message.insert("arm0", "200");
    message.insert("arm1", "200");
    message.insert("arm2", "200");
    message.insert("arm3", "200");
    message.insert("arm4", "200");
    message.insert("arm5", "200");

    /*message.insert("goodsnums",int(from.size()));
    message.insert("goodsstart",F);
    this->TcpClient->message.insert("goodsend",S);*/
    message.insert("status", "okey");
}

bool Sock::send_WakeHand(QTcpSocket& sock)
{
    qint64 ret = sock.write("wake hands");
    if(ret == -1){
        return false;
    }
    return true;
}
