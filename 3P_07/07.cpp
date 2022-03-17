#include <iostream>

#define _100KM_IN_MILES 62.14
#define LITERS_IN_GALLON 3.875

int main()
{
	using namespace std;
	//3.875 / (19 * 1.6092693917) * 100
	//3.875/(19*(100/62.14))*100
 	//62.14 / (12.4 / 3.875)
	//100KM_IN_MILES / (liters / LITERS_IN_GALLON)
	float liters, res_miles;

	cout << "Enter amount of gasoline (liters) per 100km: ";
	cin >> liters;
	res_miles = _100KM_IN_MILES / (liters / LITERS_IN_GALLON);
	cout << liters << " liters per 100km = " << res_miles << " miles per 1 gallon";

	return 0;
}