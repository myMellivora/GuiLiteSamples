
// HelloMarioDlg.h : header file
//

#pragma once
extern "C" void startHelloMario(void* phy_fb, int width, int height, int color_bytes, struct DISPLAY_DRIVER* driver);
void sendTouch2HelloMario(int x, int y, bool is_down);

typedef struct tagMYBITMAPINFO {
	BITMAPINFOHEADER    bmiHeader;
	DWORD				biRedMask;
	DWORD				biGreenMask;
	DWORD				biBlueMask;
} MYBITMAPINFO;

// CHelloMarioDlg dialog
class CHelloMarioDlg : public CDialogEx
{
// Construction
public:
	CHelloMarioDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_HelloMario_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	DECLARE_MESSAGE_MAP()

private:
	static void draw_pixel(int x, int y, unsigned int rgb);
	static void fill_rect(int x0, int y0, int x1, int y1, unsigned int rgb);
	static UINT ThreadHelloMario(LPVOID pParam);
	static CHelloMarioDlg* m_the_dialog;
	static CRITICAL_SECTION m_criSection;
};
