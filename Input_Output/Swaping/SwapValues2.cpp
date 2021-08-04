#include <iostream>
using namespace std;

int main ()
{
    //swaping without using any temporary variable
    int a, b ;
    cout << "Enter first number: " << flush;
    cin >> a ;
    cout << "Enter second number: " << flush;
    cin >> b ;

    cout << "Numbers before swaping are a= " << a << " and b= "<< b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "Numbers after swaping are a= " << a << " and b= "<<b << endl;
    


}