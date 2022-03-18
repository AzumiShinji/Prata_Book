#include <iostream>

int main()
{
	using namespace std;
	long long world_population, country_population;

	cout << "Enter the world's population: ";
	cin >> world_population;
	cout << "Enter the population of the US: ";
	cin >> country_population;

	cout << "The population of the US is " <<  country_population * 100 / float (world_population) << "% of the world population.";

	return 0;
}