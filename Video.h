#ifndef VIDEO_H
#define VIDEO_H

#include <QObject>
#include <QThread>
class Video : QThread
{
public:
    Video();
    void run();

};

#endif // VIDEO_H
