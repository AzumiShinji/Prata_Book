// delete.cpp -- ������������� �������� delete
#pragma warning(disable : 4996)
#include <iostream>
#include <cstring>		// ��� string.h

using namespace std;
char* getname(void);	// �������� �������
int main()
{
	char* name;				// �������� ���������, �� ��� ���������
	name = getname();		// ������������ name ������ ������
	cout << name << " at " << (int*)name << "\n";
	delete[] name;			// ������������ ������
	name = getname();		// ��������� ������������� ������������� ������
	cout << name << " at " << (int*)name << "\n";
	delete[] name;			// ����� ������������ ������
	return 0;
}

char* getname()
{
	char temp[80];			// ��������� ���������
	cout << "Enter last name: ";// ���� �������
	cin >> temp;
	char* pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);		// ����������� ������ � ������� ������������
	return pn;				// �� ���������� ������� temp ��������
}