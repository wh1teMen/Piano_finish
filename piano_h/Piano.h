#pragma once
#include<iostream>
#include<windows.h>
#include<conio.h>
#define clear system("cls")// clearing the screen
#define ESC 27 //exit button
#define Z 122//button notes Ñ
#define X 120//button notes D
#define C 99//button notes E
#define V 118//button notes F
#define B 98//button notes G
#define N 110//button notes A
#define M 109//button notes B
using namespace std;
//getting the console descriptor
const HANDLE console = GetStdHandle((DWORD)-11); 
//cursor to point x,y
void GoToXY(short x, short y);  
//cursor visibility change function
void ConsoleCursorVisible(bool show);
//welcome message
void hello(); 
//Final message
void bye();
//show notes
