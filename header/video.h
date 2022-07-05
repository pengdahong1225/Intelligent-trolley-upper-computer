#ifndef VIDEO_H
#define VIDEO_H

#include <QObject>
#include <QThread>
#include <QUdpSocket>
#include <QByteArray>
#include <QImage>
class video : public QThread
{
    Q_OBJECT
public:
    explicit video(QObject *parent = nullptr);
    ~video();
public slots:
    void processPendingDatagram();
    void close();
signals:
    void recevie_success(QImage img);//值传递
protected:
    void run();
private:
    QImage dataDecode(std::vector<char>& data);
    QImage base64Decode(QByteArray& d);

    QUdpSocket* udpsocket;
    QByteArray realData;
    bool isOpen;

    double t_front;
};

#endif // VIDEO_H
