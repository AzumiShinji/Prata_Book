// Practice 8
/*
*  �������� ���������, ������� ���������� ������ char � ���� ��� ������ �� 
*  ������ ����� �� ��� �� ��� ���, ���� �� ����� ������� ����� done. �����  
*  ��������� ������ �������� ���������� ��������� ���� (�������� done). ������ 
*  ������� ������ ���� �����: 
*		������� ����� (��� ���������� ������� ����� done): 
*		anteater birthday category dumpste� 
*		envy finagle geometry done for sure 
*		�� ����� 7 ���� . 
*  �� ������ �������� ������������ ���� cstring � ��������� ������� 
*  strcmp () ��� ���������� ��������. 
*/

#include <iostream>
#include <cstring>

const char exitKeyWord[] = "done";
const int strSize = 20;

int main()
{
	using namespace std;

	char str[strSize];
	int count = 0;

	cout << "Enter the words (to stop, type '" << exitKeyWord << "'):" << endl;
	(cin >> str).get();
	while (strcmp(str, exitKeyWord))
	{
		(cin >> str).get();
		count++;
	}
	cout << "You've written " << count << " words.";

	return 0;
}