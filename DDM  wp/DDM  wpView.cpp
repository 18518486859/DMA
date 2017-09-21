
// DDM  wpView.cpp : CDDMwpView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "DDM  wp.h"
#endif

#include "DDM  wpDoc.h"
#include "DDM  wpView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDDMwpView

IMPLEMENT_DYNCREATE(CDDMwpView, CView)

BEGIN_MESSAGE_MAP(CDDMwpView, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CDDMwpView 构造/析构

CDDMwpView::CDDMwpView()
{
	// TODO:  在此处添加构造代码

}

CDDMwpView::~CDDMwpView()
{
}

BOOL CDDMwpView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CDDMwpView 绘制

void CDDMwpView::OnDraw(CDC* /*pDC*/)
{
	CDDMwpDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CDDMwpView 打印

BOOL CDDMwpView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CDDMwpView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CDDMwpView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CDDMwpView 诊断

#ifdef _DEBUG
void CDDMwpView::AssertValid() const
{
	CView::AssertValid();
}

void CDDMwpView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDDMwpDoc* CDDMwpView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDDMwpDoc)));
	return (CDDMwpDoc*)m_pDocument;
}
#endif //_DEBUG


// CDDMwpView 消息处理程序
