#pragma once
#include <iostream>
#include <Windows.h>
#include <Shlwapi.h>
#include <conio.h>

void resizeConsole(SHORT width, SHORT height);
void clrscr(void);
void gotoXY(SHORT x, SHORT y);
SHORT wherex();
SHORT wherey();
void setColor(WORD color);
void setBackgroundColor(WORD color);
void setColorBGTextXY(SHORT x, SHORT y, WORD color, WORD background, LPSTR str, ...);
void Cursor(BOOL bVisible = TRUE, DWORD dwSize = 25);
void deleteRow(SHORT SStartPos, SHORT SNumberRow);
void Tao_mau_o(int x , int y , int t_color , int b_color , string name)
{
	setBackgroundColor(b_color);
	int len = name.length();
	setColor(t_color);
	for(int i = 0 ; i < len ; ++i)
	{
		gotoXY(x + i, y);
		cout << " ";
	}
	gotoXY(x , y) ; cout << name;
	setBackgroundColor(1);
}

