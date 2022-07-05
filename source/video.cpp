#include "header/video.h"
#include<opencv2/opencv.hpp>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/types_c.h>

video::video(QObject *parent) : QThread(parent)
{
    udpsocket = new QUdpSocket(this);
    //保存自己的地址和端口
    udpsocket->bind(QHostAddress("192.168.61.176"),8888);
    connect(udpsocket,&QUdpSocket::readyRead,this,&video::processPendingDatagram);
    isOpen = true;
    t_front = (double)cv::getTickCount();
}

video::~video()
{
    delete udpsocket;
}

void video::processPendingDatagram()
{
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
    /* 旋转 */
    flip(img, img, -1);
    /* 帧率 */
    char str[20];
    double fps;		//帧率
    double t_now = ((double)cv::getTickCount() - t_front) / cv::getTickFrequency();	//getTickFrequency返回每秒的计时周期数
    fps = (1.0 / t_now)*2;
    sprintf_s(str, "%.2f", fps);
    std::string s("FPS:");
    s += str;
    cv::putText(img,s,cv::Point(5,20),cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(0, 0, 255));

    if(img.channels()==3)
    {
        image = QImage(img.data,img.cols,img.rows,
                       img.step,QImage::Format_RGB888);
    }
    t_front = (double)cv::getTickCount();
    return image.rgbSwapped();
}

QImage video::base64Decode(QByteArray &b)
{
    QImage img;
    QByteArray decryptedByte = QByteArray::fromBase64(b.data());
    img.loadFromData(decryptedByte);
    return img;
}
