#include <iostream>
using namespace std;

int main ()
{
    long int a, b, c, d, e;
    cout << "Enter five digit number: " << flush;
    cin >> a;

    b = a / 10000;
    a = a % 10000;
    c = a / 1000;
    a = a % 1000;
    d = a / 100;
    a = a % 100;
    e = a / 10;
    a = a % 10;

    cout << "Number in reverse order is: " << a << e << d << c << b;
    return 0;

}
