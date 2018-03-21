
// windows functionDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "windows function.h"
#include "windows functionDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CwindowsfunctionDlg 对话框



CwindowsfunctionDlg::CwindowsfunctionDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_WINDOWSFUNCTION_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CwindowsfunctionDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CwindowsfunctionDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CwindowsfunctionDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CwindowsfunctionDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON26, &CwindowsfunctionDlg::OnBnClickedButton26)
	ON_BN_CLICKED(IDC_BUTTON4, &CwindowsfunctionDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CwindowsfunctionDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CwindowsfunctionDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CwindowsfunctionDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CwindowsfunctionDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CwindowsfunctionDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CwindowsfunctionDlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &CwindowsfunctionDlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &CwindowsfunctionDlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &CwindowsfunctionDlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &CwindowsfunctionDlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &CwindowsfunctionDlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &CwindowsfunctionDlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON17, &CwindowsfunctionDlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON18, &CwindowsfunctionDlg::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON19, &CwindowsfunctionDlg::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON20, &CwindowsfunctionDlg::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON21, &CwindowsfunctionDlg::OnBnClickedButton21)
	ON_BN_CLICKED(IDC_BUTTON22, &CwindowsfunctionDlg::OnBnClickedButton22)
	ON_BN_CLICKED(IDC_BUTTON23, &CwindowsfunctionDlg::OnBnClickedButton23)
	ON_BN_CLICKED(IDC_BUTTON24, &CwindowsfunctionDlg::OnBnClickedButton24)
	ON_BN_CLICKED(IDC_BUTTON25, &CwindowsfunctionDlg::OnBnClickedButton25)
	ON_BN_CLICKED(IDC_BUTTON27, &CwindowsfunctionDlg::OnBnClickedButton27)
	ON_BN_CLICKED(IDC_BUTTON28, &CwindowsfunctionDlg::OnBnClickedButton28)
	ON_BN_CLICKED(IDC_BUTTON29, &CwindowsfunctionDlg::OnBnClickedButton29)
	ON_BN_CLICKED(IDC_BUTTON30, &CwindowsfunctionDlg::OnBnClickedButton30)
	ON_BN_CLICKED(IDC_BUTTON31, &CwindowsfunctionDlg::OnBnClickedButton31)
	ON_BN_CLICKED(IDC_BUTTON32, &CwindowsfunctionDlg::OnBnClickedButton32)
	ON_BN_CLICKED(IDC_BUTTON33, &CwindowsfunctionDlg::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON34, &CwindowsfunctionDlg::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON35, &CwindowsfunctionDlg::OnBnClickedButton35)
	ON_BN_CLICKED(IDC_BUTTON36, &CwindowsfunctionDlg::OnBnClickedButton36)
	ON_BN_CLICKED(IDC_BUTTON37, &CwindowsfunctionDlg::OnBnClickedButton37)
	ON_BN_CLICKED(IDC_BUTTON3, &CwindowsfunctionDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON45, &CwindowsfunctionDlg::OnBnClickedButton45)
	ON_BN_CLICKED(IDC_BUTTON46, &CwindowsfunctionDlg::OnBnClickedButton46)
	ON_BN_CLICKED(IDC_BUTTON47, &CwindowsfunctionDlg::OnBnClickedButton47)
	ON_BN_CLICKED(IDC_BUTTON48, &CwindowsfunctionDlg::OnBnClickedButton48)
	ON_BN_CLICKED(IDC_BUTTON49, &CwindowsfunctionDlg::OnBnClickedButton49)
	ON_BN_CLICKED(IDC_BUTTON50, &CwindowsfunctionDlg::OnBnClickedButton50)
	ON_BN_CLICKED(IDC_BUTTON38, &CwindowsfunctionDlg::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON39, &CwindowsfunctionDlg::OnBnClickedButton39)
	ON_BN_CLICKED(IDC_BUTTON40, &CwindowsfunctionDlg::OnBnClickedButton40)
	ON_BN_CLICKED(IDC_BUTTON41, &CwindowsfunctionDlg::OnBnClickedButton41)
	ON_BN_CLICKED(IDC_BUTTON42, &CwindowsfunctionDlg::OnBnClickedButton42)
	ON_BN_CLICKED(IDC_BUTTON43, &CwindowsfunctionDlg::OnBnClickedButton43)
	ON_BN_CLICKED(IDC_BUTTON44, &CwindowsfunctionDlg::OnBnClickedButton44)
	ON_BN_CLICKED(IDC_BUTTON51, &CwindowsfunctionDlg::OnBnClickedButton51)
	ON_BN_CLICKED(IDC_BUTTON52, &CwindowsfunctionDlg::OnBnClickedButton52)
	ON_BN_CLICKED(IDC_BUTTON53, &CwindowsfunctionDlg::OnBnClickedButton53)
	ON_BN_CLICKED(IDC_BUTTON54, &CwindowsfunctionDlg::OnBnClickedButton54)
	ON_BN_CLICKED(IDC_BUTTON55, &CwindowsfunctionDlg::OnBnClickedButton55)
	ON_BN_CLICKED(IDC_BUTTON56, &CwindowsfunctionDlg::OnBnClickedButton56)
	ON_BN_CLICKED(IDC_BUTTON57, &CwindowsfunctionDlg::OnBnClickedButton57)
	ON_BN_CLICKED(IDC_BUTTON58, &CwindowsfunctionDlg::OnBnClickedButton58)
	ON_BN_CLICKED(IDC_BUTTON59, &CwindowsfunctionDlg::OnBnClickedButton59)
	ON_BN_CLICKED(IDC_BUTTON60, &CwindowsfunctionDlg::OnBnClickedButton60)
	ON_BN_CLICKED(IDC_BUTTON61, &CwindowsfunctionDlg::OnBnClickedButton61)
	ON_BN_CLICKED(IDC_BUTTON62, &CwindowsfunctionDlg::OnBnClickedButton62)
	ON_BN_CLICKED(IDC_BUTTON63, &CwindowsfunctionDlg::OnBnClickedButton63)
	ON_BN_CLICKED(IDC_BUTTON64, &CwindowsfunctionDlg::OnBnClickedButton64)
	ON_BN_CLICKED(IDC_BUTTON65, &CwindowsfunctionDlg::OnBnClickedButton65)
	ON_BN_CLICKED(IDC_BUTTON66, &CwindowsfunctionDlg::OnBnClickedButton66)
	ON_BN_CLICKED(IDC_BUTTON67, &CwindowsfunctionDlg::OnBnClickedButton67)
	ON_BN_CLICKED(IDC_BUTTON68, &CwindowsfunctionDlg::OnBnClickedButton68)
	ON_BN_CLICKED(IDC_BUTTON69, &CwindowsfunctionDlg::OnBnClickedButton69)
	ON_BN_CLICKED(IDC_BUTTON70, &CwindowsfunctionDlg::OnBnClickedButton70)
	ON_BN_CLICKED(IDC_BUTTON71, &CwindowsfunctionDlg::OnBnClickedButton71)
	ON_BN_CLICKED(IDC_BUTTON72, &CwindowsfunctionDlg::OnBnClickedButton72)
	ON_BN_CLICKED(IDC_BUTTON73, &CwindowsfunctionDlg::OnBnClickedButton73)
	ON_BN_CLICKED(IDC_BUTTON74, &CwindowsfunctionDlg::OnBnClickedButton74)
	ON_BN_CLICKED(IDC_BUTTON75, &CwindowsfunctionDlg::OnBnClickedButton75)
	ON_BN_CLICKED(IDC_BUTTON76, &CwindowsfunctionDlg::OnBnClickedButton76)
	ON_BN_CLICKED(IDC_BUTTON77, &CwindowsfunctionDlg::OnBnClickedButton77)
