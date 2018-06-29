#include "Borrowingsystem.h"
#include<qbuttongroup.h>

#include<database.h>
Borrowingsystem::Borrowingsystem(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui.tableWidget->setColumnCount(7);
	ui.tableWidget->setRowCount(10);
	ui.tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

//���
void Borrowingsystem::click_additem()
{
	ui.tableWidget->setItem(2, 2, new QTableWidgetItem("666"));
}

//ɾ��
void Borrowingsystem::click_deleteitem()
{
	int rowindex = ui.tableWidget->currentRow();
	if (rowindex != -1)
		ui.tableWidget->removeRow(rowindex);
}

//�޸�
void Borrowingsystem::click_edititem()
{
	ui.tableWidget->setEditTriggers(QAbstractItemView::DoubleClicked);
}

//��ѯ
void Borrowingsystem::click_searchitem()
{

}

//ͼ��
void Borrowingsystem::click_book()
{
	ui.tableWidget->clearContents();
	QStringList header;
	header << u8"���" << u8"����" << u8"����" << u8"����" << u8"������" << u8"ISBN" << u8"ҳ��";
	ui.tableWidget->setHorizontalHeaderLabels(header);
}

//��Ƶ
void Borrowingsystem::click_video()
{
	ui.tableWidget->clearContents();
	QStringList header;
	header << u8"���" <<u8"����" << u8"����" << u8"����" << u8"��Ʒ������" << u8"��Ʒ���" << u8"��Ƶʱ��";
	ui.tableWidget->setHorizontalHeaderLabels(header);
}

//ͼƬ
void Borrowingsystem::click_picture()
{
	ui.tableWidget->clearContents();
	QStringList header;
	header << u8"���" << u8"����" << u8"����" << u8"����" << u8"��Ʒ����" << u8"��" << u8"��";
	ui.tableWidget->setHorizontalHeaderLabels(header);
}