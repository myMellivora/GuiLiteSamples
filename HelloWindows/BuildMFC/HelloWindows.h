
// HelloWindows.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CHelloWindowsApp:
// See HelloWindows.cpp for the implementation of this class
//

class CHelloWindowsApp : public CWinApp
{
public:
	CHelloWindowsApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CHelloWindowsApp theApp;
