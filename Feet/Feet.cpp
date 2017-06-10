#include "stdafx.h"  //________________________________________ Feet.cpp
#include "Feet.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Feet app;
	return app.BeginDialog(IDI_Feet, hInstance);
}

void Feet::Window_Open(Win::Event& e)
{
}

void Feet::btClick_Click(Win::Event& e)
{
	const int input = this-> tbxEntrada.IntValue;
	int ft = input / 12;
	int ini = input % 12;
	tbxFt.IntValue = ft;
	tbxIn.IntValue = ini;

	
}

