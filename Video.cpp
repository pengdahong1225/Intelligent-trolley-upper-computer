#include "Video.h"
#include <QDebug>
Video::Video()
{

}

void Video::run()
{
     system("python D:\\Codes\\Qt\\Sony-Host-computer\\server.py");
     qDebug()<<"video";
}
