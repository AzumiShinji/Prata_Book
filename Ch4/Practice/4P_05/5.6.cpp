// Practice 5
/*
* ��������� CandyBar �������� ��� �����. ������ �� ��� ������ �������� ������� ������.
* ������ - �� ��� (������� ����� ����� ������� �����), � ������ - ����� ������� (����� ��������).
* �������� ���������, ����������� ��� ��������� � ��������� ���������� ���� CandyBars �� ����� snack,
* ������������� �� ����� ���������� "Mocha Munch", 2.4 � 350, ��������������.
* ������������� ������ ���� ������ ���������� snack. �, �������, ��������� ������ ���������� ���������� ���� ����������.
*/

#include <iostream>
#include <string>

struct CandyBars
{
	std::string nameOfCandybox;
	float weight;
	short calories;
};

int main()
{
	using namespace std;

	CandyBars snack{ "Mocha Munch", 2.4, 350 };
	cout << "Snack's name is " << snack.nameOfCandybox
		<< "\nWeight: " << snack.weight
		<< "\nCalories: " << snack.calories;
	return 0;
}