END_MESSAGE_MAP()


// CwindowsfunctionDlg 消息处理程序

BOOL CwindowsfunctionDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	ShowWindow(SW_MINIMIZE);

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CwindowsfunctionDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CwindowsfunctionDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CwindowsfunctionDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CwindowsfunctionDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	system("calc");
}


void CwindowsfunctionDlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	system("appwiz.cpl");
}


void CwindowsfunctionDlg::OnBnClickedButton26()
{
	// TODO: 在此添加控件通知处理程序代码
	system("dvdplay");
}


void CwindowsfunctionDlg::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	system("charmap");
}


void CwindowsfunctionDlg::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	system("chkdsk.exe");
}


void CwindowsfunctionDlg::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	
	system("cleanmgr");
}


void CwindowsfunctionDlg::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	system("cliconfg");
}


void CwindowsfunctionDlg::OnBnClickedButton8()
{
	// TODO: 在此添加控件通知处理程序代码
	system("cmstp");
}


void CwindowsfunctionDlg::OnBnClickedButton9()
{
	// TODO: 在此添加控件通知处理程序代码
	system("shutdown -s -t 600");
}


void CwindowsfunctionDlg::OnBnClickedButton10()
{
	// TODO: 在此添加控件通知处理程序代码
	system("shutdown -r -t 600");
}


