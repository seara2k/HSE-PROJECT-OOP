/********************************************************************************
** Form generated from reading UI file 'addmenuitem.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMENUITEM_H
#define UI_ADDMENUITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AddMenuItem
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *textEdit;

    void setupUi(QDialog *AddMenuItem)
    {
        if (AddMenuItem->objectName().isEmpty())
            AddMenuItem->setObjectName(QString::fromUtf8("AddMenuItem"));
        AddMenuItem->resize(400, 300);
        buttonBox = new QDialogButtonBox(AddMenuItem);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textEdit = new QTextEdit(AddMenuItem);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(80, 70, 231, 91));

        retranslateUi(AddMenuItem);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddMenuItem, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddMenuItem, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddMenuItem);
    } // setupUi

    void retranslateUi(QDialog *AddMenuItem)
    {
        AddMenuItem->setWindowTitle(QCoreApplication::translate("AddMenuItem", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddMenuItem: public Ui_AddMenuItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMENUITEM_H
