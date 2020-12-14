#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QFileDialog>
#include <QMainWindow>
#include "menu.h"
#include "people.h"
#include <fstream>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

  public:

    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void refreshitemList(const int& number);
    void refreshmenuList();
    void refreshInfo(const int& number);
    void getVisitorState(string& s);
    void getWorkerState(string& s, const string& p);
    void getWorkerProf(string& s);

  private slots:

    void on_saveButton_clicked();
    void on_getButton_clicked();

    void on_menuList_itemClicked();
    void on_addButton_clicked();
    void on_deleteButton_clicked();
    void on_changeButton_clicked();

    void on_pushButton_addPerson_clicked();
    void on_listWidget_visitors_itemClicked();
    void on_listWidget_workers_itemClicked();

    void on_pushButton_changePerson_clicked();

    void on_pushButton_deletePerson_clicked();

    void on_savePeopleButton_clicked();

    void on_getPeopleButton_clicked();

private:
    Ui::MainWindow *ui;
    Menu menu;
    People people;
};

#endif // MAINWINDOW_H

//
