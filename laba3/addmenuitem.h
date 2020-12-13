#ifndef ADDMENUITEM_H
#define ADDMENUITEM_H

#include <QDialog>

namespace Ui {
class AddMenuItem;
}

class AddMenuItem : public QDialog {
	Q_OBJECT

  public:
	explicit AddMenuItem(QWidget *parent = nullptr);
	~AddMenuItem();

  private:
	Ui::AddMenuItem *ui;
};

#endif // ADDMENUITEM_H
