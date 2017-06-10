#pragma once  //______________________________________ Feet.h  
#include "Resource.h"
class Feet: public Win::Dialog
{
public:
	Feet()
	{
	}
	~Feet()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxEntrada;
	Win::Textbox tbxFt;
	Win::Textbox tbxIn;
	Win::Button btClick;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(13.57312);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(2.06375);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Feet";
		lb1.CreateX(NULL, L"Inches", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 1.37583, 0.89958, 2.01083, 0.60854, hWnd, 1000);
		tbxEntrada.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 4.12750, 0.82021, 2.67229, 0.60854, hWnd, 1001);
		tbxFt.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 10.39813, 0.50271, 2.96333, 0.60854, hWnd, 1002);
		tbxIn.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 10.34521, 1.27000, 3.04271, 0.60854, hWnd, 1003);
		btClick.CreateX(NULL, L">>", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 7.27604, 0.82021, 2.80458, 0.68792, hWnd, 1004);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		lb1.Font = fontArial009A;
		tbxEntrada.Font = fontArial009A;
		tbxFt.Font = fontArial009A;
		tbxIn.Font = fontArial009A;
		btClick.Font = fontArial009A;
	}
	//_________________________________________________
	void btClick_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btClick.IsEvent(e, BN_CLICKED)) {btClick_Click(e); return true;}
		return false;
	}
};
