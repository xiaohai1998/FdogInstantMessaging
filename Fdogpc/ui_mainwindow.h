/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *icon_tool;
    QSpacerItem *horizontalSpacer;
    QToolButton *skin_tool;
    QToolButton *min_tool;
    QToolButton *close_tool;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_2;
    QLabel *signature_label;
    QToolButton *toolButton_2;
    QLabel *username_label;
    QPushButton *pushButton;
    QToolButton *toolButton_5;
    QToolButton *toolButton_6;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton;
    QLineEdit *lineEdit;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout_4;
    QListWidget *listWidget;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QGridLayout *gridLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *tab_5;
    QWidget *tab_3;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QToolButton *toolButton_4;
    QToolButton *toolButton_3;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(325, 659);
        QIcon icon;
        icon.addFile(QStringLiteral(":/lib/fdogicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QStringLiteral("*{font-family:Microsoft YaHei;}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(15, 15, 15, 15);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(4, 8, 6, 8);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(301, 601));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei"));
        font.setPointSize(11);
        widget->setFont(font);
        widget->setStyleSheet(QLatin1String("#widget{\n"
"background-color: qlineargradient(spread:pad, x1:0.517, y1:0.0227273, x2:0.511364, y2:1, stop:0 rgba(8, 97, 213, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(15, 15, 15, 15);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(8);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(3, 5, 3, 5);
        horizontalSpacer_4 = new QSpacerItem(4, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        icon_tool = new QToolButton(widget);
        icon_tool->setObjectName(QStringLiteral("icon_tool"));
        icon_tool->setMinimumSize(QSize(20, 20));
        icon_tool->setMaximumSize(QSize(20, 20));
        icon_tool->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/lib/fdog.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon_tool->setIcon(icon1);
        icon_tool->setIconSize(QSize(33, 33));
        icon_tool->setCheckable(false);
        icon_tool->setChecked(false);
        icon_tool->setAutoRaise(true);

        horizontalLayout->addWidget(icon_tool);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        skin_tool = new QToolButton(widget);
        skin_tool->setObjectName(QStringLiteral("skin_tool"));
        skin_tool->setMinimumSize(QSize(25, 25));
        skin_tool->setMaximumSize(QSize(25, 25));
        skin_tool->setStyleSheet(QStringLiteral(""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/lib/skin.png"), QSize(), QIcon::Normal, QIcon::Off);
        skin_tool->setIcon(icon2);
        skin_tool->setIconSize(QSize(20, 20));
        skin_tool->setAutoRaise(true);

        horizontalLayout->addWidget(skin_tool);

        min_tool = new QToolButton(widget);
        min_tool->setObjectName(QStringLiteral("min_tool"));
        min_tool->setMinimumSize(QSize(25, 25));
        min_tool->setMaximumSize(QSize(25, 25));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/lib/zuixiaohua.png"), QSize(), QIcon::Normal, QIcon::Off);
        min_tool->setIcon(icon3);
        min_tool->setIconSize(QSize(20, 20));
        min_tool->setAutoRaise(true);

        horizontalLayout->addWidget(min_tool);

        close_tool = new QToolButton(widget);
        close_tool->setObjectName(QStringLiteral("close_tool"));
        close_tool->setMinimumSize(QSize(25, 25));
        close_tool->setMaximumSize(QSize(25, 25));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/lib/guanbi.png"), QSize(), QIcon::Normal, QIcon::Off);
        close_tool->setIcon(icon4);
        close_tool->setIconSize(QSize(20, 20));
        close_tool->setAutoRaise(true);

        horizontalLayout->addWidget(close_tool);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(250, 71));
        widget_2->setMaximumSize(QSize(301, 16777215));
        signature_label = new QLabel(widget_2);
        signature_label->setObjectName(QStringLiteral("signature_label"));
        signature_label->setGeometry(QRect(80, 40, 161, 18));
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft YaHei"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setWeight(50);
        signature_label->setFont(font1);
        signature_label->setStyleSheet(QLatin1String(":!hover{\n"
"color: rgb(255, 255, 255);\n"
"}\n"
":hover{\n"
"border-style:solid;\n"
"border-width:1px;\n"
"border-color: rgb(108, 108, 108);\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        toolButton_2 = new QToolButton(widget_2);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setGeometry(QRect(49, 47, 18, 18));
        toolButton_2->setMinimumSize(QSize(18, 18));
        toolButton_2->setMaximumSize(QSize(15, 15));
        QFont font2;
        font2.setFamily(QStringLiteral("Microsoft YaHei"));
        font2.setPointSize(3);
        toolButton_2->setFont(font2);
        toolButton_2->setStyleSheet(QLatin1String("#toolButton_2{\n"
"border-style:solid;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"}\n"
"\n"
"::menu-indicator\n"
"{\n"
"	image: none;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/lib/zaixian.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon5);
        toolButton_2->setPopupMode(QToolButton::InstantPopup);
        toolButton_2->setAutoRaise(true);
        username_label = new QLabel(widget_2);
        username_label->setObjectName(QStringLiteral("username_label"));
        username_label->setGeometry(QRect(80, 17, 71, 20));
        QFont font3;
        font3.setFamily(QStringLiteral("Microsoft YaHei"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        username_label->setFont(font3);
        username_label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(15, 10, 52, 52));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QLatin1String("#pushButton{\n"
"border-radius:26px;\n"
"border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgba(255, 255, 255,20);\n"
"}\n"
"#pushButton::hover{\n"
"border-radius:26px;\n"
"border-style:solid;\n"
"border-width:4px;\n"
"border-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        pushButton->setIconSize(QSize(50, 50));
        toolButton_5 = new QToolButton(widget_2);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        toolButton_5->setGeometry(QRect(160, 20, 39, 17));
        QFont font4;
        font4.setFamily(QStringLiteral("Microsoft YaHei"));
        font4.setBold(true);
        font4.setWeight(75);
        toolButton_5->setFont(font4);
        toolButton_5->setStyleSheet(QStringLiteral(""));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/lib/dengji.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_5->setIcon(icon6);
        toolButton_5->setIconSize(QSize(60, 20));
        toolButton_5->setAutoRaise(true);
        toolButton_6 = new QToolButton(widget_2);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        toolButton_6->setGeometry(QRect(203, 20, 40, 17));
        toolButton_6->setMinimumSize(QSize(40, 15));
        toolButton_6->setMaximumSize(QSize(40, 17));
        toolButton_6->setLayoutDirection(Qt::LeftToRight);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/lib/svip.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_6->setIcon(icon7);
        toolButton_6->setIconSize(QSize(60, 20));
        toolButton_6->setAutoRaise(true);
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(169, 20, 31, 16));
        QFont font5;
        font5.setFamily(QStringLiteral("Microsoft YaHei"));
        font5.setPointSize(7);
        font5.setBold(true);
        font5.setWeight(75);
        label->setFont(font5);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 47, 11);"));
        label->setAlignment(Qt::AlignCenter);
        signature_label->raise();
        username_label->raise();
        pushButton->raise();
        toolButton_5->raise();
        toolButton_6->raise();
        toolButton_2->raise();
        label->raise();

        verticalLayout_2->addWidget(widget_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        toolButton = new QToolButton(widget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setMinimumSize(QSize(27, 26));
        toolButton->setMaximumSize(QSize(27, 31));
        toolButton->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255,50);"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/lib/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon8);
        toolButton->setIconSize(QSize(30, 30));
        toolButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButton);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(272, 26));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font6.setBold(false);
        font6.setItalic(false);
        font6.setWeight(50);
        lineEdit->setFont(font6);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,50);\n"
"border-color:rgba(0,0,0,255);\n"
"color: rgba(9, 0, 3,0);\n"
"border-style:none;\n"
"border-width:1px;\n"
"border-radius:0px;\n"
"font:15px \"\351\273\221\344\275\223\";"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        tabWidget = new QTabWidget(widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(318, 384));
        tabWidget->setMaximumSize(QSize(16777215, 16777215));
        QFont font7;
        font7.setFamily(QStringLiteral("Microsoft YaHei"));
        font7.setPointSize(9);
        tabWidget->setFont(font7);
        tabWidget->setStyleSheet(QString::fromUtf8("QWidget::tab{\n"
"background-color: rgb(255, 255, 255);\n"
"border-style:solid;\n"
"border-width:2px;\n"
"font:18px \"\345\256\213\344\275\223\";\n"
"border-radius:2px;\n"
"height:38px;\n"
"width:102px;\n"
"color: rgb(100, 100, 100);\n"
"	border-color: rgb(255, 255, 255);\n"
"border-bottom-color: rgba(255, 255, 255, 0);\n"
"}\n"
"QWidget::tab:selected{\n"
"border-bottom-color: rgb(127, 127, 127);\n"
"border-radius:2px;\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        QFont font8;
        font8.setFamily(QStringLiteral("Microsoft YaHei"));
        font8.setPointSize(10);
        tab->setFont(font8);
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setSpacing(15);
        verticalLayout_3->setContentsMargins(15, 15, 15, 15);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        scrollArea_3 = new QScrollArea(tab);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 310, 412));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout_4->setSpacing(15);
        gridLayout_4->setContentsMargins(15, 15, 15, 15);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(scrollAreaWidgetContents_3);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setStyleSheet(QStringLiteral(""));

        gridLayout_4->addWidget(listWidget, 0, 0, 1, 1);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_3->addWidget(scrollArea_3);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setSpacing(15);
        gridLayout_2->setContentsMargins(15, 15, 15, 15);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget_2 = new QTabWidget(tab_2);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setStyleSheet(QString::fromUtf8("::tab{\n"
"background-color: rgb(255, 255, 255);\n"
"border-style:solid;\n"
"border-width:0px;\n"
"font:14px \"\345\256\213\344\275\223\";\n"
"border-radius:2px;\n"
"height:25px;\n"
"width:70px;\n"
"color: rgb(100, 100, 100);\n"
"border-color: rgb(255, 255, 255);\n"
"}\n"
"::tab:selected{\n"
"border-radius:2px;\n"
"}\n"
":pane{\n"
"}"));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout_3 = new QGridLayout(tab_4);
        gridLayout_3->setSpacing(15);
        gridLayout_3->setContentsMargins(15, 15, 15, 15);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(tab_4);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setStyleSheet(QLatin1String("QScrollBar:vertical{\n"
"background-color:rgba(0,0,0,0);\n"
"border-color:rgba(0,0,6,0);\n"
"border-style:solid;\n"
"border-width:0px;\n"
"width:10px;\n"
"padding-top:0px;\n"
"padding-bottom:0px;\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:vertical{\n"
"border-style:solid;\n"
"border-width:2px;\n"
"border-radius:4px;\n"
"background-color:rgba(145,145,145,255);\n"
"border-color:rgba(0,0,0,0);\n"
"min-height:44px;}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical,QScrollBar::sub-page:vertical{background:rgba(0,0,0,0);}\n"
"\n"
"\n"
"QScrollBar::sub-page:vertical,QScrollBar::sub-page:vertical{background:rgba(0,0,0,0);}"));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 310, 387));
        scrollAreaWidgetContents->setCursor(QCursor(Qt::ArrowCursor));
        scrollAreaWidgetContents->setStyleSheet(QLatin1String("#scrollAreaWidgetContents{\n"
"background-color: rgb(203, 203, 203);\n"
"}"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_3->addWidget(scrollArea, 0, 0, 1, 1);

        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget_2->addTab(tab_5, QString());

        gridLayout_2->addWidget(tabWidget_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        scrollArea_2 = new QScrollArea(tab_3);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(0, 0, 311, 411));
        scrollArea_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 309, 409));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setSpacing(15);
        verticalLayout->setContentsMargins(15, 15, 15, 15);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listWidget_2 = new QListWidget(scrollAreaWidgetContents_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setStyleSheet(QLatin1String("QListWidget::Item{\n"
"background-color: rgb(173, 173, 173);\n"
"}\n"
"\n"
"QListWidget::Item:hover{\n"
"background-color: rgba(203, 203, 203, 100);\n"
"}"));

        verticalLayout->addWidget(listWidget_2);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        tabWidget->addTab(tab_3, QString());

        verticalLayout_2->addWidget(tabWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(15);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 9, -1, 9);
        horizontalSpacer_5 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        toolButton_4 = new QToolButton(widget);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        toolButton_4->setMinimumSize(QSize(30, 30));
        toolButton_4->setMaximumSize(QSize(30, 30));
        toolButton_4->setStyleSheet(QStringLiteral(""));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/lib/sangangy.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_4->setIcon(icon9);
        toolButton_4->setIconSize(QSize(25, 25));
        toolButton_4->setAutoRaise(true);

        horizontalLayout_3->addWidget(toolButton_4);

        toolButton_3 = new QToolButton(widget);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setMinimumSize(QSize(30, 30));
        toolButton_3->setMaximumSize(QSize(30, 30));
        toolButton_3->setStyleSheet(QStringLiteral(""));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/lib/tianjiahaoyou.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon10);
        toolButton_3->setIconSize(QSize(25, 25));
        toolButton_3->setAutoRaise(true);

        horizontalLayout_3->addWidget(toolButton_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout->addWidget(widget, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Fdog", nullptr));
        icon_tool->setText(QApplication::translate("MainWindow", "...", nullptr));
        skin_tool->setText(QApplication::translate("MainWindow", "...", nullptr));
        min_tool->setText(QApplication::translate("MainWindow", "...", nullptr));
        close_tool->setText(QApplication::translate("MainWindow", "...", nullptr));
        signature_label->setText(QString());
        toolButton_2->setText(QApplication::translate("MainWindow", "...", nullptr));
        username_label->setText(QString());
        pushButton->setText(QString());
        toolButton_5->setText(QString());
        toolButton_6->setText(QString());
        label->setText(QApplication::translate("MainWindow", "12", nullptr));
        toolButton->setText(QApplication::translate("MainWindow", "...", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\346\266\210\346\201\257", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "\345\245\275\345\217\213", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("MainWindow", "\347\276\244\350\201\212", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\350\201\224\347\263\273\344\272\272", nullptr));

        const bool __sortingEnabled = listWidget_2->isSortingEnabled();
        listWidget_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_2->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget_2->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget_2->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget_2->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget_2->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget_2->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget_2->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        listWidget_2->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\347\251\272\351\227\264", nullptr));
        toolButton_4->setText(QString());
        toolButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
