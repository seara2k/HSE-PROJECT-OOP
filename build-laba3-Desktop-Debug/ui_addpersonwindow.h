/********************************************************************************
** Form generated from reading UI file 'addpersonwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPERSONWINDOW_H
#define UI_ADDPERSONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPersonWindow
{
public:

    void setupUi(QWidget *AddPersonWindow)
    {
        if (AddPersonWindow->objectName().isEmpty())
            AddPersonWindow->setObjectName(QString::fromUtf8("AddPersonWindow"));
        AddPersonWindow->resize(400, 300);

        retranslateUi(AddPersonWindow);

        QMetaObject::connectSlotsByName(AddPersonWindow);
    } // setupUi

    void retranslateUi(QWidget *AddPersonWindow)
    {
        AddPersonWindow->setWindowTitle(QCoreApplication::translate("AddPersonWindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPersonWindow: public Ui_AddPersonWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPERSONWINDOW_H
