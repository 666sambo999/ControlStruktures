#include <iostream>
#include <conio.h>
using namespace std;
//#define PALIN
//#define BILET
#define SHOOTER
#define ESCAPE
void main()
{
	setlocale(LC_ALL, "Rus");
	
#ifdef PALIN
	int number; // ����� ��������� � ���������� 
	int revers = 0; // ����� ���������� �������� 
	cout << "������� �����: "; cin >> number;
	int buffer = number; // ����� �����, ���������� � ���������� 

	while (buffer > 0)
	{
		revers = (10 * revers) + (buffer % 10);
		buffer /= 10;
	}

	if (number == revers)
		cout << "���������" << endl;
	else
		cout << "�� ���������" << endl;

#endif // PALIN

#ifdef BILET
	int num; // ����� ������ 
	cout << "������� ����� �����: "; cin >> num;
	int a, b; // a � b ������� 
	a = num / 1000;
	b = num % 1000;
	if (a / 100 + (a / 10) % 10 + a % 10 == b / 100 + (b / 10) % 10 + b % 10)
		cout << "�������� �����" << endl;
	else
		cout << "����������� �����" << endl;
#endif // BILET

	
#ifdef SHOOTER
	char key; // ������ �������
	int number_of_key;
	do
	{
		key = _getch();
		switch (int(key))
		{
		case 119: cout << "������" << endl; break;
		case 115: cout << "�����" << endl; break;
		case 97: cout << "�����" << endl; break;
		case 100: cout << "������" << endl; break;
		case 32: cout << "������" << endl; break;
		case 13: cout << "�����" << endl; break;
		case ESCAPE 27: cout << "�����" << endl; break;
		}
	} while (key != ESCAPE 27);
#endif // SHOOTER

	
	
	
	
	}
	
	
	
	
	
	
	
	



}