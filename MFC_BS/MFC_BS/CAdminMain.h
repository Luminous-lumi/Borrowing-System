#pragma once


// CAdminMain 对话框

class CAdminMain : public CDialogEx
{
	DECLARE_DYNAMIC(CAdminMain)

public:
	CAdminMain(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CAdminMain();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADMIN_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCbnSelchangeCombo1();
};
