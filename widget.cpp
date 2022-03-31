#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QVBoxLayout>
#include <QDialog>
#include <QIcon>
#include <QMediaPlayer>
#include <QVideoWidget>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    initStyle();
    initFunc();
}

Widget::~Widget()
{
    if(TcpClient){
        TcpClient->close();
        delete TcpClient;
    }
    if(webwidget)
        delete webwidget;
    delete ui;
}

void Widget::initFunc()
{
    /*radio分组*/
    Group1.addButton(ui->radioButton,1);
    Group1.addButton(ui->radioButton_2,2);
    Group1.addButton(ui->radioButton_5,3);
    Group1.addButton(ui->radioButton_6,4);
    Group1.addButton(ui->radioButton_7,5);
    Group2.addButton(ui->radioButton_13,1);
    Group2.addButton(ui->radioButton_14,2);
    Group2.addButton(ui->radioButton_15,3);
    Group2.addButton(ui->radioButton_16,4);
    Group2.addButton(ui->radioButton_17,5);

    /*外层stackedWidget管理*/
    connect(ui->pbn_Manage,&QPushButton::clicked,[&](){
        ui->stackedWidget->setCurrentIndex(0);
    });
    connect(ui->pbn_Work,&QPushButton::clicked,[&](){
        ui->stackedWidget->setCurrentIndex(1);
    });
    connect(ui->pbn_Run,&QPushButton::clicked,this,&Widget::Run);
    connect(ui->pbn_video,&QPushButton::clicked,this,&Widget::StartVideo);
    void (QComboBox::*ptr)(int index) = &QComboBox::currentIndexChanged;
    connect(ui->comboBox,ptr,[&](int index){
        ui->stackedWidget_2->setCurrentIndex(index);
        if(TcpClient)
        {
            if(ui->comboBox->currentIndex() == 1)
                this->TcpClient->voiceFlag = true;
            else
                this->TcpClient->voiceFlag = false;
        }
        else {
            ui->textEdit->append("没有连接");
        }
    });
    /*内层stackedWidget管理*/
    void (QComboBox::*ptr2)(int index) = &QComboBox::currentIndexChanged;
    connect(ui->comboBox_Clients,ptr2,[&](int index){
        ui->stackedWidgetK->setCurrentIndex(index);
    });
    connect(ui->btnMainWindow,&QPushButton::clicked,[&](){
        ui->stackedWidgetK->setCurrentIndex(0);
        ui->comboBox_Clients->setCurrentIndex(0);
    });

    /*other*/
    TcpClient = nullptr;
    webwidget = nullptr;
    connect(ui->pbn_cut,&QPushButton::clicked,[&](){
        if(ui->label_conditionB->text()=="在线"){
            ui->textEdit->append("客户端1断开");
            ui->label_conditionB->setText(QString("离线"));
            ui->label_IPB->setText(QString(""));
            ui->label_timeB->setText(QString(""));
        }
    });
    connect(ui->pbn_cut2,&QPushButton::clicked,[&](){
        if(ui->label_conditionB2->text()=="在线"){
            ui->textEdit->append("客户端2断开");
            ui->label_conditionB2->setText(QString("离线"));
            ui->label_IPB2->setText(QString(""));
            ui->label_timeB2->setText(QString(""));
        }
    });
    connect(ui->pbn_clear,&QPushButton::clicked,[&](){
        ui->textEdit->clear();
    });
    connect(ui->pbn_Save,&QPushButton::clicked,this,&Widget::Init_Message);
    connect(ui->pbn_no,&QPushButton::clicked,[&](){
        ui->textEdit_3->clear();
        from.clear();
        to.clear();
    });
    connect(ui->btnMenu_Min,&QPushButton::clicked,this,[=](){
        this->showMinimized();
    });
    connect(ui->btnMenu_Close,&QPushButton::clicked,this,[=](){
        exit(0);
    });
}

void Widget::initStyle()
{
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinimizeButtonHint);
    QFile CssFile;
    CssFile.setFileName("../Qssfile/car.qss");
    CssFile.open(QFile::ReadOnly);
    QTextStream filetext(&CssFile);
    QString style = filetext.readAll();
    this->setStyleSheet(style);
    CssFile.close();
    QPixmap pixmap(":/prefix1/pic/title.png");
    ui->lab_Ico->setScaledContents(true);
    ui->lab_Ico->setPixmap(pixmap);
    const QIcon Min(":/prefix1/pic/small.ico");
    const QIcon Close(":/prefix1/pic/close.ico");
    ui->btnMenu_Min->setIcon(Min);
    ui->btnMenu_Close->setIcon(Close);
}

