// numsrt.cpp -- строковый ввод после числового

#include <iostream>

int main()
{
	using namespace std;
	cout << "What year your house was built?\n";	//ввод года постройки дома
	int year;
	//cin >> year;
	(cin >> year).get();
	cout << "What is its street address?\n";		// ввод адреса
	char address[80];
	cin.getline(address, 80);
	cout << "Year built: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done!\n";

	return 0;
}