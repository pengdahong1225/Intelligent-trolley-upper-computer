#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include<QSqlDatabase>
#include<QSqlQuery>
#include"imysql.h"
namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();
private slots:
    void loginStart();
signals:
    void send_success();
private:
    Ui::login *ui;
    QSqlDatabase db;
};

#endif // LOGIN_H
