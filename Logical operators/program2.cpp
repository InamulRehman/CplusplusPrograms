#include <iostream>
using namespace std;

int main ()
{
    char one;
    cout << "Enter a character: " << flush;
    cin >> one;
    if (one == 'a' ||one == 'e' || one == 'i' || one == 'o' || one == 'u'|| one == 'A' || 
        one == 'E' || one == 'I' || one == 'O' || one == 'U' )
    {
        cout << "Character is vowel letter .  " << endl;

    }
    else
    {
        cout << "Character is not vowel letter .  " << endl;

    }
}