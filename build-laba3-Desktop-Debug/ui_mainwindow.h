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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QPushButton *pushButton_changePerson;
    QPushButton *pushButton_deletePerson;
    QListWidget *menuList;
    QListWidget *itemList;
    QPushButton *changeButton;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QTextEdit *changeEdit;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *saveButton;
    QPushButton *getButton;
    QComboBox *comboBox;
    QLabel *label_name;
    QLabel *label_prof;
    QLabel *label_state;
    QLabel *label_surname;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_surname;
    QLineEdit *lineEdit_state;
    QLineEdit *lineEdit_prof;
    QPushButton *savePeopleButton;
    QPushButton *getPeopleButton;
    QComboBox *typecomboBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 700);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 500, 50));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(500, 0, 500, 50));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(520, 60, 220, 20));
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(760, 60, 220, 20));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        listWidget_visitors = new QListWidget(centralwidget);
        listWidget_visitors->setObjectName(QString::fromUtf8("listWidget_visitors"));
        listWidget_visitors->setGeometry(QRect(520, 80, 220, 250));
        pushButton_addPerson = new QPushButton(centralwidget);
        pushButton_addPerson->setObjectName(QString::fromUtf8("pushButton_addPerson"));
        pushButton_addPerson->setGeometry(QRect(520, 330, 110, 30));
        listWidget_workers = new QListWidget(centralwidget);
        listWidget_workers->setObjectName(QString::fromUtf8("listWidget_workers"));
        listWidget_workers->setGeometry(QRect(760, 80, 220, 250));
        pushButton_changePerson = new QPushButton(centralwidget);
        pushButton_changePerson->setObjectName(QString::fromUtf8("pushButton_changePerson"));
        pushButton_changePerson->setGeometry(QRect(760, 330, 105, 30));
        pushButton_deletePerson = new QPushButton(centralwidget);
        pushButton_deletePerson->setObjectName(QString::fromUtf8("pushButton_deletePerson"));
        pushButton_deletePerson->setGeometry(QRect(875, 330, 105, 30));
        menuList = new QListWidget(centralwidget);
        menuList->setObjectName(QString::fromUtf8("menuList"));
        menuList->setGeometry(QRect(20, 80, 220, 250));
        itemList = new QListWidget(centralwidget);
        itemList->setObjectName(QString::fromUtf8("itemList"));
        itemList->setGeometry(QRect(260, 80, 220, 250));
        changeButton = new QPushButton(centralwidget);
        changeButton->setObjectName(QString::fromUtf8("changeButton"));
        changeButton->setGeometry(QRect(260, 330, 80, 30));
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(20, 330, 80, 30));
        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(20, 360, 80, 30));
        changeEdit = new QTextEdit(centralwidget);
        changeEdit->setObjectName(QString::fromUtf8("changeEdit"));
        changeEdit->setGeometry(QRect(340, 330, 140, 30));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 60, 220, 20));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(260, 60, 220, 20));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(100, 360, 71, 31));
        getButton = new QPushButton(centralwidget);
        getButton->setObjectName(QString::fromUtf8("getButton"));
        getButton->setGeometry(QRect(169, 360, 71, 31));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(640, 330, 100, 30));
        label_name = new QLabel(centralwidget);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(640, 380, 100, 20));
        label_name->setFont(font1);
        label_name->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_prof = new QLabel(centralwidget);
        label_prof->setObjectName(QString::fromUtf8("label_prof"));
        label_prof->setGeometry(QRect(640, 470, 100, 20));
        label_prof->setFont(font1);
        label_prof->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_state = new QLabel(centralwidget);
        label_state->setObjectName(QString::fromUtf8("label_state"));
        label_state->setGeometry(QRect(640, 440, 100, 20));
        label_state->setFont(font1);
        label_state->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_surname = new QLabel(centralwidget);
        label_surname->setObjectName(QString::fromUtf8("label_surname"));
        label_surname->setGeometry(QRect(640, 410, 100, 20));
        label_surname->setFont(font1);
        label_surname->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_name = new QLineEdit(centralwidget);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(760, 380, 120, 20));
        lineEdit_surname = new QLineEdit(centralwidget);
        lineEdit_surname->setObjectName(QString::fromUtf8("lineEdit_surname"));
        lineEdit_surname->setGeometry(QRect(760, 410, 120, 20));
        lineEdit_state = new QLineEdit(centralwidget);
        lineEdit_state->setObjectName(QString::fromUtf8("lineEdit_state"));
        lineEdit_state->setGeometry(QRect(760, 440, 120, 20));
        lineEdit_prof = new QLineEdit(centralwidget);
        lineEdit_prof->setObjectName(QString::fromUtf8("lineEdit_prof"));
        lineEdit_prof->setGeometry(QRect(760, 470, 120, 20));
        savePeopleButton = new QPushButton(centralwidget);
        savePeopleButton->setObjectName(QString::fromUtf8("savePeopleButton"));
        savePeopleButton->setGeometry(QRect(560, 380, 71, 31));
        getPeopleButton = new QPushButton(centralwidget);
        getPeopleButton->setObjectName(QString::fromUtf8("getPeopleButton"));
        getPeopleButton->setGeometry(QRect(560, 430, 71, 31));
        typecomboBox = new QComboBox(centralwidget);
        typecomboBox->addItem(QString());
        typecomboBox->addItem(QString());
        typecomboBox->setObjectName(QString::fromUtf8("typecomboBox"));
        typecomboBox->setGeometry(QRect(100, 330, 141, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 23));
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
        label->setText(QCoreApplication::translate("MainWindow", "Menu", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Restaurant", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Visitors:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Workers:", nullptr));
        pushButton_addPerson->setText(QCoreApplication::translate("MainWindow", "Add new", nullptr));
        pushButton_changePerson->setText(QCoreApplication::translate("MainWindow", "Change", nullptr));
        pushButton_deletePerson->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        changeButton->setText(QCoreApplication::translate("MainWindow", "Change", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Menu list:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Menuitem details:", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        getButton->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Visitor", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Worker", nullptr));

        label_name->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        label_prof->setText(QCoreApplication::translate("MainWindow", "Proffesion:", nullptr));
        label_state->setText(QCoreApplication::translate("MainWindow", "State:", nullptr));
        label_surname->setText(QCoreApplication::translate("MainWindow", "Surname:", nullptr));
        savePeopleButton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        getPeopleButton->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        typecomboBox->setItemText(0, QCoreApplication::translate("MainWindow", "FOOD", nullptr));
        typecomboBox->setItemText(1, QCoreApplication::translate("MainWindow", "DRINK", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
