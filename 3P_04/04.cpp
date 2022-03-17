#include <iostream>

#define HOURS_IN_DAY 24
#define MIN_IN_HOUR 60
#define SEC_IN_MIN 60

int main()
{
	using namespace std;

	int days, hours, minutes, sec = 0;
	long long seconds;

	cout << "Enter the number of seconds: ";
	cin >> seconds;
	
	//(31600000 % (60*60*24)) % (60*60) % 60

	days	 = seconds / SEC_IN_MIN / MIN_IN_HOUR / HOURS_IN_DAY;
	hours	 = seconds % (SEC_IN_MIN * MIN_IN_HOUR * HOURS_IN_DAY) / (SEC_IN_MIN * MIN_IN_HOUR);
	minutes  = seconds % (SEC_IN_MIN * MIN_IN_HOUR * HOURS_IN_DAY) % (SEC_IN_MIN * MIN_IN_HOUR) / SEC_IN_MIN;
	sec		 = seconds % (SEC_IN_MIN * MIN_IN_HOUR * HOURS_IN_DAY) % (SEC_IN_MIN * MIN_IN_HOUR) % SEC_IN_MIN;

	cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << sec << " seconds";

	return 0;
}