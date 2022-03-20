
// Practice 9
/*
* Выполните упражнение 6, но вместо объявления массива из трех структур CandyBar используйте
* операцию new для динамического размещения массива.
*/

#include <iostream>
#include <string>

struct CandyBars
{
	std::string nameOfCandybox;
	float weight;
	short calories;
};

int main()
{
	using namespace std;

	CandyBars* arCB = new CandyBars[3];
	arCB[0] = { "Rafaello", 32.4, 14 };
	arCB[1] = { "Step", 59.2, 20 };
	arCB[2] = { "Bonparis", 3.1, 2 };

	cout << "Snack 1: " << arCB[0].nameOfCandybox << ", "
		<< arCB[0].weight << ", "
		<< arCB[0].calories << endl;
	cout << "Snack 2: " << arCB[1].nameOfCandybox << ", "
		<< arCB[1].weight << ", "
		<< arCB[1].calories << endl;
	cout << "Snack 3: " << arCB[2].nameOfCandybox << ", "
		<< arCB[2].weight << ", "
		<< arCB[2].calories << endl;

	delete[] arCB;
	return 0;
}