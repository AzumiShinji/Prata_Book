/*�������� ���������, ������� ����������� ���������� ����, ����������
�����������, � ���������� �������� ���������������� �������, � ����� ��������
�������� ���������� ���� �� ������. ���, ���� ������, ��������� ����� ����������� ���������� � ����������, 
� ����� ������� � ������, � �������� ��������� � ���� ���������� ������ �� 100 ����������.*/

#include <iostream>

int main()
{
	using namespace std;
	int kilometers, liters;

	cout << "Enter distance traveled: ";
	cin >> kilometers;
	cout << "Enter spent fuel: ";
	cin >> liters;

	cout << "Consumption is " << liters / (float) kilometers * 100 << " liters of gasoline per 100 kilometers";

	return 0;
}