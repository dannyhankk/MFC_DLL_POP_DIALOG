#pragma once


// DailogTest dialog

class DailogTest : public CDialogEx
{
	DECLARE_DYNAMIC(DailogTest)

public:
	DailogTest(CWnd* pParent = NULL);   // standard constructor
	virtual ~DailogTest();

// Dialog Data
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
