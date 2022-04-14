// Practice 5
/*
*  �����������, ��� �� �������� ����� �� ���������������� �� ����� C++
*  ��� ����������. �������� ���������, ������� ��������� ������ �����������
*  ������ ������ � ������� ���� (� ���������� ����, � �� � �������). ���������
*  ������ ������������ ����, � ������� ��������� ����������� � ��������� ������,
*  �������� ������ ���������� �� char (��� ������ �������� string, ���� �� ������������� ���),
*  ������������������ �������� - ���������� �������, � �������� ��������� �������� � ������� int.
*  ����� ��������� ������ ����� ����� ����������� ������� � ������ ����� ����� ������ �� ���.
*/
#include <iostream>
#include <string>

const int ArSize = 12;

int main()
{
	using namespace std;
	string months[ArSize] = {
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"Semptember",
		"October",
		"November",
		"December"
	};
	int sellingNumbers[ArSize];
	int YearSellings = 0;

	cout << "Please enter number of sold books for each month: " << endl;

	for (int i = 0; i < ArSize; i++)
	{
		cout << months[i] << ": ";
		cin >> sellingNumbers[i];
		YearSellings += sellingNumbers[i];
	}
	cout << "The selling for the year is " << YearSellings << endl;

	return 0;
}