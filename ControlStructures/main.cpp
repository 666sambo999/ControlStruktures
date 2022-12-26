// ControlStruktures
#include <iostream>

using namespace std;
// # define TEMPERATURE
//# define TARGET
// # define PRIMER 
# define CALCUL
using std::cin;
using std::cout;
using std::endl;

void main()
{
	setlocale(LC_ALL, "");
#ifdef TEMPERATURE
	int temperature;
	cout << "Введите температуру воздуха"; cin >> temperature;
	if (temperature > 0)
	{
		cout << "Вы на другой планете" << endl;
	}
	else if (temperature > 50)
	{
		cout << "Вы на экваторе" << endl;
	}
	else if (temperature > 33)
	{
		cout << "Жарко" << endl;
	}
	else if (temperature > 25)
	{
		cout << "Жарко" << endl;
	}
	else if (temperature > 15)
	{
		cout << "Тепло" << endl;
	}
	else if (temperature > 5)
	{
		cout << "Прохладно" << endl;
	}
	else if (temperature > 5)
	{
		cout << "Холодно" << endl;
	}
	else if (temperature > 0)
	{
		cout << "Холодно" << endl;
	}
	else if (temperature > -10)
	{
		cout << "Мороз" << endl;
	}
	else if (temperature > -40)
	{
		cout << "Сильный мороз" << endl;
	}
	else
	{
		cout << "Вы на другой планете" << endl;
	}
#endif // TEMPERATURE

#ifdef TARGET
	int n;
	cout << "Введите число" << endl; cin >> n;

	if (n >= 0 || n <= 10) // если && и так  выходит  
	{
		cout << "Цель поражена" << endl;
	}
	else //  в противном слечае (иначе) обозначяет  
	{
		cout << "Вы промахнулись" << endl;
	}
#endif // TARGET

#ifdef PRIMER // домашка пример моя сам 
	int a, b;
	char operacion;
	cout << "Введите пример" << endl; cin >> a, b, operacion;
	if (operacion == '+')
	{
		cout << a + b << endl;
	}
	else if (operacion == '*')
	{
		cout << a * b << endl;
	}
	else if (operacion == '/')
	{
		cout << a / b << endl;
	}
	else if (operacion == '-')
	{
		cout << a - b << endl;
	}
#endif // PRIMER


#ifdef CALCUL
	double a, b; //числа введенные пользователем 
	char s; // sign  знак операции
	cout << "Введите арифметическое выражение: " << endl; cin >> a >> s >> b;
	switch (s)
	{
	case '+': cout << a << "+" << b << "=" << a + b << endl; break;
	case '-': cout << a << "-" << b << "=" << a - b << endl; break;
	case '*': cout << a << "*" << b << "=" << a * b << endl; break;
	case '/': cout << a << "/" << b << "=" << a / b << endl; break;
	default: cout << "Error: No operation" << endl; //  if else - универсальный 
	}

#endif // CALCUL



}
	


