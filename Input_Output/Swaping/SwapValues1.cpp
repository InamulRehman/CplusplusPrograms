#include <iostream>
using namespace std;

int main ()
{
    //swaping using temporary variable
    int a, b, temp ;
    cout << "Enter first number: " << flush;
    cin >> a ;
    cout << "Enter second number: " << flush;
    cin >> b ;

    cout << "Numbers before swaping are a= " << a << " and b= "<<b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "Numbers after swaping are a= " << a << " and b= "<<b << endl;
    return 0;
}