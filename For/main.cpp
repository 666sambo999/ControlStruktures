#include <iostream>
using namespace std;
// #define FOR_BASICS

void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef FOR_BASICS
	int n; // ���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;

	for (int i = 0;
		i < n;
		i++)
	{
		//cout << "Hello For" << endl; // ; - ������ ���������, �� ��������� ������
		cout << i << "\t";  // true - ����������� ���� �����
	}
	cout << endl;
#endif // for




}