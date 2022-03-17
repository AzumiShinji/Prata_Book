// Practice 6
/*
* —труктура CandyBar включает три члена, как описано в предыдущем упражнении.
* Ќапишите программу, котора€ создает массив из трех структур CandyBar, 
* инициализирует их значени€ми по вашему усмотрению и затем отображает содержимое каждой структуры.
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

	CandyBars snacks[3];
	snacks[0] = { "Rafaello", 32.4, 14 };
	snacks[1] = { "Step", 59.2, 20 };
	snacks[2] = { "Bonparis", 3.1, 2 };

	cout << "Snack 1: " << snacks[0].nameOfCandybox << ", "
		<< snacks[0].weight << ", "
		<< snacks[0].calories << endl;
	cout << "Snack 2: " << snacks[1].nameOfCandybox << ", "
		<< snacks[1].weight << ", "
		<< snacks[1].calories << endl;
	cout << "Snack 3: " << snacks[2].nameOfCandybox << ", "
		<< snacks[2].weight << ", "
		<< snacks[2].calories << endl;

	return 0;
}