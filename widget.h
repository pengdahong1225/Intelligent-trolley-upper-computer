#ifndef WIDGET_H
#define WIDGET_H
#include "sock.h"
#include "webwidget.h"
#include <QWidget>
#include <QButtonGroup>
#include <QJsonObject>
#include <QProcess>
#include <QMouseEvent>
namespace Ui {
class Widget;
}
class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    void initWidget();
    void initStyle();
    void initSignalSlots();
    void saveMessage();
    void InitMessage();
    void showVideo();
public slots:
    void Run();
    void NewConnect(QString,quint16);
    void SendMessage();
    void receivelogin();
    void StartVideo();
protected:
    bool eventFilter(QObject *obj,QEvent *e);
    /*void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);*/
private:
    Ui::Widget *ui;
    Sock* TcpClient;
    WebWidget* webwidget;
    QButtonGroup Group1;
    QButtonGroup Group2;
    std::vector<int> from;
    std::vector<int> to;
    QProcess* process;

    bool bPressFlag;
    QPoint beginDrag;
};
#endif // WIDGET_H
