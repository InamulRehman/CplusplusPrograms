#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter first number: " << flush;
    cin >> a;
    cout << "Enter Second number: " << flush;
    cin >> b;
    if (a % b == 0)
        cout << a <<  " is multiple of " << b << endl;
    else
        cout << a <<  " is not multiple of " << b << endl;
    return 0;
}