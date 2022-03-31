#include "webwidget.h"
#include<QDebug>

QString WebWidget::file=QString("../../lib/miniblink_x64.dll");
WebWidget::WebWidget(QWidget *parent) : QWidget(parent)
{
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    const wchar_t *path = reinterpret_cast<const wchar_t *>(file.utf16());
    wkeSetWkeDllPath(path);
    wkeInitialize();
}
WebWidget::~WebWidget(){
    wkeFinalize();
    qDebug()<<"in del";
}

