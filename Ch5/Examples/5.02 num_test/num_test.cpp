// num_test.cpp -- использование числовой проверки в цикле
#include <iostream>
int main()
{
	using namespace std;

	cout << "Enter the strting countdown value: "; // ввод начального значения счетчика
	int limit;
	cin >> limit;
	int i;
	for (i = limit; i; i--)
		cout << "i = " << i << "\n";
	cout << "Done now that i = " << i << "\n";
	return 0;
}