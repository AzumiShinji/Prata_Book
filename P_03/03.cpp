#include <iostream>

#define SEC_IN_MINUTES 60
#define MIN_IN_DEGREES 60

int main()
{
	using namespace std;

	int degrees, minutes, seconds;
	float dec_degrees;

	cout << "Enter a latitude in degrees, minutes, and seconds: \n" <<
		"First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;

	dec_degrees = (degrees * MIN_IN_DEGREES * SEC_IN_MINUTES + minutes * SEC_IN_MINUTES + seconds) / float(SEC_IN_MINUTES) / float(MIN_IN_DEGREES);
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << dec_degrees << " degrees.";

	return 0;
}