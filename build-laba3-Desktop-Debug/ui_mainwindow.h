/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QListWidget *listWidget_visitors;
    QPushButton *pushButton_addPerson;
    QListWidget *listWidget_workers;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QListWidget *menuList;
    QListWidget *itemList;
    QPushButton *changeButton;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QTextEdit *menuNameEdit;
    QTextEdit *changeEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1080);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 400, 50));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(960, 110, 400, 50));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(980, 190, 170, 20));
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(1170, 190, 170, 20));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        listWidget_visitors = new QListWidget(centralwidget);
        listWidget_visitors->setObjectName(QString::fromUtf8("listWidget_visitors"));
        listWidget_visitors->setGeometry(QRect(980, 210, 170, 200));
        pushButton_addPerson = new QPushButton(centralwidget);
        pushButton_addPerson->setObjectName(QString::fromUtf8("pushButton_addPerson"));
        pushButton_addPerson->setGeometry(QRect(1100, 420, 121, 22));
        listWidget_workers = new QListWidget(centralwidget);
        listWidget_workers->setObjectName(QString::fromUtf8("listWidget_workers"));
        listWidget_workers->setGeometry(QRect(1170, 210, 170, 200));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1120, 450, 80, 22));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1120, 480, 80, 22));
        menuList = new QListWidget(centralwidget);
        menuList->setObjectName(QString::fromUtf8("menuList"));
        menuList->setGeometry(QRect(60, 60, 271, 251));
        itemList = new QListWidget(centralwidget);
        itemList->setObjectName(QString::fromUtf8("itemList"));
        itemList->setGeometry(QRect(390, 60, 251, 251));
        changeButton = new QPushButton(centralwidget);
        changeButton->setObjectName(QString::fromUtf8("changeButton"));
        changeButton->setGeometry(QRect(390, 320, 80, 26));
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(60, 310, 81, 31));
        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(60, 380, 80, 26));
        menuNameEdit = new QTextEdit(centralwidget);
        menuNameEdit->setObjectName(QString::fromUtf8("menuNameEdit"));
        menuNameEdit->setGeometry(QRect(140, 310, 191, 31));
        changeEdit = new QTextEdit(centralwidget);
        changeEdit->setObjectName(QString::fromUtf8("changeEdit"));
        changeEdit->setGeometry(QRect(470, 320, 161, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\233\321\216\320\264\320\270 \320\262 \321\200\320\265\321\201\321\202\320\276\321\200\320\260\320\275\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\320\265\321\202\320\270\321\202\320\265\320\273\320\270", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\321\201\320\276\320\275\320\260\320\273", nullptr));
        pushButton_addPerson->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\320\276\320\263\320\276", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        changeButton->setText(QCoreApplication::translate("MainWindow", "Change", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
