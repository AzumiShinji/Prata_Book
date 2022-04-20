// Practice 7
#include <iostream>
#include <string>

struct car
{
	std::string manufacture;
	int year;
};

int main()
{
	using namespace std;
	int numOfCars;

	cout << "How many cars do you with to catalog? ";
	cin >> numOfCars;
	cin.get();
	car* listOfCars = new car[numOfCars];
	for (int i = 0; i < numOfCars; i++)
	{
		cout << "Car #" << (i+1) << endl;
		cout << "Please enter the make: ";
		getline(cin,(listOfCars+i)->manufacture);
		cout << "Please enter the year made: ";
		cin >> (listOfCars + i)->year;
		cin.get();
		cout << "\n";
	}
	for (int i = 0; i < numOfCars; i++)
	{
		cout << "Here's your collection: " << endl;
		cout << (listOfCars + i)->year << " " << (listOfCars + i)->manufacture << endl;
	}
	delete []listOfCars;
	return 0;
}