void CwindowsfunctionDlg::OnBnClickedButton11()
{
	// TODO: 在此添加控件通知处理程序代码
	system("shutdown -a");
}


void CwindowsfunctionDlg::OnBnClickedButton12()
{
	// TODO: 在此添加控件通知处理程序代码
	system("rundll32 user32.dll,LockWorkStation");
}


void CwindowsfunctionDlg::OnBnClickedButton13()
{
	// TODO: 在此添加控件通知处理程序代码
	system("colorcpl");
}


void CwindowsfunctionDlg::OnBnClickedButton14()
{
	// TODO: 在此添加控件通知处理程序代码
	system("compmgmtlauncher");
}


void CwindowsfunctionDlg::OnBnClickedButton15()
{

	// TODO: 在此添加控件通知处理程序代码
	system("credwiz");
}


void CwindowsfunctionDlg::OnBnClickedButton16()
{
	// TODO: 在此添加控件通知处理程序代码
	system("comexp.msc");
	//dcomcnfg
}


void CwindowsfunctionDlg::OnBnClickedButton17()
{

	
	// TODO: 在此添加控件通知处理程序代码
	system("control");
}


void CwindowsfunctionDlg::OnBnClickedButton18()
{
	// TODO: 在此添加控件通知处理程序代码
	system("write");

}


void CwindowsfunctionDlg::OnBnClickedButton19()
{
	// TODO: 在此添加控件通知处理程序代码
	system("Dccw");

}


void CwindowsfunctionDlg::OnBnClickedButton20()
{
	// TODO: 在此添加控件通知处理程序代码
	system("devmgmt.msc");

}


void CwindowsfunctionDlg::OnBnClickedButton21()
{
	// TODO: 在此添加控件通知处理程序代码
	system("desk.cpl");

}


void CwindowsfunctionDlg::OnBnClickedButton22()
{
	// TODO: 在此添加控件通知处理程序代码
	system("StikyNot");
}


void CwindowsfunctionDlg::OnBnClickedButton23()
{
	// TODO: 在此添加控件通知处理程序代码
	system("dfrgui");
}


void CwindowsfunctionDlg::OnBnClickedButton24()
{
	// TODO: 在此添加控件通知处理程序代码
	system("dialer");
}


void CwindowsfunctionDlg::OnBnClickedButton25()
{
	// TODO: 在此添加控件通知处理程序代码
	system("diskmgmt.msc");
}


void CwindowsfunctionDlg::OnBnClickedButton27()
{
	// TODO: 在此添加控件通知处理程序代码
	system("dxdiag");
}


