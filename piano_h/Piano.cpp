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
	string hello[3] = { "\t  Итоговая Работа!","\n\tНазвание: Фортепиано.","\n\n\n\nДля продолжения нажмите любую клавишу....." };
	for (int i = 0; i < 3; i++) {
		cout << hello[i] << endl;

	}
	system("pause>nul");
	clear;
}
void bye() {
	clear;
	string bye[3] = { "Создатель:\nБелов Александр Сергеевич","Группа: БВ-112","Спасибо за внимание!!!" };
	for (int i = 0; i < 3; i++)
		cout << bye[i] << endl;
	system("pause>nul");
}
