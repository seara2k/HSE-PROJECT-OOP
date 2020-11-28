#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <vector>
#include <QMainWindow>
#include "list.h"
#include <QFileDialog>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void refreshNumbersList();
    void refreshAminoList(DoubleLinkedList *input);

private slots:

    void on_addButton_clicked();
    void on_saveButton_clicked();

    void on_newButton_clicked();
    void on_deleteButton_clicked();

    void on_pushBackButton_clicked();
    void on_pushFrontButton_clicked();

    void on_popBackButton_clicked();
    void on_popFrontButton_clicked();

    void on_sumButton_clicked();
    void on_numbersList_itemClicked();

private:
    Ui::MainWindow *ui;
    vector<DoubleLinkedList*> vec;
};
#endif // MAINWINDOW_H
