#pragma once


// CLoginDialog 对话框

class CLoginDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CLoginDialog)

public:
	CLoginDialog(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CLoginDialog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LOGIN_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
private:
	// 账号
	CString bs_account;
	// 密码
	CString bs_password;
public:
	afx_msg void OnBnClickedOk();
};
