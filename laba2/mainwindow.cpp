#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

void MainWindow::refreshHashList() {
    ui->hashList->clear();
    ui->label->setText("size = " + QString::number(hash.size()));
    if (hash.size() != 0) {
        for (const auto& pair : hash.getAll())
            ui->hashList->addItem(QString::fromStdString(pair.first + ' ' + pair.second));
        ui->hashList->setCurrentRow( ui->hashList->model()->rowCount() - 1);
    }
}

void MainWindow::on_addButton_clicked() {
    QString input1 = ui->input1Edit->toPlainText();
    QString input2 = ui->input2Edit->toPlainText();
    if (!(input1.isEmpty() || input2.isEmpty())) {
        hash.insert(input1.toStdString(), input2.toStdString());
        refreshHashList();
    }
}

void MainWindow::on_deleteButton_clicked() {
    if (hash.size() != 0) {
        string current_key = ui->hashList->currentItem()->text().split(" ")[0].toStdString();
        hash.erase(current_key);
        refreshHashList();
    }
}

void MainWindow::on_saveButton_clicked() {
    QString filename = QFileDialog::getSaveFileName(this,
                       tr("Save hash table to txt"), "",
                       tr("Text files (*.txt)"));
    if (!filename.isEmpty())
        hash.dumpToFile(filename.toStdString());
}
void MainWindow::on_getButton_clicked() {
    QString filename = QFileDialog::getOpenFileName(this,
                       tr("Open hash table from txt"), "", tr("Text files (*.txt)"));
    if (!filename.isEmpty()) {
        hash.getFromFile(filename.toStdString());
        refreshHashList();
    }
}
void MainWindow::on_clearButton_clicked() {
    hash.clear();
    ui->hashList->clear();
    ui->label->setText("size = 0");
}

void MainWindow::on_getValuesButton_clicked() {
    QString input = ui->vectorInputEdit->toPlainText();
    QStringList input_list = input.split(QString(" "));
    vector<string> input_vector;
    for (const auto& item : input_list) {
        if (hash.isKey(item.toStdString()))
            input_vector.push_back(item.toStdString());
    }
    vector<string> output_vector =  hash.getValues(input_vector);
    ui->valuesWidget->clear();
    for (const auto& item : output_vector)
        ui->valuesWidget->addItem(QString::fromStdString(item));
}

MainWindow::~MainWindow() {
    delete ui;
}

