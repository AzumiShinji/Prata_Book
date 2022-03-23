// textin1.cpp -- чтение символов в цикле while
#include <iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;					// использование базового ввода
	cout << "Enter characters; enter # to quit:\n";
	cin >> ch;						// получение символа
	while (ch != '#')
	{
		cout << ch;					// отображение символа
		++count;					// подсчет символа
		cin >> ch;					// получение следующего символа
	}
	cout << endl << count << " characters read\n";
	return 0;
}