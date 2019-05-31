
// MFCApplication333.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMFCApplication333App:
// See MFCApplication333.cpp for the implementation of this class
//

class CMFCApplication333App : public CWinApp
{
public:
	CMFCApplication333App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication333App theApp;
