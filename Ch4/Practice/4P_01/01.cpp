// Practice 01
/*
* �������� ��������� C++, ������� ����������� � ���������� ����������, 
  ��� �������� � ��������� ������� ������: ' 
  What is your first name? Betty Sue 
  What is your last name? Yewe 
  What letter grade do you deserve? � 
  What is your age? 22 
  Name: Yewe, Betty Sue 
  Grade: � 
  Age: 22 

  �������� ��������, ��� ��������� ������ ��������� �����, ��������� �� 
  ����� ��� ������ �����. ����� ����, ��������� ������ ��������� �������� 
  grade �� ���� �������� � �.�. �� ���� ����� ����. ��������������, ���  
  ������������ ����� ������ �, � ��� �, ������� ��� �� ����� ������������ �  
  �������� ����� D � F. 

*/

#include <iostream>
#include <string>

int main()
{
	using namespace std;

	string firstName, lastName;
	unsigned char grade;
	unsigned short age;

	cout << "What is your first name? ";
	getline(cin, firstName);
	cout << "What is your last name? ";
	getline(cin, lastName);
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	cout << "What is your age? ";
	cin >> age;

	cout << "Name: " << lastName << ", " << firstName
		<< "\nGrade: " << char (grade + 1 )
		<< "\nAge: " << age;
	return 0;
}