// textin4.cpp -- ������ �������� � ������� cin.get()
#include <iostream>
int main()
{
	using namespace std;
	int ch;
	int count = 0;
	while ((ch = cin.get()) != EOF)
	{
		cout.put(char(ch));
		++count;
	}
	cout << endl << count << " chaarcters read\n";
	return 0;
}