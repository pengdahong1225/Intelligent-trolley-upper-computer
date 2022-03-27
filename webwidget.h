#ifndef WEBWIDGET_H
#define WEBWIDGET_H

#include <QWidget>
#include <QResizeEvent>
#include "wke.h"

class WebWidget : public QWidget
{
    Q_OBJECT
public:
    explicit WebWidget(QWidget *parent = nullptr);
    ~WebWidget();
    wkeWebView webView;//浏览器控件对象
private:
    static QString file;
};

#endif // WEBWIDGET_H
