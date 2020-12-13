#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

void MainWindow::refreshAminoList(DoubleLinkedList *input) {
    ui->aminoList->clear();
    for (auto item : *input) {
        ui->aminoList->addItem(QString::fromStdString(item->getAmino()));
    }
    cout << "Refreshed amino" << endl;
}

void MainWindow::refreshNumbersList() {
    ui->numbersList->clear();
    for (size_t i = 0; i < vec.size(); ++i) {
        ui->numbersList->addItem(QString::number(i + 1) + "   size = " + QString::number(vec[i]->size()));
        if (i + 1 == vec.size())
            ui->numbersList->setCurrentRow(i);
    }
    cout << "Refreshed numbers" << endl;
}

void MainWindow::on_addButton_clicked() {
    QString filename = QFileDialog::getOpenFileName(this,
                       tr("Open list from txt"), "", tr("Text files (*.txt)"));
    if (filename.isEmpty()) {
        cout << "No file input" << endl;
    } else {
        DoubleLinkedList *temp = new DoubleLinkedList();
        temp->getFromFile(filename.toStdString());
        vec.push_back(temp);
        refreshAminoList(temp);
        refreshNumbersList();
    }
}

void MainWindow::on_saveButton_clicked() {
    QString filename = QFileDialog::getSaveFileName(this,
                       tr("Save list to txt"), "",
                       tr("Text files (*.txt)"));
    if (filename.isEmpty()) {
        cout << "No file input" << endl;
    } else {
        int current_number =  ui->numbersList->currentItem()->text().split(" ")[0].toInt();
        vec[current_number - 1]->dumpToFile(filename.toStdString());
    }
}

void MainWindow::on_newButton_clicked() {
    DoubleLinkedList *temp = new DoubleLinkedList();
    vec.push_back(temp);
    refreshAminoList(temp);
    refreshNumbersList();
}

void MainWindow::on_deleteButton_clicked() {
    if (vec.size() != 0) {
        int current_number =  ui->numbersList->currentItem()->text().split(" ")[0].toInt();
        delete vec[current_number - 1];
        vec.erase(vec.begin() + current_number - 1);
        refreshNumbersList();
        if (vec.size() != 0) {
            refreshAminoList(*(vec.end() - 1));
        } else {
            ui->aminoList->clear();
        }
    } else {
        cout << "No list to delete" << endl;
    }
}
void MainWindow::on_pushBackButton_clicked() {
    if (vec.size() != 0) {
        QString input = ui->aminoInput->toPlainText();
        if (!input.isEmpty()) {
            QStringList input_list = input.split(QString(" "));
            if (input_list.size() == 2) {
                Amino* input_amino = new Amino (input_list[0].toStdString(), input_list[1].toStdString());
                int current_number =  ui->numbersList->currentItem()->text().split(" ")[0].toInt();
                vec[current_number - 1]->pushBack(input_amino);
                refreshAminoList(vec[current_number - 1]);
                refreshNumbersList();
                ui->numbersList->setCurrentRow(current_number - 1);
            } else if (input_list.size() == 1) {
                UnusualAmino* input_amino = new UnusualAmino (input_list[0].toStdString());
                int current_number =  ui->numbersList->currentItem()->text().split(" ")[0].toInt();
                cout << input_amino << endl;
                vec[current_number - 1]->pushBack(input_amino);
                refreshAminoList(vec[current_number - 1]);
                refreshNumbersList();
                ui->numbersList->setCurrentRow(current_number - 1);
            } else {
                ui->aminoInput->setText("Invalid amino");
                cout << "Amino can only be a word + symbol or Unusual amino that is one word" << endl;
            }
        } else {
            cout << "Empty input" << endl;
        }
    } else {
        cout << "No list available" << endl;
    }
}

void MainWindow::on_pushFrontButton_clicked() {
    if (vec.size() != 0) {
        QString input = ui->aminoInput->toPlainText();
        if (!input.isEmpty()) {
            QStringList input_list = input.split(QString(" "));
            if (input_list.size() == 2) {
                Amino* input_amino = new Amino (input_list[0].toStdString(), input_list[1].toStdString());
                int current_number =  ui->numbersList->currentItem()->text().split(" ")[0].toInt();
                vec[current_number - 1]->pushFront(input_amino);
                refreshAminoList(vec[current_number - 1]);
                refreshNumbersList();
                ui->numbersList->setCurrentRow(current_number - 1);
            } else if (input_list.size() == 1) {
                UnusualAmino* input_amino = new UnusualAmino (input_list[0].toStdString());
                int current_number =  ui->numbersList->currentItem()->text().split(" ")[0].toInt();
                cout << input_amino << endl;
                vec[current_number - 1]->pushFront(input_amino);
                refreshAminoList(vec[current_number - 1]);
                refreshNumbersList();
                ui->numbersList->setCurrentRow(current_number - 1);
            } else {
                ui->aminoInput->setText("Invalid amino");
                cout << "Amino can only be a word + symbol or Unusual amino that is one word" << endl;
            }
        } else {
            cout << "Empty input" << endl;
        }
    } else {
        cout << "No list available" << endl;
    }
}

void MainWindow::on_popBackButton_clicked() {
    if (vec.size() != 0) {
        int current_number =  ui->numbersList->currentItem()->text().split(" ")[0].toInt();
        if (vec[current_number - 1]->size() != 0) {
            vec[current_number - 1]->popBack();
            refreshAminoList(vec[current_number - 1]);
            refreshNumbersList();
            ui->numbersList->setCurrentRow(current_number - 1);
        } else {
            cout << "List is empty" << endl;
        }
    } else {
        cout << "No list selected" << endl;
    }
}

void MainWindow::on_popFrontButton_clicked() {
    if (vec.size() != 0) {
        int current_number =  ui->numbersList->currentItem()->text().split(" ")[0].toInt();
        if (vec[current_number - 1]->size() != 0) {
            vec[current_number - 1]->popFront();
            refreshAminoList(vec[current_number - 1]);
            refreshNumbersList();
            ui->numbersList->setCurrentRow(current_number - 1);
        } else {
            cout << "List is empty" << endl;
        }
    } else {
        cout << "No list selected" << endl;
    }
}

void MainWindow::on_sumButton_clicked() {
    QString input1 = ui->addingValue1textEdit->toPlainText();
    QString input2 = ui->addingValue2textEdit->toPlainText();
    if (input1.isEmpty() || input1.isEmpty()) {
        cout << "No input number" << endl;
    } else {
        int number1 = input1.toInt();
        int number2 = input2.toInt();
        if (number1 != 0 && number2 != 0 && number1 < vec.size() + 1 && number2 < vec.size() + 1 ) {
            DoubleLinkedList *temp = new DoubleLinkedList();
            *temp = *(vec[number1 - 1]) + *(vec[number2 - 1]);
            vec.push_back(temp);
            refreshAminoList(temp);
            refreshNumbersList();
        } else {
            cout << "Bad number" << endl;
        }
    }
}

void MainWindow::on_numbersList_itemClicked() {
    int current_number =  ui->numbersList->currentItem()->text().split(" ")[0].toInt();
    cout << current_number << " ";
    refreshAminoList(vec[current_number - 1]);
}

MainWindow::~MainWindow() {
    for (size_t i = 0; i < vec.size(); ++i) {
        delete vec[i];
    }
    delete ui;

}

