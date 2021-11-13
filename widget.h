#ifndef WIDGET_H
#define WIDGET_H
#include"sock.h"
#include <QWidget>
#include<QButtonGroup>
#include<QJsonObject>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    void Init_Message();
    void Init_Message2();
public slots:
    void Run();
    void NewConnect(QString,quint16);
    void SendMessage();
private:
    Ui::Widget *ui;
    Sock* TcpClient;
    QButtonGroup Group1;
    QButtonGroup Group2;
    //QJsonObject jsonobject;
    std::vector<int> from;
    std::vector<int> to;
};
#endif // WIDGET_H
