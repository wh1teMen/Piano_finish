#pragma once
#include<iostream>
#include<windows.h>
#include<conio.h>
#define clear system("cls")// очищение экрана
#define ESC 27 //кнопка выхода
#define Z 122//кнопка ноты ДО
#define X 120//кнопка ноты РЕ
#define C 99//кнопка ноты МИ
#define V 118//кнопка ноты ФА
#define B 98//кнопка ноты СОЛЬ
#define N 110//кнопка ноты ЛЯ
#define M 109//кнопка ноты СИ
using namespace std;
//получаем дискриптор консоли
const HANDLE console = GetStdHandle((DWORD)-11); 
//курсор в точку х,y
void GoToXY(short x, short y);  
//функция изменения видимости курсора
void ConsoleCursorVisible(bool show);
//приветственное сообщение
void hello(); 
//Итоговое сообщение
void bye();