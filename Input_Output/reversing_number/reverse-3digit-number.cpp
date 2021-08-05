#include <iostream>
using namespace std;

int main ()
{
    int a, b, c;
    cout << "Enter three digit number: " << flush;
    cin >> a;

    b = a / 100;
    a = a % 100;
    c = a / 10;
    a = a % 10;

    cout << "Number in reverse order is: " << a << c << b;
    return 0;

}
