#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "hash.h"
#include <QFileDialog>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

  public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void refreshHashList();

  private slots:

    void on_addButton_clicked();
    void on_deleteButton_clicked();

    void on_saveButton_clicked();
    void on_getButton_clicked();

    void on_clearButton_clicked();

    void on_getValuesButton_clicked();

  private:
    Ui::MainWindow *ui;
    Hash<string, string> hash;
};
#endif // MAINWINDOW_H
