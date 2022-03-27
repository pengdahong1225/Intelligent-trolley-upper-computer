/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *label;
    QLabel *label_title;
    QFrame *frame;
    QLineEdit *lineEdit_user;
    QLineEdit *lineEdit_passwd;
    QPushButton *pbn_login;
    QLabel *label_user;
    QLabel *label_passed;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(885, 519);
        login->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 80, 441, 381));
        label->setFrameShape(QFrame::NoFrame);
        label->setAlignment(Qt::AlignCenter);
        label_title = new QLabel(login);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(570, 50, 191, 171));
        label_title->setFrameShape(QFrame::NoFrame);
        label_title->setAlignment(Qt::AlignCenter);
        frame = new QFrame(login);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(490, 150, 341, 311));
        frame->setFrameShape(QFrame::NoFrame);
        lineEdit_user = new QLineEdit(frame);
        lineEdit_user->setObjectName(QString::fromUtf8("lineEdit_user"));
        lineEdit_user->setGeometry(QRect(80, 90, 221, 41));
        QFont font;
        font.setPointSize(14);
        lineEdit_user->setFont(font);
        lineEdit_user->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        lineEdit_passwd = new QLineEdit(frame);
        lineEdit_passwd->setObjectName(QString::fromUtf8("lineEdit_passwd"));
        lineEdit_passwd->setGeometry(QRect(80, 150, 221, 41));
        lineEdit_passwd->setFont(font);
        lineEdit_passwd->setEchoMode(QLineEdit::Password);
        lineEdit_passwd->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        pbn_login = new QPushButton(frame);
        pbn_login->setObjectName(QString::fromUtf8("pbn_login"));
        pbn_login->setGeometry(QRect(190, 210, 111, 41));
        QFont font1;
        font1.setPointSize(12);
        pbn_login->setFont(font1);
        pbn_login->setCursor(QCursor(Qt::PointingHandCursor));
        label_user = new QLabel(frame);
        label_user->setObjectName(QString::fromUtf8("label_user"));
        label_user->setGeometry(QRect(20, 90, 51, 41));
        label_passed = new QLabel(frame);
        label_passed->setObjectName(QString::fromUtf8("label_passed"));
        label_passed->setGeometry(QRect(20, 150, 51, 41));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Dialog", nullptr));
        label->setText(QString());
        label_title->setText(QString());
        pbn_login->setText(QApplication::translate("login", "\347\231\273\345\275\225", nullptr));
        label_user->setText(QString());
        label_passed->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
