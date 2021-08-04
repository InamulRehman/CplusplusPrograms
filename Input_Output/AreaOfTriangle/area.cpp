#include <iostream>
using namespace std;

int main ()
{
    float base, height, area;
    cout << "Enter base of triangle: " << flush;
    cin >> base;
    cout << "Enter height of triangle: " << flush;
    cin >> height;

    // area of square = width * height
    area = 0.5 * base * height;

    cout << "Area of triangle is :  " << area << endl;
    return 0;
}
