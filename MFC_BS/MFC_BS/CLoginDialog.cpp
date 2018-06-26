// CLoginDialog.cpp: 实现文件
//

#include "stdafx.h"
#include "CLoginDialog.h"
#include "afxdialogex.h"
#include"resource.h"
#include"CAdminMain.h"
// CLoginDialog 对话框

IMPLEMENT_DYNAMIC(CLoginDialog, CDialogEx)

CLoginDialog::CLoginDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_LOGIN_DIALOG, pParent)
	, bs_account(_T(""))
	, bs_password(_T(""))
{

}

CLoginDialog::~CLoginDialog()
{
}

void CLoginDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_ACCOUNT_EDIT, bs_account);
	DDX_Text(pDX, IDC_PASSWORD_EDIT, bs_password);
}


BEGIN_MESSAGE_MAP(CLoginDialog, CDialogEx)
	ON_BN_CLICKED(IDOK, &CLoginDialog::OnBnClickedOk)
END_MESSAGE_MAP()


// CLoginDialog 消息处理程序

CString admin_account = _T("admin");
CString admin_password = _T("ujs");

// CLoginDialog 消息处理程序

void CLoginDialog::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
	if (bs_account == admin_account && bs_password == admin_password)
	{
		INT_PTR nRes;
		CAdminMain admin1;
		nRes=admin1.DoModal();
		if (IDCANCEL == nRes)
			return;
	}
}
