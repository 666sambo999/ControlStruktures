// LOOPS
#include <iostream>
#include <conio.h>
using namespace std;

#define ESCAPE 27
	// Loop - �����
	// while - ���� � ������������ 
	// do... while - ���� � �������������
	// for - ���� �� �������� ����� � ��������
// #define WHILE_1
// #define WHILE_2


void main()
{
	setlocale (LC_ALL, "Rus");
	
#ifdef WHILE_1
	int i = 0; // ������� ����� 
	int n; // ���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
	while (i < n)
	{
		cout << i++ << " Hello Loops" << endl; // �������� ctrl+C, ���� ������ � �������� �������. 
		// 	i++; 
	}
#endif // WHILE_1
	
#ifdef WHILE_2
	int n;
	cout << "������� ���������� ��������: "; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;

#endif // WHILE_2

	char key; // ��� ���������� ����� ������� ��� �������
	 
		do 
	{
		key = _getch(); // ������� getch �������� ������� ������� � ���������� ASCII ��� ������� ������� 
		
		cout << (int)key << "\t" << key << endl; 
	} while (key != ESCAPE);
	// int (key) - ���� ��������� ���������� key  � ��� int, ��� ���� ����� ������� ASCII ���
	// ������� getch ���������� � ���������� <conio.h> 

}