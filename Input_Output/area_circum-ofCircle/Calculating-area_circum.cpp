#include <iostream>
using namespace std;

int main ()
{
    float area , radius, cir;
    cout << "Enter radius of circle: " << flush ;
    cin >> radius ;

    area = 3.14 * radius * radius;
    cir = 2 * 3.14 * radius;

    cout << "Area of circle is :  " << area << endl;
    cout << "Circumferance of circle is: " << cir;
    return 0;
}