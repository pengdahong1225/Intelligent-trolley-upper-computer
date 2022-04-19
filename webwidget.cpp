#include "webwidget.h"
#include <QDebug>
#include <QFile>
WebWidget::WebWidget(QWidget *parent) : QWidget(parent)
{
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    this->setWindowFlag(Qt::Window);//QWeiget是一个部件,设置成窗口属性才能show
    this->resize(1300,800);
    this->setWindowTitle("manual mode");
    initWidget();
    initStyle();
    initSignalSlots();
}
WebWidget::~WebWidget(){
}



void WebWidget::goSlot()
{
    QString data("go");
    QByteArray message = jsonInit(data);
    emit sendMsg(message);
    this->textedit->append("go ahead\r\nSend success\r\nstatus : okey\r\n");
}

void WebWidget::backSlot()
{
    /*QString data("back");
    QByteArray message = jsonInit(data);
    emit sendMsg(message);
    this->textedit->append("go back\r\nSend success\r\nstatus : okey\r\n");*/
}

void WebWidget::pickSlot()
{
    QString data("up");
    QByteArray message = jsonInit(data);
    emit sendMsg(message);
    this->textedit->append("pick up\r\nSend success\r\nstatus : okey\r\n");
}

void WebWidget::downSlot()
{
    QString data("down");
    QByteArray message = jsonInit(data);
    emit sendMsg(message);
    this->textedit->append("down\r\nSend success\r\nstatus : okey\r\n");
}

void WebWidget::initWidget()
{
    this->setObjectName("webwidget");
    pbn.push_back(new QPushButton("go",this));
    pbn.push_back(new QPushButton("back",this));
    pbn.push_back(new QPushButton("pick",this));
    pbn.push_back(new QPushButton("down",this));

    webview = new QWidget(this);
    webview->setObjectName("webview");//必须注册对象名，qss才能定位
    textedit = new QTextEdit(this);
    textedit->setObjectName("textedit");
    textedit->setReadOnly(true);

    /*栅栏布局*/
    QGridLayout* glayout = new QGridLayout;
    for(auto button:pbn){
        button->setSizePolicy(QSizePolicy::Preferred,QSizePolicy::Preferred);
        button->setMaximumSize(150,150);
        button->setMinimumSize(100,100);
    }
    glayout->addWidget(pbn[0],0,0,1,1);
    glayout->addWidget(pbn[1],0,1,1,1);
    glayout->addWidget(pbn[2],1,0,1,1);
    glayout->addWidget(pbn[3],1,1,1,1);
    glayout->setSpacing(10); //将垂直和水平间距都设置为间距10
    /*垂直布局*/
    QVBoxLayout* vlayout = new QVBoxLayout;
    vlayout->addLayout(glayout);
    vlayout->addSpacing(10);
    textedit->setSizePolicy(QSizePolicy::Preferred,QSizePolicy::Fixed);
    textedit->setMinimumSize(200,500);
    textedit->setMaximumSize(400,1500);
    vlayout->addWidget(textedit);

    /*水平布局,并设置为主布局*/
    QHBoxLayout* hlayout = new QHBoxLayout(this);
    hlayout->addWidget(webview,Qt::AlignHCenter);
    hlayout->addStretch();
    hlayout->addLayout(vlayout);

    setLayout(hlayout);
}

void WebWidget::initStyle()
{
    QFile CssFile;
    CssFile.setFileName("../Qssfile/webview.qss");
    CssFile.open(QFile::ReadOnly);
    QTextStream filetext(&CssFile);       //转流
    QString style = filetext.readAll();
    this->setStyleSheet(style);
    CssFile.close();
}

void WebWidget::initSignalSlots()
{
    connect(this->pbn[0],&QPushButton::clicked,this,&WebWidget::goSlot);
    connect(this->pbn[1],&QPushButton::clicked,this,&WebWidget::backSlot);
    connect(this->pbn[2],&QPushButton::clicked,this,&WebWidget::pickSlot);
    connect(this->pbn[3],&QPushButton::clicked,this,&WebWidget::downSlot);
}

QByteArray WebWidget::jsonInit(QString& data)
{
    QString F="",S="";
    message.insert("goodsnums",0);
    message.insert("goodsstart",F);
    message.insert("goodsend",S);
    message.insert("arm0", "200");
    message.insert("arm1", "200");
    message.insert("arm2", "200");
    message.insert("arm3", "200");
    message.insert("arm4", "200");
    message.insert("arm5", "200");
    message.insert("goodsstatus", "okey");
    message.insert("voicecom",data);
    QJsonDocument jsondocument;
    jsondocument.setObject(message);
    QByteArray dataArray = jsondocument.toJson();
    return dataArray;
}

