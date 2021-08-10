#include<iostream>
using namespace std;

int main ()
{
    int a, b;
    cout << "Enter first number: " << flush;
    cin >> a;
    cout << "Enter second number: " << flush;
    cin >> b;
    if (a == b)
        cout << a << " is equal to " << b << endl;
    return 0;
}