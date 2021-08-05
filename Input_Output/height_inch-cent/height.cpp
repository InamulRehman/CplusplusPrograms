#include <iostream>
using namespace std;

int main()
{
    int height_in_inches;
    float height_in_cent;
    cout << "Enter height in inches: " << flush;
    cin >> height_in_inches;

    height_in_cent = height_in_inches * 2.54;
    cout << "Height in centimeters is: " << height_in_cent;
    return 0;
}