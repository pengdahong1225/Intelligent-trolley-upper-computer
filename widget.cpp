#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QFile>
#include <QTextStream>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("Sprensence Car");

    QFile CssFile;
    CssFile.setFileName("../Qssfile/car.qss");
    CssFile.open(QFile::ReadOnly);
    QTextStream filetext(&CssFile);
    QString style = filetext.readAll();
    this->setStyleSheet(style);
    CssFile.close();

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

    connect(ui->pbn_Manage,&QPushButton::clicked,[&](){
        ui->stackedWidget->setCurrentIndex(0);
    });
    connect(ui->pbn_Work,&QPushButton::clicked,[&](){
        ui->stackedWidget->setCurrentIndex(1);
    });
    connect(ui->pbn_Run,&QPushButton::clicked,this,&Widget::Run);
    connect(ui->pbn_C1,&QPushButton::clicked,[&](){
        ui->textEdit->append("客户端断开");
        ui->label_C1Z->setText(QString("离线"));
        ui->label_C1IP->setText(QString("IP:NULL"));
        ui->label_C1PORT->setText(QString("端口:NULL"));
    });
    connect(ui->pbn_C2,&QPushButton::clicked,[&](){
        ui->textEdit->append("客户端断开");
        ui->label_C2Z->setText(QString("离线"));
        ui->label_C2IP->setText(QString("IP:NULL"));
        ui->label_C2PORT->setText(QString("端口:NULL"));
    });
    connect(ui->pbn_clear,&QPushButton::clicked,[&](){
        ui->textEdit->clear();
    });
    connect(ui->pbn_Save,&QPushButton::clicked,this,&Widget::Init_Message);
    TcpClient = nullptr;
    void (QComboBox::*ptr)(int index) = &QComboBox::currentIndexChanged;
    connect(ui->comboBox,ptr,[&](int index){
        ui->stackedWidget_2->setCurrentIndex(index);
        if(TcpClient)
        {
            if(ui->comboBox->currentIndex() == 1)
            {
                this->TcpClient->AAA = true;
                qDebug()<<this->TcpClient->AAA;
            }
            else {
                this->TcpClient->AAA = false;
                qDebug()<<this->TcpClient->AAA;
            }
        }
        else {
            qDebug()<<"端口没有打开";
        }
    });
    connect(ui->pbn_no,&QPushButton::clicked,[&](){
        ui->textEdit_3->clear();
        from.clear();
        to.clear();
    });
}

Widget::~Widget()
{
    delete TcpClient;
    delete ui;
}

void Widget::Run()
{
    if(TcpClient == nullptr)
    {
        /*192.168.212.176 :9000*/
        TcpClient = new Sock(this,QString("10.97.13.6"),quint16(9000));
        ui->textEdit->append(QString("端口%1打开").arg(TcpClient->GetPort()));
        connect(this->TcpClient,&Sock::NewConnect,this,&Widget::NewConnect);
        connect(ui->pbn_Send,&QPushButton::clicked,this,&Widget::SendMessage);
        connect(this->TcpClient,&Sock::receiveOK,[&](QString receiveMSG){
            ui->textEdit_2->append(QString("from voice to car:")+QString(receiveMSG)+QString("            转发成功!"));
        });
        connect(this->TcpClient,&Sock::sock_disc,[&](){
            ui->textEdit->append("客户端断开");
            ui->label_C1Z->setText(QString("离线"));
            ui->label_C1IP->setText(QString("IP:NULL"));
            ui->label_C1PORT->setText(QString("端口:NULL"));

            ui->textEdit->append("客户端断开");
            ui->label_C2Z->setText(QString("离线"));
            ui->label_C2IP->setText(QString("IP:NULL"));
            ui->label_C2PORT->setText(QString("端口:NULL"));
        });
    }
    else {
        ui->textEdit->append(QString("端口已经打开"));
    }
}

void Widget::NewConnect(QString IP,quint16 port)
{
    if(this->TcpClient->GetSize() == 1)
    {
        ui->textEdit->append(IP);
        ui->label_C1Z->setText(QString("在线"));
        ui->label_C1IP->setText(QString("IP:"+IP));
        ui->label_C1PORT->setText(QString("端口:"+QString("%1").arg(port)));
    }
    else if(this->TcpClient->GetSize() == 2){
        ui->textEdit->append(IP);
        ui->label_C2Z->setText(QString("在线"));
        ui->label_C2IP->setText(QString("IP:"+IP));
        ui->label_C2PORT->setText(QString("端口:"+QString("%1").arg(port)));
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
        this->TcpClient->SendMessage();
        ui->textEdit_3->append("***********发送成功***********");
    }
    else {
        ui->textEdit->append("No Connection");
    }
}
