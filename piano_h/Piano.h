#pragma once
#include<iostream>
#include<windows.h>
#include<conio.h>
#define clear system("cls")// �������� ������
#define ESC 27 //������ ������
#define Z 122//������ ���� ��
#define X 120//������ ���� ��
#define C 99//������ ���� ��
#define V 118//������ ���� ��
#define B 98//������ ���� ����
#define N 110//������ ���� ��
#define M 109//������ ���� ��
using namespace std;
//�������� ���������� �������
const HANDLE console = GetStdHandle((DWORD)-11); 
//������ � ����� �,y
void GoToXY(short x, short y);  
//������� ��������� ��������� �������
void ConsoleCursorVisible(bool show);
//�������������� ���������
void hello(); 
//�������� ���������
void bye();