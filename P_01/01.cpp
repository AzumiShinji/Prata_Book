#include <iostream>

int main()
{
    const int module = 12;

    using namespace std;
    int height;
    cout << "Enter your height in inches:_____\b\b\b\b\b";
    cin >> height;
    int foots = height / module;
    int inches = height % module;
    cout << "Your height is " << foots << " feet and " << inches << " inches.";

    return 0;
}