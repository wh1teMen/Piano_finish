#pragma once
#include<iostream>
#include<windows.h>
#include<conio.h>
#include"PianoDefine.h"
#include"PianoKey.h"
using namespace std;
 static int activ_piano = 0;
 static int x = 0, y = 0;
 static char ch;
//getting the console descriptor
const HANDLE console = GetStdHandle((DWORD)-11); //потенциальная ошибка
				//ещё одна вставка этого заголовка в программу и работать будет 
				//на уровне китайских часов
//cursor to point x,y
void GoToXY(short x, short y);  
//cursor visibility change function
void ConsoleCursorVisible(bool show);
//welcome message
void hello(); 
//Final message
void bye();
//draw piano keys
void drawingApiano();
//output the name of the buttons
void panel();
//infinite loop
void while_();
