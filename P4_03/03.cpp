// Practice 3
/* �������� ���������, ������� ����������� � ������������ ���, �������,
* � ����� ������������, ��������� � ���������� ������ ������, ���������
* �� ������� �����������, �� ������� ������� �������, ������ � ��� ���.
* ����������� ������� char � ������� �� ������������� ����� cstring.
* ������ ������� ������ ��������� ���:
* Enter your first name: Flip
* Enter your last name: Fleming
* Here's the information in a single string: Fleming, Flip
*/

#include <iostream>
#include <cstring>
#pragma warning(disable : 4996)

int main() 
{
	char firstName[20];
	char lastName[20];
	char fullString[42];
	const char sep[3] = ", ";

	std::cout << "Enter your first name: ";
	std:: cin.getline(firstName, sizeof(firstName));
	std::cout << "Enter your lastname: ";
	std:: cin.getline(lastName, sizeof(lastName));
	strcpy(fullString, lastName);* // WARNING: you cannot use strcat before char string isn't initialized,
									// so the first we do is copy there lastName
	strcat(fullString, ", ");
	strcat(fullString, firstName);
	std::cout << "Here's the information in a single string: " << fullString;

	return 0;
}