#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_borrowsystem_qt.h"

class borrowsystem_qt : public QMainWindow
{
	Q_OBJECT

public:
	borrowsystem_qt(QWidget *parent = Q_NULLPTR);

private:
	Ui::borrowsystem_qtClass ui;
};
