#ifndef WIDGET_H
#define WIDGET_H
#include "sock.h"
#include "webwidget.h"
#include <QWidget>
#include <QButtonGroup>
#include <QJsonObject>
namespace Ui {
class Widget;
}
class WebWidget;
class Widget : public QWidget
{
    friend class WebWidget;
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    void initWidget();
    void initStyle();
    void initSignalSlots();
    void saveMessage();
    void InitMessage();
public slots:
    void Run();
    void NewConnect(QString,quint16);
    void SendMessage();
    void receivelogin();
    void StartVideo();
private:
    Ui::Widget *ui;
    Sock* TcpClient;
    WebWidget* webwidget;
    QButtonGroup Group1;
    QButtonGroup Group2;
    std::vector<int> from;
    std::vector<int> to;
};
#endif // WIDGET_H
