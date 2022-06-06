#include "header/widget.h"
#include "header/login.h"
#include <QApplication>
#include <QObject>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login *obj=new login;
    obj->show();
    Widget* w=new Widget;
    QObject::connect(obj,&login::send_success,w,&Widget::receivelogin);
    //w->show();

    return a.exec();
}
