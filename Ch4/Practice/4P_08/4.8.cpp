// Practice 8
/*
* ��������� ���������� 7, �� � ����������� �������� new ��� ���������� ��������� 
* � ��������� ��������� ������ ���������� ����������� ����������.
* ����� ����, �������� ���, ����� ��������� ������� ����������� ������� �����, � ����� - ������������ ��������.
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