// LOOPS
#include <iostream>
#include <conio.h>
using namespace std;

#define ESCAPE 27
	// Loop - петл€
	// while - цикл с предусловием 
	// do... while - цикл с постоусловием
	// for - цикл на заданное число с итераций
// #define WHILE_1
// #define WHILE_2


void main()
{
	setlocale (LC_ALL, "Rus");
	
#ifdef WHILE_1
	int i = 0; // счетчик цикла 
	int n; // количество операций
	cout << "¬ведите количество итераций: "; cin >> n;
	while (i < n)
	{
		cout << i++ << " Hello Loops" << endl; // прервать ctrl+C, пока писать в фигурных скобках. 
		// 	i++; 
	}
#endif // WHILE_1
	
#ifdef WHILE_2
	int n;
	cout << "¬ведите количество итераций: "; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;

#endif // WHILE_2

	char key; // эта переменна€ будет хранить код клавиши
	 
		do 
	{
		key = _getch(); // функци€ getch ожидвает нажатие клавиши и возвращает ASCII код нажатой клавиши 
		
		cout << (int)key << "\t" << key << endl; 
	} while (key != ESCAPE);
	// int (key) - €вно преобзует переменную key  в тип int, дл€ того чтобы увидеть ASCII код
	// функци€ getch находитьс€ в библиотеке <conio.h> 

}