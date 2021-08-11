#include <iostream>
using namespace std;

int main()
{
    int tScore;
    cout << "Enter your test score: " << flush;
    cin >> tScore;
    
    if (tScore >= 90)
        cout << "Your Grade is A. " << endl;
    else if (tScore >=80)
        cout << "Your Grade is B. " << endl;
    else if (tScore >=70)
        cout << "Your Grade is C. " << endl;
    else if (tScore >=60)
        cout << "Your Grade is D. " << endl;
    else
        cout << "Your Grade is F" ;
    return 0;
    
    
}