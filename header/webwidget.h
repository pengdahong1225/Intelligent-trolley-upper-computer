#ifndef WEBWIDGET_H
#define WEBWIDGET_H

#include "video.h"
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QTextEdit>
#include <QJsonObject>
#include <QJsonDocument>
#include <QMovie>
#include <QMessageBox>
#include <QCloseEvent>

class WebWidget : public QWidget
{
    Q_OBJECT
public:
    explicit WebWidget(QWidget *parent = nullptr);
    ~WebWidget();

signals:
    void sendMsg(QByteArray& data);
private slots:
    void goSlot();
    void backSlot();
    void pickSlot();
    void downSlot();
    void finishedThreadBtnSlot();
    void recevie_ok(QImage image);
protected:
    void closeEvent(QCloseEvent * evnet);
private:
    void initWidget();
    void initStyle();
    void initSignalSlots();
    void openVideo();
    QByteArray jsonInit(QString& data);
    std::vector<QPushButton*> pbn;
    QLabel* imageview;
    QTextEdit* textedit;
    QJsonObject message;
    QMovie* movie;
    /* 视频接收线程 */
    video* videoObj;
    static int count;
};

#endif // WEBWIDGET_H
