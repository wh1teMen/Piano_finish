#include<iostream>
#include<windows.h>
#include<conio.h>
#include "Piano.h"
#include"PianoDefine.h"
#include"PianoKey.h"


using namespace std;
void GoToXY(short x, short y)
{
	SetConsoleCursorPosition(console, { x, y });
}
void ConsoleCursorVisible(bool show){
	CONSOLE_CURSOR_INFO structCursorInfo;
	GetConsoleCursorInfo(console, &structCursorInfo);
	structCursorInfo.bVisible = show; 
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
void drawingApiano() {
	for (int i = 0; i < 7; i++) {
		if (i == activ_piano) SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		else 	SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		for (int j = 0; j < 7; j++) {
			cout << "|##|";
		}
		cout << endl;
	}

}
void panel() {
	cout << "[Z] " << "[X] " << "[C] " << "[V] " << "[B] " << "[N] " << "[M] " << endl;
	cout << "\n\nДля выхода нажмите ESC" << endl;
}
void while_() {
	while (true) {
		drawingApiano();
		panel();
		ch = _getch();
		switch (ch)
		{
			//exit button
		case ESC:
			bye();
			exit(false);
			break;
		case Z:
			z_();
			break;
		case X:
			x_();
			break;
		case C:
			c_();
			break;
		case V:
			v_();
			break;
		case B:
			b_();
			break;
		case N:
			n_();
			break;
		case M:
			m_();
			break;
		}

	}
}