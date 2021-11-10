#include "widget.h"
#include "ui_widget.h"
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("Sprensence Car");

    Count_Connect = 0;
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
        ui->textEdit->append("客户端1断开");
        ui->label_C1IP->setText(QString("IP:NULL"));
        ui->label_C1PORT->setText(QString("端口:NULL"));
        Count_Connect--;
    });
    connect(ui->pbn_clear,&QPushButton::clicked,[&](){
        ui->textEdit->clear();
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::Run()
{
    if(!TcpClient)
    {
        /*192.168.212.176 :9000*/
        TcpClient = new Sock(this,QString("192.168.74.1"),quint16(9000));
        connect(this->TcpClient,&Sock::NewConnect,this,&Widget::NewConnect);
        connect(ui->pbn_Send,&QPushButton::clicked,this,&Widget::SendMessage);
    }
    else {
        ui->textEdit->append(QString("端口已经打开"));
    }
}

void Widget::NewConnect()
{
    quint16 port = TcpClient->GetSocket()->peerPort();
    ui->textEdit->append("客户端1连接");
    ui->textEdit->append(QString("地址:")+TcpClient->GetSocket()->peerAddress().toString());
    ui->label_C1IP->setText(QString("IP:"+TcpClient->GetSocket()->peerAddress().toString()));
    ui->label_C1PORT->setText(QString("端口:"+QString("%1").arg(port)));
    Count_Connect++;
}

void Widget::SendMessage()
{
    /*判断*/
    if(Count_Connect > 0)
    {
        int CON = ui->comboBox->currentIndex();
        int from = Group1.checkedId();
        int to = Group2.checkedId();
        if(CON > 0 && from!=-1 && to != -1)
        {
            QString from = QString("%1").arg(this->Group1.checkedId());
            QString to = QString("%1").arg(this->Group2.checkedId());
            qDebug()<<from+to;
            ui->textEdit->append(QString("客户端1:")+from+QString("号到")+to+QString("号"));
            QJsonObject jsonobject;
            /*机械臂角度*/
            jsonobject.insert("arm0", "200");
            jsonobject.insert("arm1", "200");
            jsonobject.insert("arm2", "200");
            jsonobject.insert("arm3", "200");
            jsonobject.insert("arm4", "200");
            jsonobject.insert("arm5", "200");

            jsonobject.insert("goodsnums",1);
            jsonobject.insert("goodsstart", from+to);
            jsonobject.insert("status", "okey");
            this->TcpClient->SendMessage(jsonobject);
        }
        else {
            ui->textEdit->append("选择发送客户端");
        }
    }
    else {
        ui->textEdit->append("No Connection");
    }
}

void Widget::MSGError(QAbstractSocket::SocketError){}
