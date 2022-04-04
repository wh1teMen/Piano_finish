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
	structCursorInfo.bVisible = show; // изменяем видимость курсора
	SetConsoleCursorInfo(console, &structCursorInfo);
}
void hello() {
	string hello[5] = { "Итоговая Работа!","Создатель: Белов Александр Сергеевич","Группа: БВ-112","Название: Фортепиано.","Для продолжения нажмите любую клавишу....." };
	for (int i = 0; i < 5; i++) {
		cout << hello[i] << endl;

	}
	system("pause>nul");
	clear;
}
