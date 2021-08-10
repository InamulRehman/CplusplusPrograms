#include <iostream>
using namespace std;

int main ()
{
    int a, b, c , max;
    cout << "Enter first number: " << flush ;
    cin >> a;
    cout << "Enter second number: " << flush ;
    cin >> b;
    cout << "Enter third number: " << flush ;
    cin >> c;
    max = a;
     
    if (b > a)         // can also use max instead of a variable
        max = b;
    if (c > b )        // can also use max instead of  b variable
        max = c;
    cout << "Maximum number is: " << max;
    return 0;
 


}