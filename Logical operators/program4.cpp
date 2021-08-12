#include<iostream>
using namespace std;

int main ()
{
    int a;
    cout << "Enter a number: " << flush;
    cin >> a;
    if (!(a%2 == 0))
        cout << "Number is odd." << endl;
    else
        cout << "Number is even" << endl;
}
