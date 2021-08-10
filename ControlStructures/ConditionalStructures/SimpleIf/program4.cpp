#include <iostream>
using namespace std;

int main()
{
    int s1, s2, s3;
    float avg;
    cout << "Enter marks of first subject: " << flush;
    cin >> s1;
    cout << "Enter marks of second subject: " << flush;
    cin >> s2;
    cout << "Enter marks of third subject: " << flush;
    cin >>  s3;

    avg =  (s1 + s2 + s3) / 3;

    if (avg > 80 )
    {
        cout << "You are above standard." << endl;
        cout << "Addmission granted! " << endl;
    }
}

