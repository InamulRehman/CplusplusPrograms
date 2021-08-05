#include <iostream>
using namespace std;

int main()
{
    int h, w, d;
    cout << "Enter number of hours: " << flush;
    cin >> h;
    
    w = h / 168;          // one week = 168 hours
    h = h % 168;
    d = h / 24;           // one day = 24 hours
    h = h % 24;

    cout << "Weeks are: " << w << endl;
    cout << "Days are: " << d << endl;
    cout << "Hours are:  " << h ;
    return 0;
}

