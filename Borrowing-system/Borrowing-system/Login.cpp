#include "Login.h"
#include<qmessagebox.h>
#include<Warning.h>
Login::Login(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

Login::~Login()
{
}
void Login::click_login()
{
	if (ui.account_lineEdit->text().trimmed() == tr("admin")&&ui.password_lineEdit->text() == tr("ujs"))
		accept();
	else
	{
		Warning *w = new Warning;
		w->exec();
	}
}