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
	//�ۺ���
public slots:
	void click_additem();
	//bool eventFilter(QObject * target, QEvent * event);
	//bool eventFilter(QObject * target, QKeyEvent * keyevent);
	//����
	void click_deleteitem();	//ɾ��
	void click_edititem();		//�޸�
	void click_searchitem();	//��ѯ
	void click_saveitem();		//����
	void click_book();			//ͼ��
	void click_video();			//��Ƶ
	void click_picture();		//ͼ��
private:
	Ui::BorrowingsystemClass ui;
	//������ʱ�洢���ݵ�QString ����
	QString qnum, qtitle, qauthor, qlevel, qpublisher, qISBN, qpage;
	QString qpname, qpyear, qtime;
	QString qcountry, qlength, qwidth;
};
