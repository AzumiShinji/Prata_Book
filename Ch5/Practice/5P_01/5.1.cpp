// Practice 1
/*
* �������� ���������, ������������� � ������������ ���� ���� ����� �����.
* ����� ��������� ������ ��������� � ������ ����� ���� ����� �����, �������
* ����� ����� ����� ������. ��������������, ��� ������� �������� ��������
* ������. ��������, ���� ������������ ���� 2 � 9, ��������� ������ ��������,
* ��� ����� ���� ����� ����� �� 2 �� 9 ����� 44.
*/

#include <iostream>

int main()
{
	using namespace std;
	short a, b, res = 0;

	cout << "Enter the first integer: ";
	cin >> a;
	cout << "Enter the second integer: ";
	cin >> b;
	for (int i = a; i <= b; i++)
		res += i;
	cout << "The sum all numbers between " << a << " and " << b << " = " << res;
	return 0;
}