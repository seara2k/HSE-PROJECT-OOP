#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    add = new AddPersonWindow;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_addPerson_clicked()
{
   add->show();
}
