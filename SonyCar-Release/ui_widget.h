/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_C1;
    QLabel *label_C2;
    QLabel *label_C3;
    QLabel *label_C4;
    QLabel *label_C1Z;
    QLabel *label_C1IP;
    QLabel *label_C1PORT;
    QPushButton *pbn_C1;
    QPushButton *pbn_C2;
    QLabel *label_C2IP;
    QLabel *label_C2PORT;
    QLabel *label_C2Z;
    QPushButton *pbn_C3;
    QLabel *label_C3IP;
    QLabel *label_C3PORT;
    QLabel *label_C3Z;
    QLabel *label_C4PORT;
    QLabel *label_C4Z;
    QLabel *label_C4IP;
    QPushButton *pbn_C4;
    QWidget *page_2;
    QComboBox *comboBox;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QPushButton *pbn_Send;
    QPushButton *pbn_Save;
    QGroupBox *groupBox_4;
    QWidget *widget_5;
    QRadioButton *radioButton_13;
    QRadioButton *radioButton_14;
    QRadioButton *radioButton_15;
    QRadioButton *radioButton_16;
    QRadioButton *radioButton_17;
    QPushButton *pbn_no;
    QGroupBox *groupBox_3;
    QWidget *widget;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QTextEdit *textEdit_3;
    QWidget *page_4;
    QGroupBox *groupBox_5;
    QTextEdit *textEdit_2;
    QGroupBox *groupBox_2;
    QTextEdit *textEdit;
    QPushButton *pbn_clear;
    QGroupBox *groupBox;
    QPushButton *pbn_Manage;
    QPushButton *pbn_Work;
    QPushButton *pbn_Run;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1141, 665);
        Widget->setMaximumSize(QSize(1141, 665));
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(210, 40, 901, 581));
        stackedWidget->setFrameShape(QFrame::StyledPanel);
        stackedWidget->setFrameShadow(QFrame::Plain);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        line = new QFrame(page);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 280, 911, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(page);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(440, 0, 20, 591));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_C1 = new QLabel(page);
        label_C1->setObjectName(QString::fromUtf8("label_C1"));
        label_C1->setGeometry(QRect(10, 10, 51, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(12);
        label_C1->setFont(font);
        label_C1->setAlignment(Qt::AlignCenter);
        label_C2 = new QLabel(page);
        label_C2->setObjectName(QString::fromUtf8("label_C2"));
        label_C2->setGeometry(QRect(460, 10, 51, 31));
        label_C2->setFont(font);
        label_C2->setAlignment(Qt::AlignCenter);
        label_C3 = new QLabel(page);
        label_C3->setObjectName(QString::fromUtf8("label_C3"));
        label_C3->setGeometry(QRect(10, 310, 51, 31));
        label_C3->setFont(font);
        label_C3->setAlignment(Qt::AlignCenter);
        label_C4 = new QLabel(page);
        label_C4->setObjectName(QString::fromUtf8("label_C4"));
        label_C4->setGeometry(QRect(460, 310, 51, 31));
        label_C4->setFont(font);
        label_C4->setAlignment(Qt::AlignCenter);
        label_C1Z = new QLabel(page);
        label_C1Z->setObjectName(QString::fromUtf8("label_C1Z"));
        label_C1Z->setGeometry(QRect(130, 40, 181, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(15);
        label_C1Z->setFont(font1);
        label_C1Z->setAlignment(Qt::AlignCenter);
        label_C1IP = new QLabel(page);
        label_C1IP->setObjectName(QString::fromUtf8("label_C1IP"));
        label_C1IP->setGeometry(QRect(80, 100, 291, 41));
        label_C1IP->setFont(font1);
        label_C1IP->setFrameShape(QFrame::Box);
        label_C1IP->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_C1PORT = new QLabel(page);
        label_C1PORT->setObjectName(QString::fromUtf8("label_C1PORT"));
        label_C1PORT->setGeometry(QRect(80, 160, 291, 41));
        label_C1PORT->setFont(font1);
        label_C1PORT->setFrameShape(QFrame::Box);
        label_C1PORT->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pbn_C1 = new QPushButton(page);
        pbn_C1->setObjectName(QString::fromUtf8("pbn_C1"));
        pbn_C1->setGeometry(QRect(80, 220, 71, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Consolas"));
        font2.setPointSize(10);
        pbn_C1->setFont(font2);
        pbn_C2 = new QPushButton(page);
        pbn_C2->setObjectName(QString::fromUtf8("pbn_C2"));
        pbn_C2->setGeometry(QRect(530, 220, 71, 41));
        pbn_C2->setFont(font2);
        label_C2IP = new QLabel(page);
        label_C2IP->setObjectName(QString::fromUtf8("label_C2IP"));
        label_C2IP->setGeometry(QRect(530, 100, 291, 41));
        label_C2IP->setFont(font1);
        label_C2IP->setFrameShape(QFrame::Box);
        label_C2IP->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_C2PORT = new QLabel(page);
        label_C2PORT->setObjectName(QString::fromUtf8("label_C2PORT"));
        label_C2PORT->setGeometry(QRect(530, 160, 291, 41));
        label_C2PORT->setFont(font1);
        label_C2PORT->setFrameShape(QFrame::Box);
        label_C2PORT->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_C2Z = new QLabel(page);
        label_C2Z->setObjectName(QString::fromUtf8("label_C2Z"));
        label_C2Z->setGeometry(QRect(580, 40, 181, 41));
        label_C2Z->setFont(font1);
        label_C2Z->setAlignment(Qt::AlignCenter);
        pbn_C3 = new QPushButton(page);
        pbn_C3->setObjectName(QString::fromUtf8("pbn_C3"));
        pbn_C3->setGeometry(QRect(80, 510, 71, 41));
        pbn_C3->setFont(font2);
        label_C3IP = new QLabel(page);
        label_C3IP->setObjectName(QString::fromUtf8("label_C3IP"));
        label_C3IP->setGeometry(QRect(80, 390, 291, 41));
        label_C3IP->setFont(font1);
        label_C3IP->setFrameShape(QFrame::Box);
        label_C3IP->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_C3PORT = new QLabel(page);
        label_C3PORT->setObjectName(QString::fromUtf8("label_C3PORT"));
        label_C3PORT->setGeometry(QRect(80, 450, 291, 41));
        label_C3PORT->setFont(font1);
        label_C3PORT->setFrameShape(QFrame::Box);
        label_C3PORT->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_C3Z = new QLabel(page);
        label_C3Z->setObjectName(QString::fromUtf8("label_C3Z"));
        label_C3Z->setGeometry(QRect(130, 330, 181, 41));
        label_C3Z->setFont(font1);
        label_C3Z->setAlignment(Qt::AlignCenter);
        label_C4PORT = new QLabel(page);
        label_C4PORT->setObjectName(QString::fromUtf8("label_C4PORT"));
        label_C4PORT->setGeometry(QRect(530, 450, 291, 41));
        label_C4PORT->setFont(font1);
        label_C4PORT->setFrameShape(QFrame::Box);
        label_C4PORT->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_C4Z = new QLabel(page);
        label_C4Z->setObjectName(QString::fromUtf8("label_C4Z"));
        label_C4Z->setGeometry(QRect(580, 330, 181, 41));
        label_C4Z->setFont(font1);
        label_C4Z->setAlignment(Qt::AlignCenter);
        label_C4IP = new QLabel(page);
        label_C4IP->setObjectName(QString::fromUtf8("label_C4IP"));
        label_C4IP->setGeometry(QRect(530, 390, 291, 41));
        label_C4IP->setFont(font1);
        label_C4IP->setFrameShape(QFrame::Box);
        label_C4IP->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pbn_C4 = new QPushButton(page);
        pbn_C4->setObjectName(QString::fromUtf8("pbn_C4"));
        pbn_C4->setGeometry(QRect(530, 510, 71, 41));
        pbn_C4->setFont(font2);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        comboBox = new QComboBox(page_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 30, 111, 31));
        comboBox->setFont(font);
        comboBox->setLayoutDirection(Qt::LeftToRight);
        comboBox->setAutoFillBackground(false);
        comboBox->setEditable(false);
        comboBox->setMaxCount(10);
        comboBox->setDuplicatesEnabled(false);
        comboBox->setFrame(true);
        stackedWidget_2 = new QStackedWidget(page_2);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(20, 70, 861, 491));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        pbn_Send = new QPushButton(page_3);
        pbn_Send->setObjectName(QString::fromUtf8("pbn_Send"));
        pbn_Send->setGeometry(QRect(720, 330, 111, 41));
        pbn_Send->setFont(font);
        pbn_Send->setCursor(QCursor(Qt::PointingHandCursor));
        pbn_Save = new QPushButton(page_3);
        pbn_Save->setObjectName(QString::fromUtf8("pbn_Save"));
        pbn_Save->setGeometry(QRect(590, 330, 111, 41));
        pbn_Save->setFont(font);
        pbn_Save->setCursor(QCursor(Qt::PointingHandCursor));
        groupBox_4 = new QGroupBox(page_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(240, 30, 191, 391));
        QFont font3;
        font3.setPointSize(10);
        groupBox_4->setFont(font3);
        groupBox_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox_4->setFlat(false);
        groupBox_4->setCheckable(false);
        groupBox_4->setChecked(false);
        widget_5 = new QWidget(groupBox_4);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(20, 30, 151, 341));
        radioButton_13 = new QRadioButton(widget_5);
        radioButton_13->setObjectName(QString::fromUtf8("radioButton_13"));
        radioButton_13->setGeometry(QRect(50, 10, 51, 41));
        radioButton_14 = new QRadioButton(widget_5);
        radioButton_14->setObjectName(QString::fromUtf8("radioButton_14"));
        radioButton_14->setGeometry(QRect(50, 70, 51, 41));
        radioButton_15 = new QRadioButton(widget_5);
        radioButton_15->setObjectName(QString::fromUtf8("radioButton_15"));
        radioButton_15->setGeometry(QRect(50, 130, 51, 41));
        radioButton_16 = new QRadioButton(widget_5);
        radioButton_16->setObjectName(QString::fromUtf8("radioButton_16"));
        radioButton_16->setGeometry(QRect(50, 200, 51, 41));
        radioButton_17 = new QRadioButton(widget_5);
        radioButton_17->setObjectName(QString::fromUtf8("radioButton_17"));
        radioButton_17->setGeometry(QRect(50, 270, 51, 41));
        pbn_no = new QPushButton(page_3);
        pbn_no->setObjectName(QString::fromUtf8("pbn_no"));
        pbn_no->setGeometry(QRect(460, 330, 111, 41));
        pbn_no->setFont(font);
        pbn_no->setCursor(QCursor(Qt::PointingHandCursor));
        groupBox_3 = new QGroupBox(page_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 30, 191, 391));
        groupBox_3->setFont(font3);
        groupBox_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox_3->setFlat(false);
        groupBox_3->setCheckable(false);
        groupBox_3->setChecked(false);
        widget = new QWidget(groupBox_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 30, 161, 351));
        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(50, 10, 51, 41));
        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(50, 70, 51, 41));
        radioButton_5 = new QRadioButton(widget);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(50, 130, 51, 41));
        radioButton_6 = new QRadioButton(widget);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setGeometry(QRect(50, 200, 51, 41));
        radioButton_7 = new QRadioButton(widget);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setGeometry(QRect(50, 270, 51, 41));
        textEdit_3 = new QTextEdit(page_3);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(460, 50, 371, 241));
        QFont font4;
        font4.setPointSize(14);
        textEdit_3->setFont(font4);
        textEdit_3->setReadOnly(true);
        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        groupBox_5 = new QGroupBox(page_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(50, 20, 761, 451));
        groupBox_5->setFont(font3);
        groupBox_5->setAlignment(Qt::AlignCenter);
        textEdit_2 = new QTextEdit(groupBox_5);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(20, 30, 721, 401));
        QFont font5;
        font5.setPointSize(15);
        textEdit_2->setFont(font5);
        textEdit_2->setFrameShape(QFrame::NoFrame);
        textEdit_2->setReadOnly(true);
        stackedWidget_2->addWidget(page_4);
        stackedWidget->addWidget(page_2);
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 300, 181, 321));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Consolas"));
        groupBox_2->setFont(font6);
        groupBox_2->setAlignment(Qt::AlignCenter);
        textEdit = new QTextEdit(groupBox_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 30, 161, 281));
        textEdit->setFont(font2);
        textEdit->setFrameShape(QFrame::NoFrame);
        textEdit->setReadOnly(true);
        pbn_clear = new QPushButton(groupBox_2);
        pbn_clear->setObjectName(QString::fromUtf8("pbn_clear"));
        pbn_clear->setGeometry(QRect(20, 270, 141, 31));
        pbn_clear->setFont(font);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 171, 251));
        groupBox->setFont(font6);
        groupBox->setAlignment(Qt::AlignCenter);
        pbn_Manage = new QPushButton(groupBox);
        pbn_Manage->setObjectName(QString::fromUtf8("pbn_Manage"));
        pbn_Manage->setGeometry(QRect(20, 40, 131, 41));
        pbn_Manage->setFont(font2);
        pbn_Manage->setCursor(QCursor(Qt::PointingHandCursor));
        pbn_Work = new QPushButton(groupBox);
        pbn_Work->setObjectName(QString::fromUtf8("pbn_Work"));
        pbn_Work->setGeometry(QRect(20, 110, 131, 41));
        pbn_Work->setFont(font2);
        pbn_Work->setCursor(QCursor(Qt::PointingHandCursor));
        pbn_Run = new QPushButton(groupBox);
        pbn_Run->setObjectName(QString::fromUtf8("pbn_Run"));
        pbn_Run->setGeometry(QRect(20, 180, 131, 41));
        pbn_Run->setFont(font2);
        pbn_Run->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label_C1->setText(QApplication::translate("Widget", "1", nullptr));
        label_C2->setText(QApplication::translate("Widget", "2", nullptr));
        label_C3->setText(QApplication::translate("Widget", "3", nullptr));
        label_C4->setText(QApplication::translate("Widget", "4", nullptr));
        label_C1Z->setText(QApplication::translate("Widget", "\347\246\273\347\272\277", nullptr));
        label_C1IP->setText(QApplication::translate("Widget", "IP:NULL", nullptr));
        label_C1PORT->setText(QApplication::translate("Widget", "\347\253\257\345\217\243:NULL", nullptr));
        pbn_C1->setText(QApplication::translate("Widget", "\346\226\255\345\274\200", nullptr));
        pbn_C2->setText(QApplication::translate("Widget", "\346\226\255\345\274\200", nullptr));
        label_C2IP->setText(QApplication::translate("Widget", "IP:NULL", nullptr));
        label_C2PORT->setText(QApplication::translate("Widget", "\347\253\257\345\217\243:NULL", nullptr));
        label_C2Z->setText(QApplication::translate("Widget", "\347\246\273\347\272\277", nullptr));
        pbn_C3->setText(QApplication::translate("Widget", "\346\226\255\345\274\200", nullptr));
        label_C3IP->setText(QApplication::translate("Widget", "IP:NULL", nullptr));
        label_C3PORT->setText(QApplication::translate("Widget", "\347\253\257\345\217\243:NULL", nullptr));
        label_C3Z->setText(QApplication::translate("Widget", "\347\246\273\347\272\277", nullptr));
        label_C4PORT->setText(QApplication::translate("Widget", "\347\253\257\345\217\243:NULL", nullptr));
        label_C4Z->setText(QApplication::translate("Widget", "\347\246\273\347\272\277", nullptr));
        label_C4IP->setText(QApplication::translate("Widget", "IP:NULL", nullptr));
        pbn_C4->setText(QApplication::translate("Widget", "\346\226\255\345\274\200", nullptr));
        comboBox->setItemText(0, QApplication::translate("Widget", "1", nullptr));
        comboBox->setItemText(1, QApplication::translate("Widget", "\350\257\255\351\237\263", nullptr));

        pbn_Send->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        pbn_Save->setText(QApplication::translate("Widget", "\344\277\235\345\255\230", nullptr));
        groupBox_4->setTitle(QApplication::translate("Widget", "\347\233\256\347\232\204", nullptr));
        radioButton_13->setText(QApplication::translate("Widget", "1", nullptr));
        radioButton_14->setText(QApplication::translate("Widget", "2", nullptr));
        radioButton_15->setText(QApplication::translate("Widget", "3", nullptr));
        radioButton_16->setText(QApplication::translate("Widget", "4", nullptr));
        radioButton_17->setText(QApplication::translate("Widget", "5", nullptr));
        pbn_no->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", nullptr));
        groupBox_3->setTitle(QApplication::translate("Widget", "\346\272\220", nullptr));
        radioButton->setText(QApplication::translate("Widget", "1", nullptr));
        radioButton_2->setText(QApplication::translate("Widget", "2", nullptr));
        radioButton_5->setText(QApplication::translate("Widget", "3", nullptr));
        radioButton_6->setText(QApplication::translate("Widget", "4", nullptr));
        radioButton_7->setText(QApplication::translate("Widget", "5", nullptr));
        groupBox_5->setTitle(QApplication::translate("Widget", "\350\257\255\351\237\263\350\275\254\345\217\221", nullptr));
        groupBox_2->setTitle(QApplication::translate("Widget", "\347\212\266\346\200\201", nullptr));
        pbn_clear->setText(QApplication::translate("Widget", "clear", nullptr));
        groupBox->setTitle(QApplication::translate("Widget", "\346\216\247\345\210\266\351\235\242\346\235\277", nullptr));
        pbn_Manage->setText(QApplication::translate("Widget", "\345\256\242\346\210\267\347\253\257\347\256\241\347\220\206", nullptr));
        pbn_Work->setText(QApplication::translate("Widget", "\345\267\245\344\275\234", nullptr));
        pbn_Run->setText(QApplication::translate("Widget", "\345\274\200\345\220\257\347\253\257\345\217\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
