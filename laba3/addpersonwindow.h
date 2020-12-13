#ifndef ADDPERSONWINDOW_H
#define ADDPERSONWINDOW_H

#include <QWidget>

namespace Ui {
class AddPersonWindow;
}

class AddPersonWindow : public QWidget {
	Q_OBJECT

  public:
	explicit AddPersonWindow(QWidget *parent = nullptr);
	~AddPersonWindow();

  private:
	Ui::AddPersonWindow *ui;
};

#endif // ADDPERSONWINDOW_H
