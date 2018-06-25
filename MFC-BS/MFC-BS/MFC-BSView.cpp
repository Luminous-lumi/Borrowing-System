
// MFC-BSView.cpp: CMFCBSView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC-BS.h"
#endif

#include "MFC-BSDoc.h"
#include "MFC-BSView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCBSView

IMPLEMENT_DYNCREATE(CMFCBSView, CView)

BEGIN_MESSAGE_MAP(CMFCBSView, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CMFCBSView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CMFCBSView 构造/析构

CMFCBSView::CMFCBSView()
{
	// TODO: 在此处添加构造代码

}

CMFCBSView::~CMFCBSView()
{
}

BOOL CMFCBSView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCBSView 绘图

void CMFCBSView::OnDraw(CDC* /*pDC*/)
{
	CMFCBSDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCBSView 打印


void CMFCBSView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CMFCBSView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFCBSView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMFCBSView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}

void CMFCBSView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CMFCBSView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CMFCBSView 诊断

#ifdef _DEBUG
void CMFCBSView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCBSView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCBSDoc* CMFCBSView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCBSDoc)));
	return (CMFCBSDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFCBSView 消息处理程序
