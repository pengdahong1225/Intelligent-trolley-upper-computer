#ifndef WEBWIDGET_H
#define WEBWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QTextEdit>
#include <QJsonObject>
#include <QJsonDocument>

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
private:
    void initWidget();
    void initStyle();
    void initSignalSlots();
    QByteArray jsonInit(QString& data);
    std::vector<QPushButton*> pbn;
    QWidget* webview;
    QTextEdit* textedit;
    QJsonObject message;

};

#endif // WEBWIDGET_H
