// strtype4.cpp -- ���� ������ � ���������
#include <iostream>
#include <string>
#include <cstring>

int main()
{
	using namespace std;
	char charr[20];
	string str;

	// ����� ������ � charr ����� ������
	cout << "Length of string in charr before input: "
		<< strlen(charr) << endl;
	// ����� ������ � str ����� ������
	cout << "Length of string in str before input: "
		<< str.size() << endl;
	cout << "Enter a line of text:\n";			// ���� ������ ������
	cin.getline(charr, 20);						// �������� ������������ ����� ������
	cout << "You entered: " << charr << endl;
	cout << "Enter another line of text:\n";	// ���� ������ ������ ������
	getline(cin, str);				// ������ cin - ��������; ������������ ����� �����������
	cout << "You enterd: " << str << endl;
	// ����� ������ � charr ����� �����
	cout << "Length of string in charr agter input: "
		<< strlen(charr) << endl;
	// ����� ������ � str ����� �����
	cout << "Length of string in str agter input: "
		<< str.size() << endl;

	return 0;
}