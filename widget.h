#ifndef WIDGET_H
#define WIDGET_H
#include"sock.h"
#include <QWidget>
#include<QButtonGroup>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
public slots:
    void Run();
    void NewConnect();
    void SendMessage();
    void MSGError(QAbstractSocket::SocketError);
private:
    Ui::Widget *ui;
    Sock* TcpClient;
    uint Count_Connect;
    QButtonGroup Group1;
    QButtonGroup Group2;
};
#endif // WIDGET_H
