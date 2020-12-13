#include "addmenuitem.h"
#include "ui_addmenuitem.h"

AddMenuItem::AddMenuItem(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::AddMenuItem) {
	ui->setupUi(this);
}

AddMenuItem::~AddMenuItem() {
	delete ui;
}
