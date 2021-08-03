#include <iostream>
using namespace std;

int main()
{
    char character;
    cout << "Enter a character: " << flush;
    cin >> character;
    int asciiCode = character;
    cout << "The ASCII code for " << character << " is " << asciiCode<< endl;
    return 0;

}
