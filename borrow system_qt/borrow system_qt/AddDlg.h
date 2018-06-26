#pragma once

#include <QDialog>
#include "ui_AddDlg.h"

class AddDlg : public QDialog
{
	Q_OBJECT

public:
	AddDlg(QWidget *parent = Q_NULLPTR);
	~AddDlg();

private:
	Ui::AddDlg ui;
};