void CwindowsfunctionDlg::OnBnClickedButton28()
{
	// TODO: 在此添加控件通知处理程序代码
	system("eudcedit");
}


void CwindowsfunctionDlg::OnBnClickedButton29()
{
	// TODO: 在此添加控件通知处理程序代码
	system("eventvwr");
}


void CwindowsfunctionDlg::OnBnClickedButton30()
{
	// TODO: 在此添加控件通知处理程序代码
	system("explorer");
}


void CwindowsfunctionDlg::OnBnClickedButton31()
{
	// TODO: 在此添加控件通知处理程序代码
	system("Firewall.cpl");
}


void CwindowsfunctionDlg::OnBnClickedButton32()
{
	// TODO: 在此添加控件通知处理程序代码
	system("FXSCOVER");
}


void CwindowsfunctionDlg::OnBnClickedButton33()
{
	// TODO: 在此添加控件通知处理程序代码
	system("fsmgmt.msc");
}


void CwindowsfunctionDlg::OnBnClickedButton34()
{
	// TODO: 在此添加控件通知处理程序代码
	system("gpedit.msc");
}


void CwindowsfunctionDlg::OnBnClickedButton35()
{
	// TODO: 在此添加控件通知处理程序代码
	system("hdwwiz.cpl");
}


void CwindowsfunctionDlg::OnBnClickedButton36()
{
	// TODO: 在此添加控件通知处理程序代码
	system("inetcpl.cpl");
}


void CwindowsfunctionDlg::OnBnClickedButton37()
{
	// TODO: 在此添加控件通知处理程序代码
	system("intl.cpl");
}


void CwindowsfunctionDlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	system("certmgr.msc");
}


void CwindowsfunctionDlg::OnBnClickedButton45()
{
	// TODO: 在此添加控件通知处理程序代码
	system("magnify");
}


void CwindowsfunctionDlg::OnBnClickedButton46()
{
	// TODO: 在此添加控件通知处理程序代码
	system("MdSched");
}


void CwindowsfunctionDlg::OnBnClickedButton47()
{
	// TODO: 在此添加控件通知处理程序代码
	system("mmc");
}


void CwindowsfunctionDlg::OnBnClickedButton48()
{
	// TODO: 在此添加控件通知处理程序代码
	system("mobsync");
}


void CwindowsfunctionDlg::OnBnClickedButton49()
{
	// TODO: 在此添加控件通知处理程序代码
	system("Msconfig");
}


void CwindowsfunctionDlg::OnBnClickedButton50()
{
	// TODO: 在此添加控件通知处理程序代码
	system("certmgr.msc");
}


void CwindowsfunctionDlg::OnBnClickedButton38()
{
	// TODO: 在此添加控件通知处理程序代码
	system("iexpress");
}


void CwindowsfunctionDlg::OnBnClickedButton39()
{
	// TODO: 在此添加控件通知处理程序代码
	
	system("joy.cpl");
}


void CwindowsfunctionDlg::OnBnClickedButton40()
{
	// TODO: 在此添加控件通知处理程序代码
	system("logoff");
}


void CwindowsfunctionDlg::OnBnClickedButton41()
{
	// TODO: 在此添加控件通知处理程序代码
	system("lusrmgr.msc");
}


void CwindowsfunctionDlg::OnBnClickedButton42()
{
	// TODO: 在此添加控件通知处理程序代码
	system("lpksetup");
}


void CwindowsfunctionDlg::OnBnClickedButton43()
{
	// TODO: 在此添加控件通知处理程序代码
	system("main.cpl");
}


void CwindowsfunctionDlg::OnBnClickedButton44()
{
	// TODO: 在此添加控件通知处理程序代码
	system("mmsys.cpl");
}


void CwindowsfunctionDlg::OnBnClickedButton51()
{
	// TODO: 在此添加控件通知处理程序代码
	system("msinfo32");
}


void CwindowsfunctionDlg::OnBnClickedButton52()
{
	// TODO: 在此添加控件通知处理程序代码
	system("mspaint");
}


