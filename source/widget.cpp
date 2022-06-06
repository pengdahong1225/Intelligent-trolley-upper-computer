#include "header/widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QDialog>
#include <QIcon>
#include <QProcess>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);
    initWidget();
    initStyle();
    initSignalSlots();
}

Widget::~Widget(){}

void Widget::initWidget()
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

    TcpClient = nullptr;
    webwidget = nullptr;
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

void Widget::initSignalSlots()
{
    /*外层stackedWidget管理*/
    connect(ui->pbn_Manage,&QPushButton::clicked,[&](){ui->stackedWidget->setCurrentIndex(0);});
    connect(ui->pbn_Work,&QPushButton::clicked,[&](){ui->stackedWidget->setCurrentIndex(1);});
    connect(ui->pbn_Run,&QPushButton::clicked,this,&Widget::Run);
    connect(ui->pbn_video,&QPushButton::clicked,this,&Widget::StartVideo);
    void (QComboBox::*ptr)(int index) = &QComboBox::currentIndexChanged;
    connect(ui->comboBox,ptr,[&](int index){
        ui->stackedWidget_2->setCurrentIndex(index);
        if(TcpClient)
        {
            if(ui->comboBox->currentIndex() == 1)
                this->TcpClient->voiceFlag = true;//开启语音转发功能
            else
                this->TcpClient->voiceFlag = false;//关闭
        }
        else {
            ui->textEdit->append("no client");
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
    connect(ui->pbn_cut,&QPushButton::clicked,[&](){
        if(ui->label_conditionB->text()=="在线"){
            this->TcpClient->cutDic();
        }
    });
    connect(ui->pbn_cut2,&QPushButton::clicked,[&](){
        if(ui->label_conditionB2->text()=="在线"){
            this->TcpClient->cutDic();
        }
    });
    connect(ui->pbn_clear,&QPushButton::clicked,[&](){ui->textEdit->clear();});
    connect(ui->pbn_Save,&QPushButton::clicked,this,&Widget::saveMessage);
    connect(ui->pbn_no,&QPushButton::clicked,[&](){
        ui->textEdit_3->clear();
        from.clear();
        to.clear();
    });
    connect(ui->btnMenu_Min,&QPushButton::clicked,this,[=](){this->showMinimized();});
    connect(ui->btnMenu_Close,&QPushButton::clicked,this,[=](){
        if(TcpClient != nullptr){
            TcpClient->close();
            delete TcpClient;
        }
        if(webwidget != nullptr)
        {
            delete webwidget;
        }
        delete ui;
        exit(0);//exit函数不调用析构
    });
}

void Widget::Run()
{
    if(TcpClient == nullptr)
    {
        /*192.168.96.176 :9000*/
        TcpClient = new Sock(this,QString("192.168.43.52"),quint16(9000));
        ui->textEdit->append(QString("port:%1").arg(TcpClient->GetPort()));
        connect(this->TcpClient,&Sock::NewConnect,this,&Widget::NewConnect);
        connect(ui->pbn_Send,&QPushButton::clicked,this,&Widget::SendMessage);
        connect(this->TcpClient,&Sock::receiveOK,[&](QString receiveMSG){
            ui->textEdit_2->append(QString("from voice to car:")+QString(receiveMSG)+QString("   Send success\r\nstatus : okey\r\n"));
        });
        connect(this->TcpClient,&Sock::sock_disc,[&](){
            ui->textEdit->append("client断开");
            ui->label_conditionB->setText(QString("离线"));
            ui->label_IPB->setText(QString(""));
            ui->label_timeB->setText(QString(""));

            ui->label_conditionB2->setText(QString("离线"));
            ui->label_IPB2->setText(QString(""));
            ui->label_timeB2->setText(QString(""));
        });
    }
    else {
        ui->textEdit->append("no server");
    }
}

void Widget::NewConnect(QString IP,quint16 port)
{
    if(this->TcpClient->GetSize() == 1)
    {
        ui->textEdit->append(IP);
        ui->label_conditionB->setText(QString("在线"));
        ui->label_IPB->setText(QString("IP:"+IP));
        ui->label_timeB->setText(QString(QString("%1").arg(port)));
    }
    else if(this->TcpClient->GetSize() == 2){
        ui->textEdit->append(IP);
        ui->label_conditionB2->setText(QString("在线"));
        ui->label_IPB2->setText(QString("IP:"+IP));
        ui->label_timeB2->setText(QString(QString("%1").arg(port)));
    }
}

void Widget::saveMessage()
{
    from.push_back(Group1.checkedId());
    to.push_back(Group2.checkedId());
    ui->textEdit_3->append(QString("%1").arg(Group1.checkedId())+QString("-->")+QString("%1").arg(Group2.checkedId()));
}

void Widget::InitMessage()
{
    /*整合*/
    QString F="",S="";
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
        InitMessage();
        this->TcpClient->sendMessage();
        ui->textEdit_3->append("*******Send successfully*******");
    }
    else {
        ui->textEdit->append("No Connection");
    }
}

void Widget::receivelogin()
{
    this->show();
}

void Widget::StartVideo()
{
    if(TcpClient){
        if(this->TcpClient->GetSize() > 0){
            webwidget = new WebWidget(this);
            connect(webwidget,&WebWidget::sendMsg,this,[&](QByteArray& data){
                this->TcpClient->sendMsgFrom_manual_mode(data);
            });

            webwidget->show();
        }
        else {
            ui->textEdit->append("no client");
        }
    }
    else {
        ui->textEdit->append("no server");
    }
}
