#include <iostream>
using namespace std;
// #define FOR_BASICS

void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef FOR_BASICS
	int n; // количество итераций
	cout << "Введите количество итераций: "; cin >> n;

	for (int i = 0;
		i < n;
		i++)
	{
		//cout << "Hello For" << endl; // ; - пустое выражение, не содержить ничего
		cout << i << "\t";  // true - выполняется тело цикла
	}
	cout << endl;
#endif // for




}