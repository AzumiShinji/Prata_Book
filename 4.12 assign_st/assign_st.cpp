// assign_st.cpp -- присваивание стуктур

#include <iostream>

struct inflatble
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	inflatble bouqet =
	{
		"sunflowers",
		0.20,
		12.49
	};
	inflatble choice;
	cout << "bouqet: " << bouqet.name << " for $";
	cout << bouqet.price << endl;
	choice = bouqet;
	cout << "choice: " << choice.name << " for $";
	cout << choice.price << endl;
	return 0;
}