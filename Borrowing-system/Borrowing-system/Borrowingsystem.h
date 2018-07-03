#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Borrowingsystem.h"
class Borrowingsystem : public QMainWindow
{
	Q_OBJECT
		
public:
	Borrowingsystem(QWidget *parent = Q_NULLPTR);
	QButtonGroup* radio_group = new QButtonGroup(this);
	friend class database;
	static int rrow;
	//槽函数
public slots:
	void click_additem();
	//bool eventFilter(QObject * target, QEvent * event);
	//bool eventFilter(QObject * target, QKeyEvent * keyevent);
	//增加
	void click_deleteitem();	//删除
	void click_edititem();		//修改
	void click_searchitem();	//查询
	void click_saveitem();		//存盘
	void click_book();			//图书
	void click_video();			//视频
	void click_picture();		//图像
private:
	Ui::BorrowingsystemClass ui;
	//用于临时存储数据的QString 变量
	QString qnum, qtitle, qauthor, qlevel, qpublisher, qISBN, qpage;
	QString qpname, qpyear, qtime;
	QString qcountry, qlength, qwidth;
};
