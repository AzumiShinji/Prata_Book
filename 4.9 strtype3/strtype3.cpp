// strtype3.cpp -- дополнительные средства класса string
#include <iostream>
#include <string>

int main()
{
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	// Присваивание объектов string и символьных массивов
	str1 = str2;								// копирование str2 в str1
	strcpy_s(charr1, charr2);						// копирование charr2 в charr2

	// Добавление объектов string и символьных массивов
	str1 += " paste";
	strcat_s(charr1, " juice");

	// Определение длины объекта string и строки в стиле C
	int len1 = str1.size();
	int len2 = strlen(charr1);
	cout << "The string " << str1 << " contains "
		<< len1 << " characters.\n";
	cout << "The string " << charr1 << " contains "
		<< len2 << " characters.\n";

	return 0;
}