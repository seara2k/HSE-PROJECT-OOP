#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->lineEdit_prof->setEnabled(false);
    ui->pushButton_deletePerson->setEnabled(false);
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

void MainWindow::refreshInfo(const int& number) {
    ui->lineEdit_name->setText(QString::fromStdString(people.getVisitor(number).getName()));
    ui->lineEdit_surname->setText(QString::fromStdString(people.getVisitor(number).getSurname()));
    ui->lineEdit_state->setText(QString::fromStdString(people.getVisitor(number).getState()));
}

void MainWindow::getVisitorState(string& s) {
    if (s == "is waiting for the waiter") {
        s = "1";
    }
    else if (s == "is waiting for order") {
        s = "2";
    }
    else if (s == "is eating") {
        s = "3";
    }
    else if (s == "is paying") {
        s = "4";
    }
}

void MainWindow::getWorkerState(string& s, const string& p) {
    if ((s == "is cooking orders") && (p == "Cooker")) {
        s = "1";
    }
    else if ((s == "is delivering orders") && (p == "Waiter")) {
        s = "1";
    }
    else if ((s == "is cleaning the restaurant") && (p == "Cleaner")) {
        s = "1";
    }
    else if (s == "waiting for work") {
        s = "2";
    }
    else if (s == "is chilling") {
        s = "3";
    }
    else if (s == "is not at work") {
        s = "4";
    }
}

void MainWindow::getWorkerProf(string& s) {
    if (s == "Cooker") {
        s = "1";
    }
    else if (s == "Waiter") {
        s = "2";
    }
    else if (s == "Cleaner") {
        s = "3";
    }
}

void MainWindow::on_pushButton_addPerson_clicked() {
    if (ui->comboBox->currentText() == "Посетителя") {
        int i = people.visitorsNumber();
        Visitor tmp("name" + to_string(i), "surname" + to_string(i), "1");
        people.addVisitor(tmp);
        ui->listWidget_visitors->clear();
        for (int i = 0; i < people.visitorsNumber(); i++) {
            QString tmp = QString::fromStdString(people.getVisitor(i).getName() + " " + people.getVisitor(i).getSurname());
            ui->listWidget_visitors->addItem(tmp);
        }
    }
    else if (ui->comboBox->currentText() == "Сотрудника") {
        int i = people.workersNumber();
        Worker tmp("name" + to_string(i), "surname" + to_string(i), "1", "1");
        people.addWorker(tmp);
        ui->listWidget_workers->clear();
        for (int i = 0; i < people.workersNumber(); i++) {
            QString tmp = QString::fromStdString(people.getWorker(i).getName() + " " + people.getWorker(i).getSurname());
            ui->listWidget_workers->addItem(tmp);
        }
    }

}



MainWindow::~MainWindow() {
    delete ui;

}

void MainWindow::on_listWidget_visitors_itemClicked() {
    ui->listWidget_workers->setCurrentRow(-1);
    ui->pushButton_deletePerson->setEnabled(true);
    int i = ui->listWidget_visitors->currentRow();
    ui->lineEdit_name->setText(QString::fromStdString(people.getVisitor(i).getName()));
    ui->lineEdit_surname->setText(QString::fromStdString(people.getVisitor(i).getSurname()));
    ui->lineEdit_state->setText(QString::fromStdString(people.getVisitor(i).getState()));
    ui->lineEdit_prof->setEnabled(false);
    ui->lineEdit_prof->setText("");
}

void MainWindow::on_listWidget_workers_itemClicked() {
    ui->listWidget_visitors->setCurrentRow(-1);
    ui->pushButton_deletePerson->setEnabled(true);
    int i = ui->listWidget_workers->currentRow();
    ui->lineEdit_name->setText(QString::fromStdString(people.getWorker(i).getName()));
    ui->lineEdit_surname->setText(QString::fromStdString(people.getWorker(i).getSurname()));
    ui->lineEdit_state->setText(QString::fromStdString(people.getWorker(i).getState()));
    ui->lineEdit_prof->setEnabled(true);
    ui->lineEdit_prof->setText(QString::fromStdString(people.getWorker(i).getProf()));
}

void MainWindow::on_pushButton_changePerson_clicked() {
    int i;
    if (ui->lineEdit_prof->isEnabled()) {
        i = ui->listWidget_workers->currentRow();
        string name = ui->lineEdit_name->text().toStdString();
        string surname = ui->lineEdit_surname->text().toStdString();
        string state = ui->lineEdit_state->text().toStdString();
        string prof = ui->lineEdit_prof->text().toStdString();
        getWorkerState(state, prof);
        getWorkerProf(prof);
        Worker tmp(name, surname, state, prof);
        people.setWorker(tmp, i);
        ui->listWidget_workers->takeItem(i);
        QString str = QString::fromStdString(people.getWorker(i).getName() + " " + people.getWorker(i).getSurname());
        ui->listWidget_workers->insertItem(i, str);
    }
    else {
        i = ui->listWidget_visitors->currentRow();
        string name = ui->lineEdit_name->text().toStdString();
        string surname = ui->lineEdit_surname->text().toStdString();
        string state = ui->lineEdit_state->text().toStdString();
        getVisitorState(state);
        Visitor tmp(name, surname, state);
        people.setVisitor(tmp, i);
        ui->listWidget_visitors->takeItem(i);
        QString str = QString::fromStdString(people.getVisitor(i).getName() + " " + people.getVisitor(i).getSurname());
        ui->listWidget_visitors->insertItem(i, str);
    }
}

void MainWindow::on_pushButton_deletePerson_clicked() {
    int i;
    if (ui->lineEdit_prof->isEnabled()) {
        i = ui->listWidget_workers->currentRow();
        ui->listWidget_workers->takeItem(i);
        people.deleteWorker(i);
        ui->listWidget_workers->setCurrentRow(-1);
        ui->pushButton_deletePerson->setEnabled(false);
    }
    else {
        i = ui->listWidget_visitors->currentRow();
        ui->listWidget_visitors->takeItem(i);
        people.deleteVisitor(i);
        ui->listWidget_visitors->setCurrentRow(-1);
        ui->pushButton_deletePerson->setEnabled(false);
    }
    ui->lineEdit_name->setText("");
    ui->lineEdit_surname->setText("");
    ui->lineEdit_state->setText("");
    ui->lineEdit_prof->setText("");
}
