#include<iostream>
#include<windows.h>
#include<conio.h>
#include<string>
#include "Piano.h"

using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	system("mode con lines=10 cols=40");
	ConsoleCursorVisible(false);//�������� ������
	system("title ����������!!!");// ������ �������� ����������� ����
	int activ_piano = 0; //���������� ���������
	int x = 0, y = 0; //���������� �� ���������
	char ch;
	hello();
	system("mode con lines=12 cols=31");
	//����������� ����
	while (true) {
		//������������(�������) ������� ����������
		
		for (int i = 0; i < 7; i++) {
			if (i == activ_piano) SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			else 	SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			for (int j = 0; j < 7; j++) {
				cout << "|##|";
			}
			cout << endl;
		}
		
		//������� �������� ������
		cout << "[Z] " << "[X] " << "[C] " << "[V] " << "[B] " << "[N] " << "[M] " << endl; 
		cout<<"\n\n��� ������ ������� ESC" << endl;
		//���������� ������ �������,��������� ������� �������
		ch = _getch();
		switch (ch)
		{
			//������ ������
		case ESC:
			bye();
			exit(false);
			break;
		case Z:
			//��������� ��� ������� �������, � ����� �������� ����
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(x, j);
					if (j == activ_piano && i == activ_piano) SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "|##|" << endl;
				}
				cout << "\n����--->��" << endl;
			}
			//��������������� ����� �� �������� ������� � �������
			Beep(293.66, 300);
			clear;
			break;
		case X:
			//��������� ��� ������� �������, � ����� �������� ����
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(x + 4, j);
					if (j == activ_piano && i == activ_piano) SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "|##|" << endl;
				}
				cout << "\n����--->��" << endl;
			}
			//��������������� ����� �� �������� ������� � �������
			Beep(329.63, 300);
			clear;
			break;
		case C:
			//��������� ��� ������� �������, � ����� �������� ����
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(x + 8, j);
					if (j == activ_piano && i == activ_piano) SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "|##|" << endl;
				}
				cout << "\n����--->��" << endl;
			}
			//��������������� ����� �� �������� ������� � �������
			Beep(329.63, 300);
			clear;
			break;
		case V:
			//��������� ��� ������� �������, � ����� �������� ����
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(x + 12, j);
					if (j == activ_piano && i == activ_piano) SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "|##|" << endl;
				}
				cout << "\n����--->��" << endl;
			}
			//��������������� ����� �� �������� ������� � �������
			Beep(349.23, 300);
			clear;
			break;
		case B:
			//��������� ��� ������� �������, � ����� �������� ����
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(x + 16, j);
					if (j == activ_piano && i == activ_piano) SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "|##|" << endl;
				}
				cout << "\n����--->����" << endl;
			}
			//��������������� ����� �� �������� ������� � �������
			Beep(392.00, 300);
			clear;
			break;
		case N:
			//��������� ��� ������� �������, � ����� �������� ����
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(x + 20, j);
					if (j == activ_piano && i == activ_piano) SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "|##|" << endl;
				}
				cout << "\n����--->��" << endl;
			}
			//��������������� ����� �� �������� ������� � �������
			Beep(440.00, 300);
			clear;
			break;
		case M:
			//��������� ��� ������� �������, � ����� �������� ����
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(x + 24, j);
					if (j == activ_piano && i == activ_piano) SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "|##|" << endl;
				}
				cout << "\n����--->��" << endl;
			}
			//��������������� ����� �� �������� ������� � �������
			Beep(493.88, 300);
			clear;
			break;
		default:cout << "������ ����� " << endl;

		}
		
	}
	
	return 0;
}