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
    ~Sock();
    void sendMessage();
    void sendMsgFrom_manual_mode(QByteArray& data);
    std::size_t GetSize(){return this->SockArray.size();}
    quint16 GetPort(){return listen_Port;}
    void cutDic();

    QJsonObject message;
    void JsonInit();
    bool voiceFlag = false;
    bool CON_FLAG = false;
signals:
    void NewConnect(QString,quint16);
    void receiveOK(QString);
    void sock_disc();
private slots:
    void incomingConnection(qintptr);
    void receiveMessage();
    void MSGError(QAbstractSocket::SocketError);
private:
    QTcpSocket* c;
    std::vector<QTcpSocket*> SockArray;
    QString listen_IP;
    quint16 listen_Port;
};

#endif // SOCK_H
