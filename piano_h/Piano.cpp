#include<iostream>
#include<windows.h>
#include<conio.h>
#include "Piano.h"
using namespace std;
void GoToXY(short x, short y)
{
	SetConsoleCursorPosition(console, { x, y });
}
void ConsoleCursorVisible(bool show){
	CONSOLE_CURSOR_INFO structCursorInfo;
	GetConsoleCursorInfo(console, &structCursorInfo);
	structCursorInfo.bVisible = show; // �������� ��������� �������
	SetConsoleCursorInfo(console, &structCursorInfo);
}
void hello() {
	string hello[5] = { "�������� ������!","���������: ����� ��������� ���������","������: ��-112","��������: ����������.","��� ����������� ������� ����� �������....." };
	for (int i = 0; i < 5; i++) {
		cout << hello[i] << endl;

	}
	system("pause>nul");
	clear;
}
