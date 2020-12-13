#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

void MainWindow::refreshitemList(const int& number) {
    ui->itemList->clear();
    for (const auto& item : menu.getItem(number)->getFull()) {
        ui->itemList->addItem(QString::fromStdString(item.first + " : " + item.second));
    }
    ui->itemList->setCurrentRow( ui->itemList->model()->rowCount() - 1);
}
void MainWindow::refreshmenuList() {
    ui->menuList->clear();
    int i = 1;
    for (const auto& item : menu.getItems()) {
        ui->menuList->addItem(QString::fromStdString(to_string(i) + "  " + item->getName()));
        i++;
    }
    ui->menuList->setCurrentRow( ui->menuList->model()->rowCount() - 1);

}

void MainWindow::on_getButton_clicked() {
    QString filename = QFileDialog::getOpenFileName(this,
                       tr("Open menu from txt"), "", tr("Text files (*.txt)"));
    if (!filename.isEmpty()) {
        ifstream input(filename.toStdString());
        if (input)
            input >> menu;
        refreshmenuList();
        refreshitemList(menu.getItems().size() - 1);
    }
}
void MainWindow::on_saveButton_clicked() {
    if (menu.getItems().size() != 0) {
        QString filename = QFileDialog::getSaveFileName(this,
                           tr("Save menu to txt"), "",
                           tr("Text files (*.txt)"));
        if (!filename.isEmpty()) {
            ofstream output(filename.toStdString());
            output << menu;
        }
    }
}

void MainWindow::on_menuList_itemClicked() {
    int current_number = ui->menuList->currentItem()->text().split("  ")[0].toInt();
    refreshitemList(current_number - 1);
}
void MainWindow::on_addButton_clicked() {
    QString input1 = ui->menuNameEdit->toPlainText();

    if (!(input1.isEmpty())) {
        if (input1 == "FOOD") {
            Food *temp = new Food();
            menu.addItem(temp);
            refreshmenuList();
            refreshitemList(menu.getItems().size() - 1);
        }

        else if (input1 == "DRINK") {
            Drink *temp = new Drink();
            menu.addItem(temp);
            refreshmenuList();
            refreshitemList(menu.getItems().size() - 1);
        }
    }
}
void MainWindow::on_deleteButton_clicked() {
    if (menu.getItems().size() != 0) {
        int current_number =  ui->menuList->currentItem()->text().split("  ")[0].toInt();
        menu.deleteItem(current_number - 1);
        refreshmenuList();
        ui->itemList->clear();
    }
}
void MainWindow::on_changeButton_clicked() {
    QString input1 = ui->changeEdit->toPlainText();
    if (!input1.isEmpty() && menu.getItems().size() != 0) {
        int current_number =  ui->menuList->currentItem()->text().split("  ")[0].toInt();
        int current_field =  ui->itemList->currentItem()->text().split("  ")[0].toInt();
        if (current_field == 1)
            menu.getItem(current_number - 1)->setName(input1.toStdString());
        else if (current_field == 3 && input1.toInt() > 0)
            menu.getItem(current_number - 1)->setPrice(input1.toInt());
        else if (current_field == 4 && input1.toInt() > 0)
            menu.getItem(current_number - 1)->setAmount(input1.toInt());
        else if (current_field == 5 && input1.toInt() > 0)
            menu.getItem(current_number - 1)->setPortionSize(input1.toInt());
        else if (current_field == 6)
            menu.getItem(current_number - 1)->setPortionSizeUnit(input1.toStdString());
        refreshmenuList();
        ui->menuList->setCurrentRow(current_number - 1);
        refreshitemList(current_number - 1);
        ui->itemList->setCurrentRow(current_field - 1);
    }
}

void MainWindow::on_pushButton_addPerson_clicked() {

}



MainWindow::~MainWindow() {
    delete ui;

}