void CwindowsfunctionDlg::OnBnClickedButton53()
{
	// TODO: 在此添加控件通知处理程序代码
	system("Msra");
}


void CwindowsfunctionDlg::OnBnClickedButton54()
{
	// TODO: 在此添加控件通知处理程序代码
	system("mstsc");
}


void CwindowsfunctionDlg::OnBnClickedButton55()
{
	// TODO: 在此添加控件通知处理程序代码
	system("lpksetup");
}


void CwindowsfunctionDlg::OnBnClickedButton56()
{
	// TODO: 在此添加控件通知处理程序代码
	system("ncpa.cpl");
}


void CwindowsfunctionDlg::OnBnClickedButton57()
{
	// TODO: 在此添加控件通知处理程序代码
	system("Netplwiz");
}


void CwindowsfunctionDlg::OnBnClickedButton58()
{
	// TODO: 在此添加控件通知处理程序代码
	system("netstat");
}


void CwindowsfunctionDlg::OnBnClickedButton59()
{
	// TODO: 在此添加控件通知处理程序代码
	system("notepad");
}


void CwindowsfunctionDlg::OnBnClickedButton60()
{
	// TODO: 在此添加控件通知处理程序代码
	system("Nslookup");
}


void CwindowsfunctionDlg::OnBnClickedButton61()
{
	// TODO: 在此添加控件通知处理程序代码
	system("OptionalFeatures");
}


void CwindowsfunctionDlg::OnBnClickedButton62()
{
	// TODO: 在此添加控件通知处理程序代码
	system("osk");
}


void CwindowsfunctionDlg::OnBnClickedButton63()
{
	// TODO: 在此添加控件通知处理程序代码
	system("perfmon.msc");
}


void CwindowsfunctionDlg::OnBnClickedButton64()
{
	// TODO: 在此添加控件通知处理程序代码
	system("PowerShell");
}


void CwindowsfunctionDlg::OnBnClickedButton65()
{
	// TODO: 在此添加控件通知处理程序代码
	system("powercfg.cpl");
}


void CwindowsfunctionDlg::OnBnClickedButton66()
{
	// TODO: 在此添加控件通知处理程序代码
	system("psr");
}


void CwindowsfunctionDlg::OnBnClickedButton67()
{
	// TODO: 在此添加控件通知处理程序代码
	system("Recdisc");
}


void CwindowsfunctionDlg::OnBnClickedButton68()
{
	// TODO: 在此添加控件通知处理程序代码
	system("Resmon");
}


void CwindowsfunctionDlg::OnBnClickedButton69()
{
	// TODO: 在此添加控件通知处理程序代码
	system("Rstrui");
}


void CwindowsfunctionDlg::OnBnClickedButton70()
{
	// TODO: 在此添加控件通知处理程序代码
	system("regedt32");
}


void CwindowsfunctionDlg::OnBnClickedButton71()
{
	// TODO: 在此添加控件通知处理程序代码
	system("rsop.msc");
}


void CwindowsfunctionDlg::OnBnClickedButton72()
{
	// TODO: 在此添加控件通知处理程序代码
	system("snippingtool");
}


void CwindowsfunctionDlg::OnBnClickedButton73()
{
	// TODO: 在此添加控件通知处理程序代码
	system("soundrecorder");
}


void CwindowsfunctionDlg::OnBnClickedButton74()
{
	// TODO: 在此添加控件通知处理程序代码
	system("winver");
}


void CwindowsfunctionDlg::OnBnClickedButton75()
{
	// TODO: 在此添加控件通知处理程序代码
	system("wscui.cpl");
}


void CwindowsfunctionDlg::OnBnClickedButton76()
{
	// TODO: 在此添加控件通知处理程序代码
	system("wscript");
}


void CwindowsfunctionDlg::OnBnClickedButton77()
{
	// TODO: 在此添加控件通知处理程序代码
	system("sysdm.cpl");
}
