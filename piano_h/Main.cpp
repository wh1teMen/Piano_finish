#include<iostream>
#include<windows.h>
#include<conio.h>
#include<string>
#include "Piano.h"
#include"PianoDefine.h"
#include"PianoKey.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	system("mode con lines=10 cols=40");
	ConsoleCursorVisible(false);//hiding the cursor
	system("title Фортепиано!!!");// changing the name of the console window
	hello();
	system("mode con lines=12 cols=31"); //changing the size of the console window
	while_();
	return 0;
}