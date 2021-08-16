#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: " << flush;
    cin >> ch;

    switch (ch)
    {
    case 'a':
    case 'A':   
    case 'e':
    case 'E':   
    case 'i':
    case 'I':    
    case 'o':
    case 'O':  
    case 'u':
    case 'U':
        cout << ch << " is vowel." ;
        break;
        
    default:
        cout << "Not Vowel.";
        break;
    }
}