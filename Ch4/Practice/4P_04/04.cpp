// Practice 04
/*
* Напишите программу, которая запрашивает у пользователя имя, фамилию,
* а затем конструирует, сохраняет и отображает третью строку, состоящую
* из фамилии пользовател, за которой следует запятая, пробел и его имя.
 *Используйте массивы char и функции из заголовочного файла string.
* Пример запуска должен выглядеть так:
* Enter your first name: Flip
* Enter your last name: Fleming
* Here's the information in a single string: Fleming, Flip
*/

#include <iostream>
#include <string>

int main()
{
	using namespace std;

	string firstName, lastName, fullName;

	cout << "Enter your first name: ";
	getline(cin, firstName);
	cout << "Enter your last name: ";
	getline(cin, lastName);
	fullName = lastName + ", " + firstName;
	cout << "Here's the information in a single string: " << fullName;

	return 0;
}