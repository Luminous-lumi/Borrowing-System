#pragma once

#include <QDialog>
#include "ui_Login.h"

class Login : public QDialog
{
	Q_OBJECT

public:
	Login(QWidget *parent = Q_NULLPTR);
	~Login();
public slots:
	void click_login();
private:
	Ui::Login ui;
};
