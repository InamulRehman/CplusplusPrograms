#include <iostream>
//#include <conio.h>

using namespace std;
int main()

{
    double principleAmt, rateOfInterest, noOfYears, simpleInterest;
    cout << "Enter Principle Ammount: " << flush;
    cin >> principleAmt;
    
    
    cout  << "\nEnter Rate of interest: " << flush;
    cin >> rateOfInterest;
    
    cout <<  "\nEnter Number of years: " << flush;
    cin >> noOfYears;

    simpleInterest = (principleAmt* rateOfInterest* noOfYears)/100;

    cout << "\nSimple interest: " << simpleInterest ;

    return 0;


}