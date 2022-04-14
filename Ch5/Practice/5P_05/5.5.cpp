// Practice 5
/*
*  Предположим, что вы продаете книгу по программированию на языку C++
*  для начинающих. Напишите программу, которая ползволит ввести ежемесячные
*  объемы продаж в течении года (в количестве книг, а не в деньгах). Программа
*  должна использовать цикл, в котором выводится приглашение с названием месяца,
*  применяя массив указателей на char (или массив объектов string, если вы предпочитаете его),
*  инициализированный строками - названиями месяцев, и сохраняя введенные значения в массиве int.
*  Затем программа должна найти сумму содержимого массива и выдать общий объем продаж за год.
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