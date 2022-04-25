#include<iostream>
#include<windows.h>
#include<conio.h>
#include "Piano.h"
#include"PianoKey.h"
void z_() {
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

}
void x_() {
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
}
void c_() {
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
}
void v_() {
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

}
void b_() {
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
}
void n_() {
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
}
void m_() {
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
}