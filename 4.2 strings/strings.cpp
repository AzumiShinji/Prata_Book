// strings.cpp - ���������� ����� � �������
#include <iostream>
#include <cstring>			// ��� ������� strlen()

int main()
{
	using namespace std;
	const int Size = 15;
	char name1[Size];					// ������ ������
	char name2[Size] = "C++owboy";		// ������������� �������
	// ����������: ��������� ���������� ����� �����������
	// �������� ����� static ��� ������������� ������� name2

	cout << "Howdy! I'm " << name2;
	cout << "! What's your name?\n";
	cin >> name1;
	cout << "Well, " << name1 << ", your name has ";
	cout << strlen(name1) << " letters and is stired\n";
	cout << "in an array of " << sizeof(name1) << " bytes.\n";
	cout << "Your initial is " << name[0]
}