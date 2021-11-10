#ifndef SOCK_H
#define SOCK_H
#include<QTcpSocket>
#include<QTcpServer>
#include<QString>
#include<QJsonObject>
#include<QJsonDocument>
class Sock:public QTcpServer
{
    Q_OBJECT
public:
    Sock(QObject *parent,QString,quint16);
    ~Sock(){delete socket;}
    void SendMessage(QJsonObject&);
    QTcpSocket* GetSocket();
    bool GetConnectState();
    void Json_Init();
signals:
    void NewConnect();
public slots:
    void incomingConnection(qintptr);
    void receiveMessage();
private:
    QTcpSocket *socket;
    bool isConnect = false;
    QString IP;
    quint16 Port;
};

#endif // SOCK_H
