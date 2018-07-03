#include "Borrowingsystem.h"
#include<qbuttongroup.h>
#include<database.h>
#include<fstream>
#include<iostream>
#include<qkeyeventtransition.h>
using namespace std;
book qbook[100];
video qvideo[100];
picture qpicture[100];
Borrowingsystem::Borrowingsystem(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//设置表格
	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui.tableWidget->setColumnCount(7);
	ui.tableWidget->setRowCount(rrow);
	//ui.tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui.tableWidget_2->setColumnCount(7);
	ui.tableWidget_2->setRowCount(1);

	//设置radiobutton组
	radio_group->addButton(ui.radioButton_book, 0);
	radio_group->addButton(ui.radioButton_video, 1);
	radio_group->addButton(ui.radioButton_picture, 2);
	radio_group->setExclusive(true);

	//注册事件过滤器
	//ui.tableWidget_2->installEventFilter(this);

}



//添加
void Borrowingsystem::click_additem()
{
	//ui.tableWidget->setItem(2, 2, new QTableWidgetItem("666"));
	QString s[7];
	int row = ui.tableWidget_2->rowCount();
	int col = ui.tableWidget_2->columnCount();
	int t1_row = ui.tableWidget->rowCount();
	for (int i = 0; i < row; i++)
	{
		ui.tableWidget->setRowCount(t1_row + i+1);
		for (int j = 0; j < col; j++)
		{
			
			
				s[j] = ui.tableWidget_2->item(i, j)->text();
				ui.tableWidget->setItem(t1_row+i, j, new QTableWidgetItem(s[j]));
			
		}
	}
	rrow++;
}

