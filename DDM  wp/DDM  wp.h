
// DDM  wp.h : DDM  wp Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CDDMwpApp:
// �йش����ʵ�֣������ DDM  wp.cpp
//

class CDDMwpApp : public CWinAppEx
{
public:
	CDDMwpApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDDMwpApp theApp;
