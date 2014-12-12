// kaelDlg.cpp : implementation file
//

#include "stdafx.h"
#include "winuser.h"
#include "kael.h"
#include "kaelDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About


//HINSTANCE g_hInstance = NULL;
HHOOK myhook;
int R_DOWNUP;
//int alt;
LRESULT CALLBACK mykeyB(int nCode,WPARAM wParam,LPARAM lParam)
{
	PKBDLLHOOKSTRUCT pVirKey = (PKBDLLHOOKSTRUCT)lParam;	
	if (WM_KEYDOWN==wParam)
	{
		//合成技能键开关
		if (pVirKey->vkCode==0x52)
		{
			//if(R_DOWNUP==0) R_DOWNUP=1;
			//else R_DOWNUP=0;
			R_DOWNUP=1;
			return 1;
		}
		/*//Alt
		if (pVirKey->vkCode==VK_MENU)
		{
			if(alt==0)
			{
				alt=1;
				keybd_event(VK_MENU,0,0,0);
			}
			else{
				alt=0;
				keybd_event(VK_MENU,0,KEYEVENTF_KEYUP,0);
			}
			return 1;
		}
		//小键盘开关
		/*if(pVirKey->vkCode==VK_TAB)
		{
			keybd_event(144,0,0,0);
			keybd_event(144,0,KEYEVENTF_KEYUP,0);
			return 1;
		}*/
		//撤销钩子
		if(pVirKey->vkCode==VK_ESCAPE)
		{
			UnhookWindowsHookEx(myhook);
			return 1;
		}
		//Ctrl+1
		/*	if(pVirKey->vkCode==17)
			{
				keybd_event(17,0,0,0);
				keybd_event(49,0,0,0);
				keybd_event(49,0,KEYEVENTF_KEYUP,0);
				keybd_event(17,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			*/
		if(R_DOWNUP==0)
		{

			//A
			if(pVirKey->vkCode==0x41)
			{
				keybd_event(0x41,0,0,0);
				keybd_event(0x41,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//B
			if (pVirKey->vkCode==0x42)
			{
				keybd_event(0x42,0,0,0);
				keybd_event(0x42,0,KEYEVENTF_KEYUP,0);
				return 1;
			}	
			//C
			if (pVirKey->vkCode==0x43)
			{
				keybd_event(0x43,0,0,0);
				keybd_event(0x43,0,KEYEVENTF_KEYUP,0);
				return 1;
			}	
			//D
			if (pVirKey->vkCode==0x44)
			{
				keybd_event(0x44,0,0,0);
				keybd_event(0x44,0,KEYEVENTF_KEYUP,0);
				return 1;
			}	
			//E
			if(pVirKey->vkCode==0x45)
			{
				keybd_event(0x45,0,0,0);
				keybd_event(0x45,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//F
			if (pVirKey->vkCode==0x46)
			{
				keybd_event(0x46,0,0,0);
				keybd_event(0x46,0,KEYEVENTF_KEYUP,0);
				return 1;
			}	
			//G
			if (pVirKey->vkCode==0x47)
			{
				keybd_event(0x47,0,0,0);
				keybd_event(0x47,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//H
			if (pVirKey->vkCode==0x48)
			{
				keybd_event(0x48,0,0,0);
				keybd_event(0x48,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//I
			if (pVirKey->vkCode==0x49)
			{
				keybd_event(0x49,0,0,0);
				keybd_event(0x49,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//J
			if (pVirKey->vkCode==0x4A)
			{
				keybd_event(0x4A,0,0,0);
				keybd_event(0x4A,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//K
			if (pVirKey->vkCode==0x4B)
			{
				keybd_event(0x4B,0,0,0);
				keybd_event(0x4B,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//L
			if (pVirKey->vkCode==0x4C)
			{
				keybd_event(0x4C,0,0,0);
				keybd_event(0x4C,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//M
			if (pVirKey->vkCode==0x4D)
			{
				keybd_event(0x4D,0,0,0);
				keybd_event(0x4D,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//N
			if (pVirKey->vkCode==0x4E)
			{
				keybd_event(0x4E,0,0,0);
				keybd_event(0x4E,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//O
			if (pVirKey->vkCode==0x4F)
			{
				keybd_event(0x4F,0,0,0);
				keybd_event(0x4F,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//P
			if (pVirKey->vkCode==0x50)
			{
				keybd_event(0x50,0,0,0);
				keybd_event(0x50,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//Q
			if(pVirKey->vkCode==0x51)
			{
				keybd_event(0x51,0,0,0);
				keybd_event(0x51,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//NO R
			//S
			if(pVirKey->vkCode==0x53)
			{
				keybd_event(0x53,0,0,0);
				keybd_event(0x53,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//T
			if (pVirKey->vkCode==0x54)
			{
				keybd_event(0x54,0,0,0);
				keybd_event(0x54,0,KEYEVENTF_KEYUP,0);
				return 1;
			}				
		    //U
			if (pVirKey->vkCode==0x55)
			{
				keybd_event(0x55,0,0,0);
				keybd_event(0x55,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//V
			if (pVirKey->vkCode==0x56)
			{
				keybd_event(0x56,0,0,0);
				keybd_event(0x56,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//W
			if(pVirKey->vkCode==0x57)
			{
				keybd_event(0x57,0,0,0);
				keybd_event(0x57,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//X
			if (pVirKey->vkCode==0x58)
			{
				keybd_event(0x58,0,0,0);
				keybd_event(0x58,0,KEYEVENTF_KEYUP,0);
				return 1;	
			}
			//Y
			if (pVirKey->vkCode==0x59)
			{
				keybd_event(0x59,0,0,0);
				keybd_event(0x59,0,KEYEVENTF_KEYUP,0);
				return 1;
			}	
			//Z
			if (pVirKey->vkCode==0x5A)
			{
				keybd_event(0x5A,0,0,0);
				keybd_event(0x5A,0,KEYEVENTF_KEYUP,0);
				return 1;
			}	
			
			
			
			//0
			if (pVirKey->vkCode==48)
			{
				keybd_event(48,0,0,0);
				keybd_event(48,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			
			//1
			if (pVirKey->vkCode==49)
			{
				keybd_event(49,0,0,0);
				keybd_event(49,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//2
			if (pVirKey->vkCode==50)
			{
				keybd_event(50,0,0,0);
				keybd_event(50,0,KEYEVENTF_KEYUP,0);
				keybd_event(VK_NUMPAD4,0,0,0);
				keybd_event(VK_NUMPAD4,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//3
			if (pVirKey->vkCode==51)
			{
				keybd_event(51,0,0,0);
				keybd_event(51,0,KEYEVENTF_KEYUP,0);
				keybd_event(103,0,0,0);
				keybd_event(103,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//4
			if (pVirKey->vkCode==52)
			{
				keybd_event(52,0,0,0);
				keybd_event(52,0,KEYEVENTF_KEYUP,0);
				keybd_event(VK_NUMPAD8,0,0,0);
				keybd_event(VK_NUMPAD8,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//5
			if (pVirKey->vkCode==53)
			{
				keybd_event(53,0,0,0);
				keybd_event(53,0,KEYEVENTF_KEYUP,0);
				keybd_event(101,0,0,0);
				keybd_event(101,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//6
			if (pVirKey->vkCode==54)
			{
				keybd_event(54,0,0,0);
				keybd_event(54,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//7
			if (pVirKey->vkCode==55)
			{
				keybd_event(55,0,0,0);
				keybd_event(55,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//8
			if (pVirKey->vkCode==56)
			{
				keybd_event(56,0,0,0);
				keybd_event(56,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//9
			if (pVirKey->vkCode==57)
			{
				keybd_event(57,0,0,0);
				keybd_event(57,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//回车键
			if (pVirKey->vkCode==VK_RETURN)
			{
				keybd_event(VK_RETURN,0,0,0);
				keybd_event(VK_RETURN,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//空格键
			if (pVirKey->vkCode==VK_SPACE)
			{
				//keybd_event(VK_SPACE,0,0,0);
				//keybd_event(VK_SPACE,0,KEYEVENTF_KEYUP,0);
				keybd_event(VK_F1,0,0,0);
				keybd_event(VK_F1,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//减号键
			if (pVirKey->vkCode==189)
			{
				keybd_event(189,0,0,0);
				keybd_event(189,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//退格键
			if (pVirKey->vkCode==8)
			{
				keybd_event(8,0,0,0);
				keybd_event(8,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//F1
			if (pVirKey->vkCode==VK_F1)
			{
				keybd_event(VK_F1,0,0,0);
				keybd_event(VK_F1,0,KEYEVENTF_KEYUP,0);
				return 1;
			}
			//F2
			if (pVirKey->vkCode==VK_F2)
			{
				keybd_event(VK_F2,0,0,0);
				keybd_event(VK_F2,0,KEYEVENTF_KEYUP,0);
				return 1;
			}


			//return CallNextHookEx(myhook,nCode,wParam,lParam);
		}
		else{
			//EEER T
			if (pVirKey->vkCode==0x54)
			{
				keybd_event(0x45,0,0,0);
				keybd_event(0x45,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x45,0,0,0);
				keybd_event(0x45,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x45,0,0,0);
				keybd_event(0x45,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x52,0,0,0);
				keybd_event(0x52,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x54,0,0,0);
				keybd_event(0x54,0,KEYEVENTF_KEYUP,0);
				R_DOWNUP=0;
				return 1;
			}
			//EEWR D
			if (pVirKey->vkCode==0x44)
			{
				keybd_event(0x45,0,0,0);
				keybd_event(0x45,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x45,0,0,0);
				keybd_event(0x45,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x57,0,0,0);
				keybd_event(0x57,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x52,0,0,0);
				keybd_event(0x52,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x44,0,0,0);
				keybd_event(0x44,0,KEYEVENTF_KEYUP,0);
				R_DOWNUP=0;	
				return 1;
			}	
			//EEQR F
			if (pVirKey->vkCode==0x46)
			{
				keybd_event(0x45,0,0,0);
				keybd_event(0x45,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x45,0,0,0);
				keybd_event(0x45,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x51,0,0,0);
				keybd_event(0x51,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x52,0,0,0);
				keybd_event(0x52,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x46,0,0,0);
				keybd_event(0x46,0,KEYEVENTF_KEYUP,0);
				R_DOWNUP=0;
				return 1;
			}	
			//QWER B
			if (pVirKey->vkCode==0x42)
			{
				keybd_event(0x51,0,0,0);
				keybd_event(0x51,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x57,0,0,0);
				keybd_event(0x57,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x45,0,0,0);
				keybd_event(0x45,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x52,0,0,0);
				keybd_event(0x52,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x42,0,0,0);
				keybd_event(0x42,0,KEYEVENTF_KEYUP,0);
				R_DOWNUP=0;
				return 1;
			}	
			//WWWR C
			if (pVirKey->vkCode==0x43)
			{
				keybd_event(0x57,0,0,0);
				keybd_event(0x57,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x57,0,0,0);
				keybd_event(0x57,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x57,0,0,0);
				keybd_event(0x57,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x52,0,0,0);
				keybd_event(0x52,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x43,0,0,0);
				keybd_event(0x43,0,KEYEVENTF_KEYUP,0);
				R_DOWNUP=0;
				return 1;
			}	
			//WWER Z
			if (pVirKey->vkCode==0x5A)
			{
				keybd_event(0x57,0,0,0);
				keybd_event(0x57,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x57,0,0,0);
				keybd_event(0x57,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x45,0,0,0);
				keybd_event(0x45,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x52,0,0,0);
				keybd_event(0x52,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x5A,0,0,0);
				keybd_event(0x5A,0,KEYEVENTF_KEYUP,0);
				R_DOWNUP=0;
				return 1;
			}	
			//WWQR X
			if (pVirKey->vkCode==0x58)
			{
				keybd_event(0x57,0,0,0);
				keybd_event(0x57,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x57,0,0,0);
				keybd_event(0x57,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x51,0,0,0);
				keybd_event(0x51,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x52,0,0,0);
				keybd_event(0x52,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x58,0,0,0);
				keybd_event(0x58,0,KEYEVENTF_KEYUP,0);
				R_DOWNUP=0;
				return 1;
			}	
			//QQWR V
			if (pVirKey->vkCode==0x56)
			{
				keybd_event(0x51,0,0,0);
				keybd_event(0x51,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x51,0,0,0);
				keybd_event(0x51,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x57,0,0,0);
				keybd_event(0x57,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x52,0,0,0);
				keybd_event(0x52,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x56,0,0,0);
				keybd_event(0x56,0,KEYEVENTF_KEYUP,0);
				R_DOWNUP=0;
				return 1;
			}	
			//QQQR Y
			if (pVirKey->vkCode==0x59)
			{
				keybd_event(0x51,0,0,0);
				keybd_event(0x51,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x51,0,0,0);
				keybd_event(0x51,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x51,0,0,0);
				keybd_event(0x51,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x52,0,0,0);
				keybd_event(0x52,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x59,0,0,0);
				keybd_event(0x59,0,KEYEVENTF_KEYUP,0);
				R_DOWNUP=0;
				return 1;
			}	
			//QQER G
			if (pVirKey->vkCode==0x47)
			{
				keybd_event(0x51,0,0,0);
				keybd_event(0x51,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x51,0,0,0);
				keybd_event(0x51,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x45,0,0,0);
				keybd_event(0x45,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x52,0,0,0);
				keybd_event(0x52,0,KEYEVENTF_KEYUP,0);
				keybd_event(0x47,0,0,0);
				keybd_event(0x47,0,KEYEVENTF_KEYUP,0);
				R_DOWNUP=0;
				return 1;
			}	
		}
	}

}


class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CKaelDlg dialog

CKaelDlg::CKaelDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CKaelDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CKaelDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	myhook=NULL;
}

void CKaelDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CKaelDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CKaelDlg, CDialog)
	//{{AFX_MSG_MAP(CKaelDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CKaelDlg message handlers

BOOL CKaelDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CKaelDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CKaelDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CKaelDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CKaelDlg::OnOK() 
{
	// TODO: Add extra validation here
	myhook=SetWindowsHookEx(WH_KEYBOARD_LL,mykeyB,GetModuleHandle("kael"),0);
    R_DOWNUP=0;
	//CDialog::OnOK();
}

void CKaelDlg::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	UnhookWindowsHookEx(myhook);
	exit(0);
	//CDialog::OnCancel();
}
