#ifndef SOCK_H
#define SOCK_H
#include<QTcpSocket>
#include<QTcpServer>
#include<QString>
#include<QJsonObject>
#include<QJsonDocument>
#include <QTimer>
/*监听类*/
class Sock:public QTcpServer
{
    Q_OBJECT
public:
    Sock(QObject *parent,QString,quint16);
    ~Sock();
    void sendMessage();
    std::size_t GetSize(){return this->SockArray.size();}
    quint16 GetPort(){return listen_Port;}
    QJsonObject message;
    void JsonInit();
    bool send_WakeHand(QTcpSocket&);
    bool AAA = false;
    bool CON_FLAG = false;
signals:
    void NewConnect(QString,quint16);
    void receiveOK(QString);
    void sock_disc();
public slots:
    void incomingConnection(qintptr);
    void receiveMessage();
private:
    QTcpSocket* c;
    std::vector<QTcpSocket*> SockArray;
    QTimer *timer;
    QString listen_IP;
    quint16 listen_Port;
};

#endif // SOCK_H
