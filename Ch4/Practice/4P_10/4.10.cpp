// Practice 10
/*
* �������� ���������, ������� ���������� ������������ ������ ��� ���������� ������ �� 40 �����
* (��� 40 ������, ���� �������) � ����� ���������� ��� �������� � �� �������.
* ��� �������� ������ ���������� ������ array. (���� ������ array �� ��������, �������������� ���������� ��������)
*/

#include <iostream>
#include <array>

int main()
{
	using namespace std;
	array <short, 3> marathonResults;

	cout << "Enter the first result: ";
	cin >> marathonResults[0];
	cout << "Enter the second result: ";
	cin >> marathonResults[1];
	cout << "Enter the third result: ";
	cin >> marathonResults[2];

	cout << "The average value is " << (marathonResults[0] + marathonResults[1] + marathonResults[2]) / 3;
	return 0;
}