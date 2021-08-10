# include <iostream>
using namespace std;

int main ()
{
    int a;
    cout << "Enter a number: " << flush;
    cin >> a;

    if (a > 0)
        cout << "It is positive niumber." << endl;
    if (a < 0)
        cout << "It is negative niumber." << endl;
    if (a == 0)
        cout << "It is zero." << endl;

    return 0;
}
