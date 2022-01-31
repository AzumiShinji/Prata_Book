#include <iostream>

// Символическая переменная
#define INCHES_IN_FOOT 12
#define INCHES_IN_METERS 0.0254
#define POUNDS_IN_KILOGRAMS 2.2

int main()
{
	using namespace std;
	int feet, inches, pounds;
	float heightInMeters, weightInKilograms, BMI;

	cout << "Enter your height in feet:";
	cin >> feet;
	cout << "inches:";
	cin >> inches;
	cout << "Enter your weight in pounds:";
	cin >> pounds;

	heightInMeters = (feet * INCHES_IN_FOOT + inches) * INCHES_IN_METERS;
	weightInKilograms = pounds / POUNDS_IN_KILOGRAMS;
	BMI = weightInKilograms / powf(heightInMeters, 2);

	cout << "Your BMI is " << BMI;

	return 0;
}