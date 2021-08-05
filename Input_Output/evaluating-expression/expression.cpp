#include <iostream>
using namespace std;

int main ()
{
    int even , odd, result ;
    cout << "Enter even number: " << flush;
    cin >> even;
    cout << "Enter odd number: " << flush;
    cin >> odd;

    result =  1000-((even * 5 )+( odd * 3 ));

    cout << "Result is: " << result;


}