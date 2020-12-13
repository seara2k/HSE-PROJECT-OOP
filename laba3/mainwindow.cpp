#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    add = new AddPersonWindow;
refreshmenuList();
}

void MainWindow::refreshitemList(const int& number) {
    ui->itemList->clear();
    for (const auto& item: menu.getItem(number)->getFull()) {
        ui->itemList->addItem(QString::fromStdString(item.first + " : " + item.second));
    }
}
void MainWindow::refreshmenuList() {
    Food* test = new Food("name", 10, 20, 30, "ml", 500);
    Food* test1 = new Food("name1", 100, 20, 30, "lol", 500);
    Drink* cola = new Drink("name2", 101, 20, 30, "ml");
    Drink* cola1 = new Drink("name3", 102, 20, 30, "ml");
    menu.addItem(test);
    menu.addItem(test1);
    menu.addItem(cola);
    menu.addItem(cola1);
    int i = 1;
    for (const auto& item : menu.getItems()){
        ui->menuList->addItem(QString::fromStdString(to_string(i) + "  " + item->getName()));
        if (i + 1 == menu.getItems().size())
           ui->menuList->setCurrentRow(i);

        i++;
    }
}
void MainWindow::on_menuList_itemClicked(){
    int current_number = ui->menuList->currentItem()->text().split("  ")[0].toInt();
    cout << current_number << "       ";
    refreshitemList(current_number - 1);
}

void MainWindow::on_addButton_clicked(){

}
void MainWindow::on_deleteButton_clicked(){

}
void MainWindow::on_changeButton_clicked(){

}

void MainWindow::on_pushButton_addPerson_clicked()
{
   add->show();
}



MainWindow::~MainWindow()
{
    delete ui;
}
