// CAdminMain.cpp: 实现文件
//

#include "stdafx.h"
#include "CAdminMain.h"
#include "afxdialogex.h"
#include"resource.h"

// CAdminMain 对话框

IMPLEMENT_DYNAMIC(CAdminMain, CDialogEx)

CAdminMain::CAdminMain(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ADMIN_DIALOG, pParent)
{

}

CAdminMain::~CAdminMain()
{
}

void CAdminMain::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CAdminMain, CDialogEx)
	ON_CBN_SELCHANGE(IDC_COMBO1, &CAdminMain::OnCbnSelchangeCombo1)
END_MESSAGE_MAP()


// CAdminMain 消息处理程序


void CAdminMain::OnCbnSelchangeCombo1()
{
	// TODO: 在此添加控件通知处理程序代码
}
