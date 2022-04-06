#include<iostream>
#include<windows.h>
#include<conio.h>
#include<string>
#include "Piano.h"

using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	system("mode con lines=10 cols=40");
	ConsoleCursorVisible(false);//скрываем курсор
	system("title Фортепиано!!!");// меняем название консольного окна
	int activ_piano = 0; //активность подсветки
	int x = 0, y = 0; //координаты по умолчанию
	char ch;
	hello();
	system("mode con lines=12 cols=31");
	//бесконечный цикл
	while (true) {
		//отрисовываем(выводим) клавиши фортепиано
		
		for (int i = 0; i < 7; i++) {
			if (i == activ_piano) SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			else 	SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			for (int j = 0; j < 7; j++) {
				cout << "|##|";
			}
			cout << endl;
		}
		
		//выводим название кнопок
		cout << "[Z] " << "[X] " << "[C] " << "[V] " << "[B] " << "[N] " << "[M] " << endl; 
		cout<<"\n\nДля выхода нажмите ESC" << endl;
		//переменная равная функции,ожидающая нажатие клавиши
		ch = _getch();
		switch (ch)
		{
			//кнопка выхода
		case ESC:
			bye();
			exit(false);
			break;
		case Z:
			//подсветка при нажатии клавиши, и вывод названия ноты
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(x, j);
					if (j == activ_piano && i == activ_piano) SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "|##|" << endl;
				}
				cout << "\nНота--->ДО" << endl;
			}
			//воспроизведение звука по заданной частоте и времени
			Beep(293.66, 300);
			clear;
			break;
		case X:
			//подсветка при нажатии клавиши, и вывод названия ноты
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(x + 4, j);
					if (j == activ_piano && i == activ_piano) SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "|##|" << endl;
				}
				cout << "\nНота--->РЕ" << endl;
			}
			//воспроизведение звука по заданной частоте и времени
			Beep(329.63, 300);
			clear;
			break;
		case C:
			//подсветка при нажатии клавиши, и вывод названия ноты
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(x + 8, j);
					if (j == activ_piano && i == activ_piano) SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "|##|" << endl;
				}
				cout << "\nНота--->МИ" << endl;
			}
			//воспроизведение звука по заданной частоте и времени
			Beep(329.63, 300);
			clear;
			break;
		case V:
			//подсветка при нажатии клавиши, и вывод названия ноты
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(x + 12, j);
					if (j == activ_piano && i == activ_piano) SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "|##|" << endl;
				}
				cout << "\nНота--->ФА" << endl;
			}
			//воспроизведение звука по заданной частоте и времени
			Beep(349.23, 300);
			clear;
			break;
		case B:
			//подсветка при нажатии клавиши, и вывод названия ноты
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(x + 16, j);
					if (j == activ_piano && i == activ_piano) SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "|##|" << endl;
				}
				cout << "\nНота--->СОЛЬ" << endl;
			}
			//воспроизведение звука по заданной частоте и времени
			Beep(392.00, 300);
			clear;
			break;
		case N:
			//подсветка при нажатии клавиши, и вывод названия ноты
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(x + 20, j);
					if (j == activ_piano && i == activ_piano) SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "|##|" << endl;
				}
				cout << "\nНота--->ЛЯ" << endl;
			}
			//воспроизведение звука по заданной частоте и времени
			Beep(440.00, 300);
			clear;
			break;
		case M:
			//подсветка при нажатии клавиши, и вывод названия ноты
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(x + 24, j);
					if (j == activ_piano && i == activ_piano) SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "|##|" << endl;
				}
				cout << "\nНота--->СИ" << endl;
			}
			//воспроизведение звука по заданной частоте и времени
			Beep(493.88, 300);
			clear;
			break;
		default:cout << "ошибка ввода " << endl;

		}
		
	}
	
	return 0;
}