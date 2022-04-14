// Practice 2
/*
* Перепишите код из листинга 5.4 с использованием объекта array вместо встроенного
* массива и типа long double вместо long long. Найдите значение 100!
*/

#include <iostream>
#include <array>

const int ArSize = 100;

int main()
{
	using namespace std;
	array<long double, ArSize> factorials;
	factorials[0] = factorials[1] = 1L;

	for (int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i - 1];

	for (int i = 0; i < ArSize; i++)
		cout << i << "! = " << factorials[i] << endl;

	return 0;
}