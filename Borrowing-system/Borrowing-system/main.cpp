#include "Borrowingsystem.h"
#include <QtWidgets/QApplication>
#include<Login.h>
#include<qmessagebox.h>
#include<database.h>
int Borrowingsystem::rrow = 1;
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Borrowingsystem w;
	Login l;
	if (l.exec() == QDialog::Accepted)
	{
		w.show();
		return a.exec();
	}
}
