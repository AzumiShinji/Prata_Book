// Practice 9
/*
* �������� ���������, ��������������� �������� ��������� �� ���������� 8, 
* �� � �������������� ������� string ������ ����������� �������. �������� 
* ������������ ���� string � ���������� �������� ��������� ���  
* ���������� ��������. 

*/

#include <iostream>
#include <string>

const std::string exitKeyWord = "done";

int main()
{
	using namespace std;
	string str;
	int count = 0;

	cout << "Enter the words (to stop, type '" << exitKeyWord << "'):" << endl;
	(cin >> str).get();
	while (str != exitKeyWord)
	{
		(cin >> str).get();
		count++;
	}
	cout << "You've written " << count << " words.";

	return 0;
}