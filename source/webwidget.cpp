#include "header/webwidget.h"
#include <QDebug>
#include <QFile>
int WebWidget::count=0;
WebWidget::WebWidget(QWidget *parent) : QWidget(parent)
{
    this->setWindowFlag(Qt::Window);//QWeiget是一个部件,设置成窗口属性才能show
    this->setAttribute(Qt::WA_DeleteOnClose);
    this->resize(1300,800);
    this->setWindowTitle("manual mode");
    videoObj = nullptr;
    movie = nullptr;
    initWidget();
    initStyle();
    initSignalSlots();
    openVideo();
}
WebWidget::~WebWidget()
{
    qDebug()<<"WebWidget析构";
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

    imageview = new QLabel(this);
    imageview->setObjectName("imageview");//必须注册对象名，qss才能定位
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
    hlayout->addWidget(imageview,Qt::AlignHCenter);
    hlayout->addStretch();
    hlayout->addLayout(vlayout);

    setLayout(hlayout);
    if(movie == nullptr)
    {
        movie = new QMovie("../../pic/img_loading.gif",QByteArray(),this);
        imageview->setMovie(movie);
        movie->resized(QSize(50,50));
        imageview->setAlignment(Qt::AlignCenter);//居中显示
        movie->start();
    }
}

void WebWidget::initStyle()
{
    QFile CssFile;
    CssFile.setFileName("../../Qssfile/webview.qss");
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

void WebWidget::openVideo()
{
    if(videoObj == nullptr)
    {
        videoObj = new video(this);
        connect(this->videoObj,&video::finished,this,
                &WebWidget::finishedThreadBtnSlot);
        connect(this->videoObj,&video::recevie_success,this,&WebWidget::recevie_ok);
        videoObj->start();
    }
}

void WebWidget::finishedThreadBtnSlot()
{
    qDebug()<<"video exit";
}

void WebWidget::recevie_ok(QImage image)
{
    if(++count == 1)
    {
        movie->stop();
        imageview->clear();
    }
    imageview->setScaledContents(true);
    if(!image.isNull())
    {
        imageview->setPixmap(QPixmap::fromImage(image));
    }
}

void WebWidget::closeEvent(QCloseEvent *event)
{
    /* 安全退出线程 */
    if(videoObj!=nullptr)
    {
        videoObj->close();
        videoObj->deleteLater();
        videoObj->wait();
        delete videoObj;
        videoObj = nullptr;
    }
    emit closeWebwidget();
    /* 关闭窗口 */
    this->close();
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
