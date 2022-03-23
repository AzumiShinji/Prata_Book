// dowhile.cpp -- цикл с проверкой на выходе
#include <iostream>

int main()
{
	using namespace std;
	int n;
	cout << "Enter numbers in the range 1-10 to find ";
	cout << "my favorite number\n";  // запрос на ввод любимого числа
	do
	{
		cin >> n;
	} while (n != 7);
	cout << "Yes, 7 is my favorite.\n";
	return 0;
}