// Practice 4
/* ����� ������������� $100 ��� ������� 10%. ������� �������, ��������
*  ���������� ������ ��������� 10% ��������������� �����, �.�. $10 ������ ���:
*  ������� = 0,10 � �������� ������
*  � �� �� ����� ���� ������������� $100 ��� ������� 5%. ��� ������, ��� �������
*  �������� 5% �� �������� �������, ������� ���������� ����������� �������:
*  ������� = 0,05 � ������� ������ ���� ������������ 5% �� $100 � ������ ���,
*  ��� ���� �� $105. �� ��������� ��� ��� ������������ 5% �� $105,
*  ��� ���������� $5.25, � �.�. �������� ���������, ������� ��������, �������
*  ��� ����������� ��� ����, ����� ����� ������� ���� ��������� ����� ������� �����,
*  � ������������ �������� ����� �������� �� ������ ���.
*/
#include <iostream>
const float daphne = 100;
const float cleo = 100;
using namespace std;

int main() {
    float daphneRes = daphne;
    float cleoRes = cleo;

    int year = 0;
    while (daphneRes >= cleoRes)
    {
        year++;
        daphneRes += daphne * 0.10;
        cleoRes += cleoRes * 0.05;

        cout << "The year " << year << " profit is\n"
            << "$" << daphneRes << " for Daphne\n"
            << "$" << cleoRes << " for Cleo\n" << endl;
    }

    cout << "It would take " << year << " years, to Cleo's balance got bigger then Daphne's";
    return 0;
}