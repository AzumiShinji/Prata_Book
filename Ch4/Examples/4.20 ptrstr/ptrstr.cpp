// ptrstr.cpp -- ������������� ���������� �� ������
#pragma warning(disable : 4996)
#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	char animal[20] = "bear";		// animal �������� bear
	const char* bird = "wren";		// bird �������� ����� ������
	char* ps;						// �� ����������������
	cout << animal << " and ";		// ����������� bear
	cout << bird << "\n";			// ����������� wren
	//cout << ps << "\n";				// ����� ���������� �����, �� ����� �������
									// � ���������� ���������� ���������
	cout << "Enter a kind of animal: ";
	cin >> animal;					// ���������, ���� �������� ������ 20 ��������
	// cin >> ps; ����� ������� ������, ����� �����������;
	// ps �� ��������� �� ���������� �������������

	ps = animal;						// ��������� ps � ��������� �� ������
	cout << ps << "!\n";				// ���������; �� ��, ��� � ���������� animal
	cout << "Before using strcpy():\n";
	cout << animal << " at " << (int*)animal << endl;
	ps = new char[strlen(animal) + 1];	// ��������� ������ ���������
	strcpy(ps, animal);					// ����������� ������ � ����� ���������
	cout << "after using strcpy():\n";
	cout << animal << " at " << (int*)animal << endl;
	cout << ps << " at " << (int*)ps << endl;
	delete[]ps;
	return 0;
} 