// Practice 7
/*
* ������ ������� (William Wingate) �������� ������� ������� ����� �����.
* � ������ ����� �� ���������� ��������� ����������:
*  - ������������ �������� - ������������� �����, ������� ����� �������� �� ����� ��� ������ �����;
*  - ������� �����;
*  - ��� �����;
*
* ������������ ���������, ������� ����� ��������� ��� ����������, � �������� ���������,
* ������������ ����������� ���������� ����� ����.
* ��������� ������ ����������� � ������������ ������ �� ������������� �����������
* � ����� ������������ ��������� ����������. ��������� cin (��� ��� ������) � cout
*/

#include <iostream>
#include <string>

struct Pizza
{
	std::string companyName;
	float diameter;
	float weight;
};

int main()
{
	using namespace std;

	Pizza pepperoni;
	cout << "Enter the name of company: ";
	getline(cin, pepperoni.companyName);
	cout << "Enter the diameter of pizza: ";
	cin >> pepperoni.diameter;
	cout << "Enter the weight of pizza: ";
	cin >> pepperoni.weight;

	cout << "The pizza's from " << pepperoni.companyName << " company, " << pepperoni.diameter << " in diameter, " << pepperoni.weight << " gramm is added";

	return 0;
}