//删除
void Borrowingsystem::click_deleteitem()
{
	int rowindex = ui.tableWidget->currentRow();
	if (rowindex != -1)
		ui.tableWidget->removeRow(rowindex);
	rrow--;
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

//存盘
void Borrowingsystem::click_saveitem()
{
	int t1_row = ui.tableWidget->rowCount();
	int t1_col = ui.tableWidget->columnCount();
	ofstream out;
	switch (radio_group->checkedId())
	{
	case 0://图书
		{
			out.open("book.txt");
			if (!out)
			{
				return;
			}
			
			for (int i = 0; i < t1_row; i++)
			{
				qnum = ui.tableWidget->item(i, 0)->text();
				qtitle = ui.tableWidget->item(i, 1)->text();
				qauthor = ui.tableWidget->item(i, 2)->text();
				qlevel = ui.tableWidget->item(i, 3)->text();
				qpublisher = ui.tableWidget->item(i, 4)->text();
				qISBN = ui.tableWidget->item(i, 5)->text();
				qpage = ui.tableWidget->item(i, 6)->text();
				out << qnum.toStdString().c_str() << endl << qtitle.toStdString().c_str() << endl << qauthor.toStdString().c_str() <<endl << qlevel.toStdString().c_str()
					<< endl << qpublisher.toStdString().c_str() << endl << qISBN.toStdString().c_str() << endl << qpage.toStdString().c_str() << endl;
			}
			break;
		}
	case 1://视频
	{
		out.open("video.txt");
		if (!out)
		{
			return;
		}
		for (int i = 0; i < t1_row; i++)
		{
			qnum = ui.tableWidget->item(i, 0)->text();
			qtitle = ui.tableWidget->item(i, 1)->text();
			qauthor = ui.tableWidget->item(i, 2)->text();
			qlevel = ui.tableWidget->item(i, 3)->text();
			qpname = ui.tableWidget->item(i, 4)->text();
			qpyear = ui.tableWidget->item(i, 5)->text();
			qtime = ui.tableWidget->item(i, 6)->text();
			out << qnum.toStdString().c_str() << qtitle.toStdString().c_str() << qauthor.toStdString().c_str() << qlevel.toStdString().c_str()
				<< qpname.toStdString().c_str() << qpyear.toStdString().c_str() << qtime.toStdString().c_str();
		}
		break;
	}
	case 2://图片
	{
		out.open("picture.txt");
		if (!out)
		{
			return;
		}
		for (int i = 0; i < t1_row; i++)
		{
			qnum = ui.tableWidget->item(i, 0)->text();
			qtitle = ui.tableWidget->item(i, 1)->text();
			qauthor = ui.tableWidget->item(i, 2)->text();
			qlevel = ui.tableWidget->item(i, 3)->text();
			qcountry = ui.tableWidget->item(i, 4)->text();
			qlength = ui.tableWidget->item(i, 5)->text();
			qwidth = ui.tableWidget->item(i, 6)->text();
			out << qnum.toStdString().c_str() << qtitle.toStdString().c_str() << qauthor.toStdString().c_str() << qlevel.toStdString().c_str()
				<< qcountry.toStdString().c_str() << qlength.toStdString().c_str() << qwidth.toStdString().c_str();
		}
		break;
	}
	default:
		break;
	}
}

//图书
void Borrowingsystem::click_book()
{
	ui.tableWidget->clearContents();
	QStringList header;
	header << u8"编号" << u8"标题" << u8"作者" << u8"评级" << u8"出版社" << u8"ISBN" << u8"页数";
	ui.tableWidget->setHorizontalHeaderLabels(header);
	ui.tableWidget_2->setHorizontalHeaderLabels(header);
	ifstream in("book.txt");
	if (!in)
	{
		cerr << "找不到源文件" << endl;
		return;
	}
	while (!in.eof())
	{
		int i = 0;
		in >> qbook[i].num >> qbook[i].title >> qbook[i].author >> qbook[i].level >>qbook[i].publisher>> qbook[i].ISBN >> qbook[i].page;
		QString qnum(qbook[i].num); QString qtitle(qbook[i].title); QString qauthor(qbook[i].author); QString qlevel(qbook[i].level);
		QString qpublisher(qbook[i].publisher); QString qISBN(qbook[i].ISBN); QString qpage(qbook[i].page);
		ui.tableWidget->setItem(i, 0, new QTableWidgetItem(qnum));
		ui.tableWidget->setItem(i, 1, new QTableWidgetItem(qtitle));
		ui.tableWidget->setItem(i, 2, new QTableWidgetItem(qauthor));
		ui.tableWidget->setItem(i, 3, new QTableWidgetItem(qlevel));
		ui.tableWidget->setItem(i, 4, new QTableWidgetItem(qpublisher));
		ui.tableWidget->setItem(i, 5, new QTableWidgetItem(qISBN));
		ui.tableWidget->setItem(i, 6, new QTableWidgetItem(qpage));
		i++;

	}
}

//视频
void Borrowingsystem::click_video()
{
	ui.tableWidget->clearContents();
	QStringList header;
	header << u8"编号" <<u8"标题" << u8"作者" << u8"评级" << u8"出品者姓名" << u8"出品年份" << u8"视频时长";
	ui.tableWidget->setHorizontalHeaderLabels(header);
	ui.tableWidget_2->setHorizontalHeaderLabels(header);
	ifstream in("video.txt");
	if (!in)
	{
		cerr << "找不到源文件" << endl;
		return;
	}
	while (!in.eof())
	{
		int i = 0;
		in >> qvideo[i].num >> qvideo[i].title >> qvideo[i].author >> qvideo[i].level >> qvideo[i].pname >> qvideo[i].pyear >> qvideo[i].time;
		QString qnum(qvideo[i].num); QString qtitle(qvideo[i].title); QString qauthor(qvideo[i].author); QString qlevel(qvideo[i].level);
		QString qpname(qvideo[i].pname); QString qpyear(qvideo[i].pyear); QString qtime(qvideo[i].time);
		ui.tableWidget->setItem(i, 0, new QTableWidgetItem(qnum));
		ui.tableWidget->setItem(i, 1, new QTableWidgetItem(qtitle));
		ui.tableWidget->setItem(i, 2, new QTableWidgetItem(qauthor));
		ui.tableWidget->setItem(i, 3, new QTableWidgetItem(qlevel));
		ui.tableWidget->setItem(i, 4, new QTableWidgetItem(qpname));
		ui.tableWidget->setItem(i, 5, new QTableWidgetItem(qpyear));
		ui.tableWidget->setItem(i, 6, new QTableWidgetItem(qtime));
		i++;

	}
}

//图片
void Borrowingsystem::click_picture()
{
	ui.tableWidget->clearContents();
	QStringList header;
	header << u8"编号" << u8"标题" << u8"作者" << u8"评级" << u8"出品国籍" << u8"长" << u8"宽";
	ui.tableWidget->setHorizontalHeaderLabels(header);
	ui.tableWidget_2->setHorizontalHeaderLabels(header);
	ifstream in("picture.txt");
	if (!in)
	{
		cerr << "找不到源文件" << endl;
		return;
	}
	while (!in.eof())
	{
		int i = 0;
		in >> qpicture[i].num >> qpicture[i].title >> qpicture[i].author >> qpicture[i].level >> qpicture[i].country >> qpicture[i].length >> qpicture[i].width;
		QString qnum(qpicture[i].num); QString qtitle(qpicture[i].title); QString qauthor(qpicture[i].author); QString qlevel(qpicture[i].level);
		QString qcountry(qpicture[i].country); QString qlength(qpicture[i].length); QString qwidth(qpicture[i].width);
		ui.tableWidget->setItem(i, 0, new QTableWidgetItem(qnum));
		ui.tableWidget->setItem(i, 1, new QTableWidgetItem(qtitle));
		ui.tableWidget->setItem(i, 2, new QTableWidgetItem(qauthor));
		ui.tableWidget->setItem(i, 3, new QTableWidgetItem(qlevel));
		ui.tableWidget->setItem(i, 4, new QTableWidgetItem(qcountry));
		ui.tableWidget->setItem(i, 5, new QTableWidgetItem(qlength));
		ui.tableWidget->setItem(i, 6, new QTableWidgetItem(qwidth));
		i++;

	}
}