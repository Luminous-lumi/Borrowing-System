#include "LoginDlg.h"
#include"AddDlg.h"
LoginDlg::LoginDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.LoginButton, SIGNAL(clicked()), this, SLOT(ClickLogin()));
}

LoginDlg::~LoginDlg()
{
}
void LoginDlg::ClickLogin()
{
	if ((ui.accountEdit->toPlainText() == "admin"&&ui.passwordEdit->toPlainText() == "ujs")||
		(ui.accountEdit->toPlainText() == "test"&&ui.passwordEdit->toPlainText() == "test"))
	{
		accept();
	}
	else
	{
		AddDlg Warning;
		if (Warning.exec() == QDialog::Accepted) { ui.accountEdit->clear(); ui.passwordEdit->clear(); }
	} 
}
