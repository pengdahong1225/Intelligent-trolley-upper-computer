#include "header/video.h"
#include<opencv2/opencv.hpp>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/types_c.h>

video::video(QObject *parent) : QThread(parent)
{
    udpsocket = new QUdpSocket(this);
    //保存自己的地址和端口
    udpsocket->bind(QHostAddress("10.218.31.224"),8888);
    connect(udpsocket,&QUdpSocket::readyRead,this,&video::processPendingDatagram);
    isOpen = true;
}

video::~video()
{
    delete udpsocket;
}

void video::processPendingDatagram()
{
    qDebug()<<"processPendingDatagram()";
    QByteArray datagram;
    int dataSize = static_cast<int>(udpsocket->pendingDatagramSize());
    datagram.resize(dataSize);
    udpsocket->readDatagram(datagram.data(),dataSize);

    /* from byte */
    if((unsigned char)datagram.at(dataSize-1) == 0xd9)
    {
        qDebug()<<"1";
        realData.append(datagram);
        /* decode and send */
        std::vector<char> data(realData.begin(),realData.end());
        QImage image = dataDecode(data);
        datagram.clear();
        realData.clear();
        emit recevie_success(image);
    }
    else
    {
        qDebug()<<"2";
        realData.append(datagram);
    }

    /* from base64 */
//    QImage image = base64Decode(datagram);
//    emit recevie_success(image);
}

void video::close()
{
    if(isOpen)
        isOpen=false;
}

void video::run()
{
    while(true)
    {
        sleep(1);
        if(isOpen==false)
            break;
    }
}

QImage video::dataDecode(std::vector<char>& data)
{
    cv::Mat img,realimg;
    QImage image;
    img = cv::imdecode(data,cv::IMREAD_COLOR);
    if(img.channels()==3)
    {
        image = QImage(img.data,img.cols,img.rows,
                       img.step,QImage::Format_RGB888);
    }
    return image.rgbSwapped();
}

QImage video::base64Decode(QByteArray &b)
{
    QImage img;
    QByteArray decryptedByte = QByteArray::fromBase64(b.data());
    img.loadFromData(decryptedByte);
    return img;
}
