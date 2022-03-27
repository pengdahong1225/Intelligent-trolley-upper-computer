#include "widget.h"
#include "login.h"
#include "wke.h"
#include <QApplication>
#include <QObject>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setStyle("windows");
    //login *obj=new login;
    //obj->show();
    Widget* w=new Widget;
    //QObject::connect(obj,&login::send_success,w,&Widget::receive_login);
    w->show();

    return a.exec();
}
