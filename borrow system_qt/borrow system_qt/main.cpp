#include "borrowsystem_qt.h"
#include <QtWidgets/QApplication>
#include"LoginDlg.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	borrowsystem_qt w;
	LoginDlg Login;

	if (Login.exec() == QDialog::Accepted)
	{

		w.show();
	return a.exec();
	}
	else return 0;
}
