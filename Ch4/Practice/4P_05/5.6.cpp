// Practice 5
/*
* Структура CandyBar содержит три члена. Первый из них хранит название коробки конфет.
* Второй - ее вес (который может иметь дробную часть), а третий - число калорий (целое значение).
* Напишите программу, объявляющую эту структуру и создающую переменную типа CandyBars по имени snack,
* инициализируя ее члены значениями "Mocha Munch", 2.4 и 350, соответственно.
* Инициализация должна быть частью объявления snack. И, наконец, программа должнп отобразить содержимое этой переменной.
*/

#include <iostream>
#include <string>

struct CandyBars
{
	std::string nameOfCandybox;
	float weight;
	short calories;
};

int main()
{
	using namespace std;

	CandyBars snack{ "Mocha Munch", 2.4, 350 };
	cout << "Snack's name is " << snack.nameOfCandybox
		<< "\nWeight: " << snack.weight
		<< "\nCalories: " << snack.calories;
	return 0;
}