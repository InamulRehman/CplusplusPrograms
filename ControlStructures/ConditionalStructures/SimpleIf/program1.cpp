#include <iostream> 
using namespace std ;

int main ()
{
    int marks ;
    cout << "Enter your marks:  " << flush;
    cin >> marks;
    if (marks >= 40 )
        cout << "Congrats!! You have passed."<< endl;
    return 0;
}