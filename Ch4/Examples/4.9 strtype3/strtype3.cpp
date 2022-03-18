// strtype3.cpp -- �������������� �������� ������ string
#include <iostream>
#include <string>

int main()
{
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	// ������������ �������� string � ���������� ��������
	str1 = str2;								// ����������� str2 � str1
	strcpy_s(charr1, charr2);						// ����������� charr2 � charr2

	// ���������� �������� string � ���������� ��������
	str1 += " paste";
	strcat_s(charr1, " juice");

	// ����������� ����� ������� string � ������ � ����� C
	int len1 = str1.size();
	int len2 = strlen(charr1);
	cout << "The string " << str1 << " contains "
		<< len1 << " characters.\n";
	cout << "The string " << charr1 << " contains "
		<< len2 << " characters.\n";

	return 0;
}