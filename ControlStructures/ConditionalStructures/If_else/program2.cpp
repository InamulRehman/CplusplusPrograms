#include <iostream>
using namespace std;

int main ()                               // search more about leap year..
{
    int a;
    cout << "Enter a year: " << flush;
    cin >> a;
    if (a % 4 == 0) 
        cout << a << " is leap year." << endl;
    else
        cout << a << " is not leap year." << endl;
    return 0;
}
