#ifndef SOCK_H
#define SOCK_H
#include<QTcpSocket>
#include<QTcpServer>
#include<QString>
#include<QJsonObject>
#include<QJsonDocument>
/*监听类*/
class Sock:public QTcpServer
{
    Q_OBJECT
public:
    Sock(QObject *parent,QString,quint16);
    void SendMessage();
    std::size_t GetSize(){return this->SockArray.size();}
    QJsonObject message;
    void JsonInit();
     bool AAA = false;
signals:
    void NewConnect(QString,quint16);
    void receiveOK(QString);
public slots:
    void incomingConnection(qintptr);
    void receiveMessage();
private:
    QTcpSocket* c;
    std::vector<QTcpSocket*> SockArray;
    QString listen_IP;
    quint16 listen_Port;
};

#endif // SOCK_H
