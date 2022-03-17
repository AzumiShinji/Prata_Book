// Practice 01
/*
* Напишите программу C++, которая запрашивает и отображает информацию, 
  как показано в следующем примере вывода: ' 
  What is your first name? Betty Sue 
  What is your last name? Yewe 
  What letter grade do you deserve? В 
  What is your age? 22 
  Name: Yewe, Betty Sue 
  Grade: С 
  Age: 22 

  Обратите внимание, что программа должна принимать имена, состоящие из 
  более чем одного слова. Кроме того, программа должна уменьшать значение 
  grade на одну градацию — т.е. на одну букву выше. Предполагается, что  
  пользователь может ввести А, В или С, поэтому вам не нужно беспокоиться о  
  пропуске между D и F. 

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