#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Borrowingsystem.h"
class Borrowingsystem : public QMainWindow
{
	Q_OBJECT

public:
	Borrowingsystem(QWidget *parent = Q_NULLPTR);
public slots:
	void click_additem();
	void click_deleteitem();
	void click_edititem();
	void click_searchitem();
	void click_book();
	void click_video();
	void click_picture();
private:
	Ui::BorrowingsystemClass ui;
};
