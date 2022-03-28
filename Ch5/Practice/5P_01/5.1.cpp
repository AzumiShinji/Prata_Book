// Practice 1
/*
* Напишите программу, запрашивающую у пользователя ввод двух целых чисел.
* Затем программа должнп вычислить и выдать сумму всех целых чисел, лежащих
* между этими двумя целыми. Предполагается, что меньшее значение вводится
* первым. Например, если пользователь ввел 2 и 9, программа должна сообщить,
* что сумма всех целых чисел от 2 до 9 равна 44.
*/

#include <iostream>

int main()
{
	using namespace std;
	short a, b, res = 0;

	cout << "Enter the first integer: ";
	cin >> a;
	cout << "Enter the second integer: ";
	cin >> b;
	for (int i = a; i <= b; i++)
		res += i;
	cout << "The sum all numbers between " << a << " and " << b << " = " << res;
	return 0;
}