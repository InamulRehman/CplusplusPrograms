
// program to convert ASCII to character and vice versa
#include <iostream>
using namespace std;

int main ()
{   
    int ch, num;
    char charac;
    cout << "Enter your choice 1 or 2 : "<< endl;
    cout << "\t1. ASCII to Character Converter" << endl;
    cout << "\t2. Character to ASCII Coverter" << endl;

    cin >> ch;

    switch(ch)
    {
        case 1:
            {
                cout << "Enter ASCII code you want to convert: " << flush;
                cin >> num;

                charac = num;
                cout << "Your character is : " << charac;
                break;
            }
        case 2:
            {
                cout << "Enter character you want to convert: " << flush;
                cin >> charac;

                num = charac;
                cout << "Your ASCII code is : " << num;
                break;
            }

        default:
            {
                cout << "You entered invalid choice.\n Pkease try again and enter valid choice 1 or 2";
                break;
            }
    }


}