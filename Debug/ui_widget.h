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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
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
    QStackedWidget *stackedWidgetK;
    QWidget *page_K1;
    QWidget *widget_K1;
    QLabel *label_conditionB;
    QPushButton *pbn_cut;
    QLabel *label_IPB;
    QLabel *label_conditionA;
    QLabel *label_IPA;
    QLabel *label_timeA;
    QLabel *label_timeB;
    QWidget *page_K2;
    QWidget *widget_K2;
    QLabel *label_conditionB2;
    QPushButton *pbn_cut2;
    QLabel *label_IPB2;
    QLabel *label_conditionA2;
    QLabel *label_IPA2;
    QLabel *label_timeA2;
    QLabel *label_timeB2;
    QWidget *page_K3;
    QWidget *widget_K2_2;
    QLabel *label_conditionB3;
    QPushButton *pbn_cut3;
    QLabel *label_IPB3;
    QLabel *label_conditionA3;
    QLabel *label_IPA3;
    QLabel *label_timeA3;
    QLabel *label_timeB3;
    QWidget *page_K4;
    QWidget *widget_K2_4;
    QLabel *label_conditionB4;
    QPushButton *pbn_cut4;
    QLabel *label_IPB4;
    QLabel *label_conditionA4;
    QLabel *label_IPA4;
    QLabel *label_timeA4;
    QLabel *label_timeB4;
    QWidget *widget_2;
    QPushButton *btnMainWindow;
    QComboBox *comboBox_Clients;
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
    QPushButton *pbn_video;
    QWidget *widget_title;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lab_Ico;
    QLabel *lab_Title;
    QWidget *widget_menu;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnMenu_Min;
    QPushButton *btnMenu_Close;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1150, 680);
        Widget->setMaximumSize(QSize(1150, 680));
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(220, 60, 921, 601));
        QFont font;
        font.setPointSize(10);
        stackedWidget->setFont(font);
        stackedWidget->setFrameShape(QFrame::StyledPanel);
        stackedWidget->setFrameShadow(QFrame::Plain);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidgetK = new QStackedWidget(page);
        stackedWidgetK->setObjectName(QString::fromUtf8("stackedWidgetK"));
        stackedWidgetK->setGeometry(QRect(10, 100, 901, 491));
        page_K1 = new QWidget();
        page_K1->setObjectName(QString::fromUtf8("page_K1"));
        widget_K1 = new QWidget(page_K1);
        widget_K1->setObjectName(QString::fromUtf8("widget_K1"));
        widget_K1->setGeometry(QRect(70, 50, 751, 311));
        label_conditionB = new QLabel(widget_K1);
        label_conditionB->setObjectName(QString::fromUtf8("label_conditionB"));
        label_conditionB->setGeometry(QRect(270, 30, 181, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(15);
        label_conditionB->setFont(font1);
        label_conditionB->setAlignment(Qt::AlignCenter);
        pbn_cut = new QPushButton(widget_K1);
        pbn_cut->setObjectName(QString::fromUtf8("pbn_cut"));
        pbn_cut->setGeometry(QRect(470, 210, 91, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Consolas"));
        font2.setPointSize(10);
        pbn_cut->setFont(font2);
        label_IPB = new QLabel(widget_K1);
        label_IPB->setObjectName(QString::fromUtf8("label_IPB"));
        label_IPB->setGeometry(QRect(270, 90, 291, 41));
        label_IPB->setFont(font1);
        label_IPB->setFrameShape(QFrame::NoFrame);
        label_IPB->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_conditionA = new QLabel(widget_K1);
        label_conditionA->setObjectName(QString::fromUtf8("label_conditionA"));
        label_conditionA->setGeometry(QRect(140, 30, 91, 41));
        label_conditionA->setFont(font1);
        label_conditionA->setAlignment(Qt::AlignCenter);
        label_IPA = new QLabel(widget_K1);
        label_IPA->setObjectName(QString::fromUtf8("label_IPA"));
        label_IPA->setGeometry(QRect(140, 90, 91, 41));
        label_IPA->setFont(font1);
        label_IPA->setAlignment(Qt::AlignCenter);
        label_timeA = new QLabel(widget_K1);
        label_timeA->setObjectName(QString::fromUtf8("label_timeA"));
        label_timeA->setGeometry(QRect(140, 150, 91, 41));
        label_timeA->setFont(font1);
        label_timeA->setAlignment(Qt::AlignCenter);
        label_timeB = new QLabel(widget_K1);
        label_timeB->setObjectName(QString::fromUtf8("label_timeB"));
        label_timeB->setGeometry(QRect(270, 150, 291, 41));
        label_timeB->setFont(font1);
        label_timeB->setFrameShape(QFrame::NoFrame);
        label_timeB->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        stackedWidgetK->addWidget(page_K1);
        page_K2 = new QWidget();
        page_K2->setObjectName(QString::fromUtf8("page_K2"));
        widget_K2 = new QWidget(page_K2);
        widget_K2->setObjectName(QString::fromUtf8("widget_K2"));
        widget_K2->setGeometry(QRect(70, 50, 751, 311));
        label_conditionB2 = new QLabel(widget_K2);
        label_conditionB2->setObjectName(QString::fromUtf8("label_conditionB2"));
        label_conditionB2->setGeometry(QRect(270, 30, 181, 41));
        label_conditionB2->setFont(font1);
        label_conditionB2->setAlignment(Qt::AlignCenter);
        pbn_cut2 = new QPushButton(widget_K2);
        pbn_cut2->setObjectName(QString::fromUtf8("pbn_cut2"));
        pbn_cut2->setGeometry(QRect(470, 210, 91, 41));
        pbn_cut2->setFont(font2);
        label_IPB2 = new QLabel(widget_K2);
        label_IPB2->setObjectName(QString::fromUtf8("label_IPB2"));
        label_IPB2->setGeometry(QRect(270, 90, 291, 41));
        label_IPB2->setFont(font1);
        label_IPB2->setFrameShape(QFrame::NoFrame);
        label_IPB2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_conditionA2 = new QLabel(widget_K2);
        label_conditionA2->setObjectName(QString::fromUtf8("label_conditionA2"));
        label_conditionA2->setGeometry(QRect(140, 30, 91, 41));
        label_conditionA2->setFont(font1);
        label_conditionA2->setAlignment(Qt::AlignCenter);
        label_IPA2 = new QLabel(widget_K2);
        label_IPA2->setObjectName(QString::fromUtf8("label_IPA2"));
        label_IPA2->setGeometry(QRect(140, 90, 91, 41));
        label_IPA2->setFont(font1);
        label_IPA2->setAlignment(Qt::AlignCenter);
        label_timeA2 = new QLabel(widget_K2);
        label_timeA2->setObjectName(QString::fromUtf8("label_timeA2"));
        label_timeA2->setGeometry(QRect(140, 150, 91, 41));
        label_timeA2->setFont(font1);
        label_timeA2->setAlignment(Qt::AlignCenter);
        label_timeB2 = new QLabel(widget_K2);
        label_timeB2->setObjectName(QString::fromUtf8("label_timeB2"));
        label_timeB2->setGeometry(QRect(270, 150, 291, 41));
        label_timeB2->setFont(font1);
        label_timeB2->setFrameShape(QFrame::NoFrame);
        label_timeB2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        stackedWidgetK->addWidget(page_K2);
        page_K3 = new QWidget();
        page_K3->setObjectName(QString::fromUtf8("page_K3"));
        widget_K2_2 = new QWidget(page_K3);
        widget_K2_2->setObjectName(QString::fromUtf8("widget_K2_2"));
        widget_K2_2->setGeometry(QRect(70, 50, 751, 311));
        label_conditionB3 = new QLabel(widget_K2_2);
        label_conditionB3->setObjectName(QString::fromUtf8("label_conditionB3"));
        label_conditionB3->setGeometry(QRect(270, 30, 181, 41));
        label_conditionB3->setFont(font1);
        label_conditionB3->setAlignment(Qt::AlignCenter);
        pbn_cut3 = new QPushButton(widget_K2_2);
        pbn_cut3->setObjectName(QString::fromUtf8("pbn_cut3"));
        pbn_cut3->setGeometry(QRect(470, 210, 91, 41));
        pbn_cut3->setFont(font2);
        label_IPB3 = new QLabel(widget_K2_2);
        label_IPB3->setObjectName(QString::fromUtf8("label_IPB3"));
        label_IPB3->setGeometry(QRect(270, 90, 291, 41));
        label_IPB3->setFont(font1);
        label_IPB3->setFrameShape(QFrame::NoFrame);
        label_IPB3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_conditionA3 = new QLabel(widget_K2_2);
        label_conditionA3->setObjectName(QString::fromUtf8("label_conditionA3"));
        label_conditionA3->setGeometry(QRect(140, 30, 91, 41));
        label_conditionA3->setFont(font1);
        label_conditionA3->setAlignment(Qt::AlignCenter);
        label_IPA3 = new QLabel(widget_K2_2);
        label_IPA3->setObjectName(QString::fromUtf8("label_IPA3"));
        label_IPA3->setGeometry(QRect(140, 90, 91, 41));
        label_IPA3->setFont(font1);
        label_IPA3->setAlignment(Qt::AlignCenter);
        label_timeA3 = new QLabel(widget_K2_2);
        label_timeA3->setObjectName(QString::fromUtf8("label_timeA3"));
        label_timeA3->setGeometry(QRect(140, 150, 91, 41));
        label_timeA3->setFont(font1);
        label_timeA3->setAlignment(Qt::AlignCenter);
        label_timeB3 = new QLabel(widget_K2_2);
        label_timeB3->setObjectName(QString::fromUtf8("label_timeB3"));
        label_timeB3->setGeometry(QRect(270, 150, 291, 41));
        label_timeB3->setFont(font1);
        label_timeB3->setFrameShape(QFrame::NoFrame);
        label_timeB3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        stackedWidgetK->addWidget(page_K3);
        page_K4 = new QWidget();
        page_K4->setObjectName(QString::fromUtf8("page_K4"));
        widget_K2_4 = new QWidget(page_K4);
        widget_K2_4->setObjectName(QString::fromUtf8("widget_K2_4"));
        widget_K2_4->setGeometry(QRect(70, 50, 751, 311));
        label_conditionB4 = new QLabel(widget_K2_4);
        label_conditionB4->setObjectName(QString::fromUtf8("label_conditionB4"));
        label_conditionB4->setGeometry(QRect(270, 30, 181, 41));
        label_conditionB4->setFont(font1);
        label_conditionB4->setAlignment(Qt::AlignCenter);
        pbn_cut4 = new QPushButton(widget_K2_4);
        pbn_cut4->setObjectName(QString::fromUtf8("pbn_cut4"));
        pbn_cut4->setGeometry(QRect(470, 210, 91, 41));
        pbn_cut4->setFont(font2);
        label_IPB4 = new QLabel(widget_K2_4);
        label_IPB4->setObjectName(QString::fromUtf8("label_IPB4"));
        label_IPB4->setGeometry(QRect(270, 90, 291, 41));
        label_IPB4->setFont(font1);
        label_IPB4->setFrameShape(QFrame::NoFrame);
        label_IPB4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_conditionA4 = new QLabel(widget_K2_4);
        label_conditionA4->setObjectName(QString::fromUtf8("label_conditionA4"));
        label_conditionA4->setGeometry(QRect(140, 30, 91, 41));
        label_conditionA4->setFont(font1);
        label_conditionA4->setAlignment(Qt::AlignCenter);
        label_IPA4 = new QLabel(widget_K2_4);
        label_IPA4->setObjectName(QString::fromUtf8("label_IPA4"));
        label_IPA4->setGeometry(QRect(140, 90, 91, 41));
        label_IPA4->setFont(font1);
        label_IPA4->setAlignment(Qt::AlignCenter);
        label_timeA4 = new QLabel(widget_K2_4);
        label_timeA4->setObjectName(QString::fromUtf8("label_timeA4"));
        label_timeA4->setGeometry(QRect(140, 150, 91, 41));
        label_timeA4->setFont(font1);
        label_timeA4->setAlignment(Qt::AlignCenter);
        label_timeB4 = new QLabel(widget_K2_4);
        label_timeB4->setObjectName(QString::fromUtf8("label_timeB4"));
        label_timeB4->setGeometry(QRect(270, 150, 291, 41));
        label_timeB4->setFont(font1);
        label_timeB4->setFrameShape(QFrame::NoFrame);
        label_timeB4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        stackedWidgetK->addWidget(page_K4);
        widget_2 = new QWidget(page);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(10, 10, 901, 61));
        btnMainWindow = new QPushButton(widget_2);
        btnMainWindow->setObjectName(QString::fromUtf8("btnMainWindow"));
        btnMainWindow->setGeometry(QRect(790, 10, 101, 41));
        btnMainWindow->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox_Clients = new QComboBox(widget_2);
        comboBox_Clients->addItem(QString());
        comboBox_Clients->addItem(QString());
        comboBox_Clients->addItem(QString());
        comboBox_Clients->addItem(QString());
        comboBox_Clients->setObjectName(QString::fromUtf8("comboBox_Clients"));
        comboBox_Clients->setGeometry(QRect(10, 10, 771, 41));
        QFont font3;
        font3.setPointSize(12);
        comboBox_Clients->setFont(font3);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        comboBox = new QComboBox(page_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 30, 111, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Consolas"));
        font4.setPointSize(12);
        comboBox->setFont(font4);
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
        pbn_Send->setFont(font4);
        pbn_Send->setCursor(QCursor(Qt::PointingHandCursor));
        pbn_Save = new QPushButton(page_3);
        pbn_Save->setObjectName(QString::fromUtf8("pbn_Save"));
        pbn_Save->setGeometry(QRect(590, 330, 111, 41));
        pbn_Save->setFont(font4);
        pbn_Save->setCursor(QCursor(Qt::PointingHandCursor));
        groupBox_4 = new QGroupBox(page_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(240, 30, 191, 391));
        groupBox_4->setFont(font);
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
        pbn_no->setFont(font4);
        pbn_no->setCursor(QCursor(Qt::PointingHandCursor));
        groupBox_3 = new QGroupBox(page_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 30, 191, 391));
        groupBox_3->setFont(font);
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
        QFont font5;
        font5.setPointSize(14);
        textEdit_3->setFont(font5);
        textEdit_3->setReadOnly(true);
        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        groupBox_5 = new QGroupBox(page_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(50, 20, 761, 451));
        groupBox_5->setFont(font);
        groupBox_5->setAlignment(Qt::AlignCenter);
        textEdit_2 = new QTextEdit(groupBox_5);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(20, 30, 721, 401));
        QFont font6;
        font6.setPointSize(15);
        textEdit_2->setFont(font6);
        textEdit_2->setFrameShape(QFrame::NoFrame);
        textEdit_2->setReadOnly(true);
        stackedWidget_2->addWidget(page_4);
        stackedWidget->addWidget(page_2);
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 340, 181, 321));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Consolas"));
        groupBox_2->setFont(font7);
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
        pbn_clear->setFont(font4);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 70, 171, 251));
        groupBox->setFont(font7);
        groupBox->setAlignment(Qt::AlignCenter);
        pbn_Manage = new QPushButton(groupBox);
        pbn_Manage->setObjectName(QString::fromUtf8("pbn_Manage"));
        pbn_Manage->setGeometry(QRect(20, 40, 131, 41));
        pbn_Manage->setFont(font2);
        pbn_Manage->setCursor(QCursor(Qt::PointingHandCursor));
        pbn_Work = new QPushButton(groupBox);
        pbn_Work->setObjectName(QString::fromUtf8("pbn_Work"));
        pbn_Work->setGeometry(QRect(20, 90, 131, 41));
        pbn_Work->setFont(font2);
        pbn_Work->setCursor(QCursor(Qt::PointingHandCursor));
        pbn_Run = new QPushButton(groupBox);
        pbn_Run->setObjectName(QString::fromUtf8("pbn_Run"));
        pbn_Run->setGeometry(QRect(20, 140, 131, 41));
        pbn_Run->setFont(font2);
        pbn_Run->setCursor(QCursor(Qt::PointingHandCursor));
        pbn_video = new QPushButton(groupBox);
        pbn_video->setObjectName(QString::fromUtf8("pbn_video"));
        pbn_video->setGeometry(QRect(20, 190, 131, 41));
        pbn_video->setFont(font2);
        pbn_video->setCursor(QCursor(Qt::PointingHandCursor));
        widget_title = new QWidget(Widget);
        widget_title->setObjectName(QString::fromUtf8("widget_title"));
        widget_title->setGeometry(QRect(10, 10, 1131, 31));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_title->sizePolicy().hasHeightForWidth());
        widget_title->setSizePolicy(sizePolicy);
        widget_title->setMinimumSize(QSize(100, 28));
        horizontalLayout_2 = new QHBoxLayout(widget_title);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lab_Ico = new QLabel(widget_title);
        lab_Ico->setObjectName(QString::fromUtf8("lab_Ico"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lab_Ico->sizePolicy().hasHeightForWidth());
        lab_Ico->setSizePolicy(sizePolicy1);
        lab_Ico->setMinimumSize(QSize(30, 0));
        lab_Ico->setFont(font6);
        lab_Ico->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lab_Ico);

        lab_Title = new QLabel(widget_title);
        lab_Title->setObjectName(QString::fromUtf8("lab_Title"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lab_Title->sizePolicy().hasHeightForWidth());
        lab_Title->setSizePolicy(sizePolicy2);
        lab_Title->setFont(font5);
        lab_Title->setStyleSheet(QString::fromUtf8(""));
        lab_Title->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_2->addWidget(lab_Title);

        widget_menu = new QWidget(widget_title);
        widget_menu->setObjectName(QString::fromUtf8("widget_menu"));
        sizePolicy1.setHeightForWidth(widget_menu->sizePolicy().hasHeightForWidth());
        widget_menu->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(widget_menu);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnMenu_Min = new QPushButton(widget_menu);
        btnMenu_Min->setObjectName(QString::fromUtf8("btnMenu_Min"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnMenu_Min->sizePolicy().hasHeightForWidth());
        btnMenu_Min->setSizePolicy(sizePolicy3);
        btnMenu_Min->setMinimumSize(QSize(40, 0));
        btnMenu_Min->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Min->setFocusPolicy(Qt::NoFocus);
        btnMenu_Min->setFlat(true);

        horizontalLayout->addWidget(btnMenu_Min);

        btnMenu_Close = new QPushButton(widget_menu);
        btnMenu_Close->setObjectName(QString::fromUtf8("btnMenu_Close"));
        sizePolicy3.setHeightForWidth(btnMenu_Close->sizePolicy().hasHeightForWidth());
        btnMenu_Close->setSizePolicy(sizePolicy3);
        btnMenu_Close->setMinimumSize(QSize(40, 0));
        btnMenu_Close->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Close->setFocusPolicy(Qt::NoFocus);
        btnMenu_Close->setFlat(true);

        horizontalLayout->addWidget(btnMenu_Close);


        horizontalLayout_2->addWidget(widget_menu);


        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(0);
        stackedWidgetK->setCurrentIndex(3);
        stackedWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label_conditionB->setText(QApplication::translate("Widget", "\347\246\273\347\272\277", nullptr));
        pbn_cut->setText(QApplication::translate("Widget", "\345\210\207\346\226\255\350\277\236\346\216\245", nullptr));
        label_IPB->setText(QString());
        label_conditionA->setText(QApplication::translate("Widget", "\347\212\266\346\200\201:", nullptr));
        label_IPA->setText(QApplication::translate("Widget", "\345\234\260\345\235\200:", nullptr));
        label_timeA->setText(QApplication::translate("Widget", "\346\227\266\351\227\264:", nullptr));
        label_timeB->setText(QString());
        label_conditionB2->setText(QApplication::translate("Widget", "\347\246\273\347\272\277", nullptr));
        pbn_cut2->setText(QApplication::translate("Widget", "\345\210\207\346\226\255\350\277\236\346\216\245", nullptr));
        label_IPB2->setText(QString());
        label_conditionA2->setText(QApplication::translate("Widget", "\347\212\266\346\200\201:", nullptr));
        label_IPA2->setText(QApplication::translate("Widget", "\345\234\260\345\235\200:", nullptr));
        label_timeA2->setText(QApplication::translate("Widget", "\346\227\266\351\227\264:", nullptr));
        label_timeB2->setText(QString());
        label_conditionB3->setText(QApplication::translate("Widget", "\347\246\273\347\272\277", nullptr));
        pbn_cut3->setText(QApplication::translate("Widget", "\345\210\207\346\226\255\350\277\236\346\216\245", nullptr));
        label_IPB3->setText(QString());
        label_conditionA3->setText(QApplication::translate("Widget", "\347\212\266\346\200\201:", nullptr));
        label_IPA3->setText(QApplication::translate("Widget", "\345\234\260\345\235\200:", nullptr));
        label_timeA3->setText(QApplication::translate("Widget", "\346\227\266\351\227\264:", nullptr));
        label_timeB3->setText(QString());
        label_conditionB4->setText(QApplication::translate("Widget", "\347\246\273\347\272\277", nullptr));
        pbn_cut4->setText(QApplication::translate("Widget", "\345\210\207\346\226\255\350\277\236\346\216\245", nullptr));
        label_IPB4->setText(QString());
        label_conditionA4->setText(QApplication::translate("Widget", "\347\212\266\346\200\201:", nullptr));
        label_IPA4->setText(QApplication::translate("Widget", "\345\234\260\345\235\200:", nullptr));
        label_timeA4->setText(QApplication::translate("Widget", "\346\227\266\351\227\264:", nullptr));
        label_timeB4->setText(QString());
        btnMainWindow->setText(QApplication::translate("Widget", " \345\210\267\346\226\260", nullptr));
        comboBox_Clients->setItemText(0, QApplication::translate("Widget", "\345\256\242\346\210\267\347\253\2571", nullptr));
        comboBox_Clients->setItemText(1, QApplication::translate("Widget", "\345\256\242\346\210\267\347\253\2572", nullptr));
        comboBox_Clients->setItemText(2, QApplication::translate("Widget", "\345\256\242\346\210\267\347\253\2573", nullptr));
        comboBox_Clients->setItemText(3, QApplication::translate("Widget", "\345\256\242\346\210\267\347\253\2574", nullptr));

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
        pbn_video->setText(QApplication::translate("Widget", "\350\247\206\351\242\221", nullptr));
        lab_Ico->setText(QString());
        lab_Title->setText(QApplication::translate("Widget", " Spresence Car", nullptr));
#ifndef QT_NO_TOOLTIP
        btnMenu_Min->setToolTip(QApplication::translate("Widget", "\346\234\200\345\260\217\345\214\226", nullptr));
#endif // QT_NO_TOOLTIP
        btnMenu_Min->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnMenu_Close->setToolTip(QApplication::translate("Widget", "\345\205\263\351\227\255", nullptr));
#endif // QT_NO_TOOLTIP
        btnMenu_Close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
