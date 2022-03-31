#include "login.h"
#include "ui_login.h"
#include<QPixmap>
#include<QPushButton>
#include <QFile>
#include <QTextStream>
#include<QToolTip>
#include<QDebug>
login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    this->setWindowTitle("Spresence Car");
    /*初始化*/
    this->setAttribute(Qt::WA_DeleteOnClose,true);   //关闭窗口后自动关闭本对象，析构
    setWindowFlags(windowFlags()& ~Qt::WindowMaximizeButtonHint);
    setFixedSize(this->width(), this->height());
    this->setAutoFillBackground(true);  //必须有这条语句
    setPalette(QPalette(QColor(208,224,227)));
    QPixmap pixmap1(":/prefix1/pic/5.png");
    ui->label->setScaledContents(true);
    ui->label->setPixmap(pixmap1);
    QPixmap pixmap2(":/prefix1/pic/arm.png");
    ui->label_title->setScaledContents(true);
    ui->label_title->setPixmap(pixmap2);
    QPixmap pixmap3(":/prefix1/pic/3.png");
    ui->label_user->setScaledContents(true);
    ui->label_user->setPixmap(pixmap3);
    QPixmap pixmap4(":/prefix1/pic/4.png");
    ui->label_passed->setScaledContents(true);
    ui->label_passed->setPixmap(pixmap4);
    ui->lineEdit_user->setClearButtonEnabled(true);
    ui->lineEdit_passwd->setClearButtonEnabled(true);
    ui->lineEdit_user->setPlaceholderText("账号/用户名");
    ui->lineEdit_passwd->setPlaceholderText("密码");
    QFile qssFile("../Qssfile/login.qss");
    qssFile.open(QFile::ReadOnly);
    QTextStream filetext(&qssFile);
    QString stylesheet = filetext.readAll();
    this->setStyleSheet(stylesheet);
    qssFile.close();
    ui->pbn_login->setShortcut(QKeySequence::InsertParagraphSeparator);//回车
    connect(ui->pbn_login,&QPushButton::clicked,this,&login::loginStart);
}

login::~login()
{
    delete ui;
}

void login::loginStart()
{
    QString user(ui->lineEdit_user->text());
    QString passwd(ui->lineEdit_passwd->text());
    if(user.isEmpty()){
        QString na = QString("<b style=\"background:white;color:black;\"><font size=3>%1</font></b>");
        QToolTip::showText(ui->lineEdit_user->mapToGlobal(QPoint(20,10)),na.arg("请你输入用户名再登录"));
    }
    else if(passwd.isEmpty()){
        QString pa = QString("<b style=\"background:white;color:black;\"><font size=3>%1</font></b>");
        QToolTip::showText(ui->lineEdit_passwd->mapToGlobal(QPoint(20,10)),pa.arg("请你输入密码再登录"));
    }
    else {
        if(connect_sql(this->db)){
            QSqlQuery query(db);
            query.exec("select * from spresenceuser");
            while(query.next()){
                QString sqlname = query.value(0).toString();
                QString sqlpasswd = query.value(1).toString();
                if(user == sqlname && passwd == sqlpasswd){
                    qDebug()<<"登录成功";
                    emit this->send_success();
                    this->close();
                    break;
                }
                else {
                    QString st = QString("<b style=\"background:white;color:red;\"><font size=4>%1</font></b>");
                    QToolTip::showText(ui->lineEdit_user->mapToGlobal(QPoint(50,20)),st.arg("请检查账户密码后再次登录"));
                }
            }
        }
        else{
            QString st = QString("<b style=\"background:white;color:red;\"><font size=4>%1</font></b>");
            QToolTip::showText(ui->lineEdit_user->mapToGlobal(QPoint(50,20)),st.arg("请检查网络"));
        }
    }
}









