#include <iostream>
using namespace std;

int main ()
{
    int dividend, divisor, quotient, remainder;
    cout << "Enter Dividend: " << flush;
    cin >> dividend;
    cout << "Enter Divisor " << flush;
    cin >> divisor;

    quotient = dividend/ divisor;
    remainder = dividend % divisor;

    cout << "Quotient is:  " <<  quotient << endl;
    cout << "Remainder is: " << remainder << endl;
    return 0;
    
}