void Widget::Run()
{
    if(TcpClient == nullptr)
    {
        /*192.168.212.176 :9000*/
        TcpClient = new Sock(this,QString("10.218.31.224"),quint16(9000));
        ui->textEdit->append(QString("端口%1打开").arg(TcpClient->GetPort()));
        connect(this->TcpClient,&Sock::NewConnect,this,&Widget::NewConnect);
        connect(ui->pbn_Send,&QPushButton::clicked,this,&Widget::SendMessage);
        connect(this->TcpClient,&Sock::receiveOK,[&](QString receiveMSG){
            ui->textEdit_2->append(QString("from voice to car:")+QString(receiveMSG)+QString("            转发成功!"));
        });
        connect(this->TcpClient,&Sock::sock_disc,[&](){
            ui->textEdit->append("客户端1断开");
            ui->label_conditionB->setText(QString("离线"));
            ui->label_IPB->setText(QString(""));
            ui->label_timeB->setText(QString(""));

            ui->textEdit->append("客户端2断开");
            ui->label_conditionB2->setText(QString("离线"));
            ui->label_IPB2->setText(QString(""));
            ui->label_timeB2->setText(QString(""));
        });
    }
}

void Widget::NewConnect(QString IP,quint16 port)
{
    if(this->TcpClient->GetSize() == 1)
    {
        ui->textEdit->append(IP);
        ui->label_conditionB->setText(QString("在线"));
        ui->label_IPB->setText(QString("IP:"+IP));
        ui->label_timeB->setText(QString("端口:"+QString("%1").arg(port)));
    }
    else if(this->TcpClient->GetSize() == 2){
        ui->textEdit->append(IP);
        ui->label_conditionB2->setText(QString("在线"));
        ui->label_IPB2->setText(QString("IP:"+IP));
        ui->label_timeB2->setText(QString("端口:"+QString("%1").arg(port)));
    }
}

void Widget::Init_Message()
{
    from.push_back(Group1.checkedId());
    to.push_back(Group2.checkedId());
    ui->textEdit_3->append(QString("%1").arg(Group1.checkedId())+QString("-->")+QString("%1").arg(Group2.checkedId()));
}

void Widget::Init_Message2()
{
    /*整合*/
    QString F{},S{};
    for(size_t i=0;i<from.size();i++)
    {
        F += QString("%1").arg(from[i]);
        S += QString("%1").arg(to[i]);
    }
    /*机械臂角度*/
    this->TcpClient->message.insert("arm0", "200");
    this->TcpClient->message.insert("arm1", "200");
    this->TcpClient->message.insert("arm2", "200");
    this->TcpClient->message.insert("arm3", "200");
    this->TcpClient->message.insert("arm4", "200");
    this->TcpClient->message.insert("arm5", "200");

    this->TcpClient->message.insert("goodsnums",int(from.size()));
    this->TcpClient->message.insert("goodsstart",F);
    this->TcpClient->message.insert("goodsend",S);
    this->TcpClient->message.insert("status", "okey");
    this->TcpClient->message.insert("voicecom","stop");
}

void Widget::SendMessage()
{
    if(this->TcpClient->GetSize() > 0)
    {
        Init_Message2();
        this->TcpClient->sendMessage();
        ui->textEdit_3->append("***********发送成功***********");
    }
    else {
        ui->textEdit->append("No Connection");
    }
}

void Widget::receive_login()
{
    this->show();
}

void Widget::StartVideo()
{
    ui->stackedWidget->setCurrentIndex(2);
    if(webwidget==nullptr){
        webwidget = new WebWidget(this);
        videoDialog = new QDialog(this);
        videoDialog->resize(1500,800);
        webwidget->webView = wkeCreateWebWindow(WKE_WINDOW_TYPE_CONTROL,(HWND)videoDialog->winId(),
                                                0, 0, videoDialog->width(),videoDialog->height());
        wkeLoadURL(webwidget->webView, "http://192.168.206.83:81/stream");
        wkeShowWindow(webwidget->webView, TRUE);
        videoDialog->show();
    }
}
void Widget::mousePressEvent(QMouseEvent *e)
{
    bPressFlag = true;
    beginDrag = e->pos();
    QWidget::mousePressEvent(e);
}

void Widget::mouseMoveEvent(QMouseEvent *e)
{
    if(bPressFlag)
    {
        QPoint relaPos(QCursor::pos() - beginDrag);
        move(relaPos);
    }
    QWidget::mouseMoveEvent(e);
}
