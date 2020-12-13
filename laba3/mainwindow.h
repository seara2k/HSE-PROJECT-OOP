#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addpersonwindow.h"
#include <addmenuitem.h>
#include "menu.h"
#include "people.h"
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

  private slots:
    void on_menuList_itemClicked();
    void on_addButton_clicked();
    void on_deleteButton_clicked();
    void on_changeButton_clicked();




    void on_pushButton_addPerson_clicked();

  private:
    Ui::MainWindow *ui;
    AddPersonWindow *add;
    AddMenuItem *addmenuitem;
    Menu menu;
    People people;
};

#endif // MAINWINDOW_H