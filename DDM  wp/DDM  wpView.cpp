
// DDM  wpView.cpp : CDDMwpView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CDDMwpView ����/����

CDDMwpView::CDDMwpView()
{
	// TODO:  �ڴ˴���ӹ������

}

CDDMwpView::~CDDMwpView()
{
}

BOOL CDDMwpView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CDDMwpView ����

void CDDMwpView::OnDraw(CDC* /*pDC*/)
{
	CDDMwpDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CDDMwpView ��ӡ

BOOL CDDMwpView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CDDMwpView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CDDMwpView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CDDMwpView ���

#ifdef _DEBUG
void CDDMwpView::AssertValid() const
{
	CView::AssertValid();
}

void CDDMwpView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDDMwpDoc* CDDMwpView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDDMwpDoc)));
	return (CDDMwpDoc*)m_pDocument;
}
#endif //_DEBUG


// CDDMwpView ��Ϣ�������
