#include "addpersonwindow.h"
#include "ui_addpersonwindow.h"

AddPersonWindow::AddPersonWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddPersonWindow)
{
    ui->setupUi(this);
}

AddPersonWindow::~AddPersonWindow()
{
    delete ui;
}
