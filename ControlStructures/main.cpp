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
	cout << "������� ����������� �������"; cin >> temperature;
	if (temperature > 0)
	{
		cout << "�� �� ������ �������" << endl;
	}
	else if (temperature > 50)
	{
		cout << "�� �� ��������" << endl;
	}
	else if (temperature > 33)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 25)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 15)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 5)
	{
		cout << "���������" << endl;
	}
	else if (temperature > 5)
	{
		cout << "�������" << endl;
	}
	else if (temperature > 0)
	{
		cout << "�������" << endl;
	}
	else if (temperature > -10)
	{
		cout << "�����" << endl;
	}
	else if (temperature > -40)
	{
		cout << "������� �����" << endl;
	}
	else
	{
		cout << "�� �� ������ �������" << endl;
	}
#endif // TEMPERATURE

#ifdef TARGET
	int n;
	cout << "������� �����" << endl; cin >> n;

	if (n >= 0 || n <= 10) // ���� && � ���  �������  
	{
		cout << "���� ��������" << endl;
	}
	else //  � ��������� ������ (�����) ����������  
	{
		cout << "�� ������������" << endl;
	}
#endif // TARGET

#ifdef PRIMER // ������� ������ ��� ��� 
	int a, b;
	char operacion;
	cout << "������� ������" << endl; cin >> a, b, operacion;
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
	double a, b; //����� ��������� ������������� 
	char s; // sign  ���� ��������
	cout << "������� �������������� ���������: " << endl; cin >> a >> s >> b;
	switch (s)
	{
	case '+': cout << a << "+" << b << "=" << a + b << endl; break;
	case '-': cout << a << "-" << b << "=" << a - b << endl; break;
	case '*': cout << a << "*" << b << "=" << a * b << endl; break;
	case '/': cout << a << "/" << b << "=" << a / b << endl; break;
	default: cout << "Error: No operation" << endl; //  if else - ������������� 
	}

#endif // CALCUL



}
	


