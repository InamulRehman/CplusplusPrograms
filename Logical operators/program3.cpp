#include<iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter character: " << flush;
    cin >> c;
    if (c >= 'A' && c <='Z')
        cout << c << " is capital letter. " ;
    else if (c >= 'a' && c <='z')
        cout << c << " is small letter. " ;
    else if (c >= '0' && c <='9')
        cout << c << " is numeric digit. " ;
    else
        cout << c << " is special symbol " ;
    return 0;
}