// Practice 04
/*
* �������� ���������, ������� ����������� � ������������ ���, �������,
* � ����� ������������, ��������� � ���������� ������ ������, ���������
* �� ������� �����������, �� ������� ������� �������, ������ � ��� ���.
 *����������� ������� char � ������� �� ������������� ����� string.
* ������ ������� ������ ��������� ���:
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