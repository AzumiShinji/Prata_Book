// Practice 8
/*
* Выполните упражнение 7, но с применением операции new для размещения структуры 
* в свободном хранилище вместо объявления структурной переменной.
* Кроме того, сделайте так, чтобы программа сначала запрашивала диаметр пиццы, а потом - наименование компании.
*/

#include <iostream>
#include <string>

struct Pizza
{
	std::string nameOfCompany;
	float diameter;
	float weight;
};

int main()
{
	using namespace std;

	Pizza* newPizza =  new Pizza;

	cout << "Enter diameter of a pizza: ";
	cin >> newPizza->diameter;
	cin.get();
	cout << "Enter name of a company: ";
	getline(cin, newPizza->nameOfCompany);
	cout << "Enter weight of pizza: ";
	cin >> newPizza->weight;

	cout << "Your pizza is " << newPizza->diameter << " in diameter, \nit's weight is "
		<< newPizza->weight << " and it's by " << newPizza->nameOfCompany << " company";

	delete newPizza;
	return 0;
}