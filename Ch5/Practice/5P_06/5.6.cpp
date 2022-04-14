// Practice 6
/*
*  ��������� ���������� 5, �� ��������� ��������� ������ ��� ����������
*  ������ � �������� �������� �� 3 ����. ������� ����� ����� ������ ��
*  ������ ��� � �� ��� ���� ������. 
*/
#include <iostream>
#include <string>

const int ArSize = 12;

int main()
{
	using namespace std;
	string months[ArSize] = {
		"January",	  "February", "March",	  "April",
		"May",		  "June",	  "July",	  "August",
		"Semptember", "October",  "November", "December" };
	int sellingNumbers[3][ArSize];
	int YearSellings[3] = {0,0,0};

	cout << "Please enter number of sold books for each month: " << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << "Year " << (i+1) << endl;
		for (int k = 0; k < ArSize; k++)
		{
			cout << months[k] << ": ";
			cin >> sellingNumbers[i][k];
			YearSellings[i] += sellingNumbers[i][k];
		}
	}
	cout << "The selling for the first year is\t" << YearSellings[0] << endl;
	cout << "The selling for the second year is\t" << YearSellings[1] << endl;
	cout << "The selling for the third year is\t" << YearSellings[2] << endl;
	cout << "And the total is\t" << YearSellings[0] + YearSellings[1] + YearSellings[2] << endl;

	return 0;
}