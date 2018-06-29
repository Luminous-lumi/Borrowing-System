#pragma once

#include <QDialog>
#include "ui_Warning.h"

class Warning : public QDialog
{
	Q_OBJECT

public:
	Warning(QWidget *parent = Q_NULLPTR);
	~Warning();

private:
	Ui::Warning ui;
};
