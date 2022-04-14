#include<iostream>
#include<windows.h>
#include<conio.h>
#include<string>
#include "Piano.h"

using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	system("mode con lines=10 cols=40");
	ConsoleCursorVisible(false);//hiding the cursor
	system("title Фортепиано!!!");// changing the name of the console window
	int activ_piano = 0; //backlight activity
	int x = 0, y = 0; //default coordinates
	char ch;
	hello();
	system("mode con lines=12 cols=31"); //changing the size of the console window
	
	while (true) {
		//draw piano keys
		
		for (int i = 0; i < 7; i++) {
			if (i == activ_piano) SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			else 	SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			for (int j = 0; j < 7; j++) {
				cout << "|##|";
			}
			cout << endl;
		}
		
		//output the name of the buttons
		cout << "[Z] " << "[X] " << "[C] " << "[V] " << "[B] " << "[N] " << "[M] " << endl; 
		cout<<"\n\nДля выхода нажмите ESC" << endl;
		ch = _getch();
		switch (ch)
		{
			//exit button
		case ESC:
			bye();
			exit(false);
			break;
		case Z:
			//highlighting when the key is pressed, and the output of the name of the note
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(x, j);
					if (j == activ_piano && i == activ_piano) SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "|##|" << endl;
				}
				cout << "\nНота--->ДО" << endl;
			}
			//audio playback at a given frequency and time
			Beep(293.66, 300);
			clear;
			break;
		case X:
			//highlighting when the key is pressed, and the output of the name of the note
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(x + 4, j);
					if (j == activ_piano && i == activ_piano) SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "|##|" << endl;
				}
				cout << "\nНота--->РЕ" << endl;
			}
			//audio playback at a given frequency and time
			Beep(329.63, 300);
			clear;
			break;
		case C:
			//highlighting when the key is pressed, and the output of the name of the note
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(x + 8, j);
					if (j == activ_piano && i == activ_piano) SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "|##|" << endl;
				}
				cout << "\nНота--->МИ" << endl;
			}
			//audio playback at a given frequency and time
			Beep(329.63, 300);
			clear;
			break;
		case V:
			//highlighting when the key is pressed, and the output of the name of the note
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(x + 12, j);
					if (j == activ_piano && i == activ_piano) SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "|##|" << endl;
				}
				cout << "\nНота--->ФА" << endl;
			}
			//audio playback at a given frequency and time
			Beep(349.23, 300);
			clear;
			break;
		case B:
			//highlighting when the key is pressed, and the output of the name of the note
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(x + 16, j);
					if (j == activ_piano && i == activ_piano) SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "|##|" << endl;
				}
				cout << "\nНота--->СОЛЬ" << endl;
			}
			//audio playback at a given frequency and time
			Beep(392.00, 300);
			clear;
			break;
		case N:
			//highlighting when the key is pressed, and the output of the name of the note
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(x + 20, j);
					if (j == activ_piano && i == activ_piano) SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "|##|" << endl;
				}
				cout << "\nНота--->ЛЯ" << endl;
			}
			//audio playback at a given frequency and time
			Beep(440.00, 300);
			clear;
			break;
		case M:
			//highlighting when the key is pressed, and the output of the name of the note
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(x + 24, j);
					if (j == activ_piano && i == activ_piano) SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "|##|" << endl;
				}
				cout << "\nНота--->СИ" << endl;
			}
			//audio playback at a given frequency and time
			Beep(493.88, 300);
			clear;
			break;
		}
		
	}
	
	return 0;
}