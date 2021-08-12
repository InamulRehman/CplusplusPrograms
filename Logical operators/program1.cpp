#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter three numbers:  " << flush;
    cin >> a >> b  >> c;
    if (a > b && a > c)
    {
        cout << a << " is the greatest number. ";
    }
    else if (b > a && b > c)
    {
        cout << b << " is greatest number.";

    }
    else
    {
        cout << c << " is greatest number.";
    }
    
}