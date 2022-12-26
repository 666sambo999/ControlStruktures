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
	int number; // число введенное с клавиатуры 
	int revers = 0; // число записанное наоборот 
	cout << "Введите число: "; cin >> number;
	int buffer = number; // копия числа, введенного с клавиатуры 

	while (buffer > 0)
	{
		revers = (10 * revers) + (buffer % 10);
		buffer /= 10;
	}

	if (number == revers)
		cout << "Палиндром" << endl;
	else
		cout << "Не палиндром" << endl;

#endif // PALIN

#ifdef BILET
	int num; // число билета 
	cout << "Введите номер билет: "; cin >> num;
	int a, b; // a и b разряды 
	a = num / 1000;
	b = num % 1000;
	if (a / 100 + (a / 10) % 10 + a % 10 == b / 100 + (b / 10) % 10 + b % 10)
		cout << "Счаслвый билет" << endl;
	else
		cout << "Несчасливый билет" << endl;
#endif // BILET

	
#ifdef SHOOTER
	char key; // кнопки клавиши
	int number_of_key;
	do
	{
		key = _getch();
		switch (int(key))
		{
		case 119: cout << "Вперед" << endl; break;
		case 115: cout << "Назад" << endl; break;
		case 97: cout << "Влево" << endl; break;
		case 100: cout << "Вправо" << endl; break;
		case 32: cout << "прыжок" << endl; break;
		case 13: cout << "огонь" << endl; break;
		case ESCAPE 27: cout << "Выход" << endl; break;
		}
	} while (key != ESCAPE 27);
#endif // SHOOTER

	
	
	
	
	}
	
	
	
	
	
	
	
	



}