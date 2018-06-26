#pragma once

#include <QDialog>
#include "ui_LoginDlg.h"

class LoginDlg : public QDialog
{
	Q_OBJECT
public:
	LoginDlg(QWidget *parent = Q_NULLPTR);
	~LoginDlg();
	
public slots:void ClickLogin();

private:
	Ui::LoginDlg ui;
};
