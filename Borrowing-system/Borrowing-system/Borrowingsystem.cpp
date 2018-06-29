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

//添加
void Borrowingsystem::click_additem()
{
	ui.tableWidget->setItem(2, 2, new QTableWidgetItem("666"));
}

//删除
void Borrowingsystem::click_deleteitem()
{
	int rowindex = ui.tableWidget->currentRow();
	if (rowindex != -1)
		ui.tableWidget->removeRow(rowindex);
}

//修改
void Borrowingsystem::click_edititem()
{
	ui.tableWidget->setEditTriggers(QAbstractItemView::DoubleClicked);
}

//查询
void Borrowingsystem::click_searchitem()
{

}

//图书
void Borrowingsystem::click_book()
{
	ui.tableWidget->clearContents();
	QStringList header;
	header << u8"编号" << u8"标题" << u8"作者" << u8"评级" << u8"出版社" << u8"ISBN" << u8"页数";
	ui.tableWidget->setHorizontalHeaderLabels(header);
}

//视频
void Borrowingsystem::click_video()
{
	ui.tableWidget->clearContents();
	QStringList header;
	header << u8"编号" <<u8"标题" << u8"作者" << u8"评级" << u8"出品者姓名" << u8"出品年份" << u8"视频时长";
	ui.tableWidget->setHorizontalHeaderLabels(header);
}

//图片
void Borrowingsystem::click_picture()
{
	ui.tableWidget->clearContents();
	QStringList header;
	header << u8"编号" << u8"标题" << u8"作者" << u8"评级" << u8"出品国籍" << u8"长" << u8"宽";
	ui.tableWidget->setHorizontalHeaderLabels(header);
}