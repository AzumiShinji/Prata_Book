/*Напишите программу, которая запрашивает количество миль, пройденных
автомобилем, и количество галлонов израсходованного бензина, а затем сообщает
значение количества миль на галлон. Или, если хотите, программа может запрашивать расстояние в километрах, 
а объем бензина в литрах, и выдавать результат в виде количества литров на 100 километров.*/

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