
// DDM  wpView.h : CDDMwpView ��Ľӿ�
//

#pragma once


class CDDMwpView : public CView
{
protected: // �������л�����
	CDDMwpView();
	DECLARE_DYNCREATE(CDDMwpView)

// ����
public:
	CDDMwpDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CDDMwpView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // DDM  wpView.cpp �еĵ��԰汾
inline CDDMwpDoc* CDDMwpView::GetDocument() const
   { return reinterpret_cast<CDDMwpDoc*>(m_pDocument); }
#endif

