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
const HANDLE console = GetStdHandle((DWORD)-11); //получаем дискриптор консоли
void GoToXY(short x, short y);  //курсор в точку х,y
void ConsoleCursorVisible(bool show);//функция изменения видимости курсора
void hello(); //приветственное сообщение