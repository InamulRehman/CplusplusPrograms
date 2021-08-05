#include <iostream> 
using namespace std;

int main ()
{
    int vi, vf, a, t;
    cout << "Enter initial velocity: " << flush;
    cin >> vi;
    cout << "Enter acceleration: " << flush;
    cin >> a;
    cout << "Enter time span: " << flush;
    cin >> t;
    vf = vi + a * t;
    cout << "Final velocity is: " << vf;
    return 0;
}