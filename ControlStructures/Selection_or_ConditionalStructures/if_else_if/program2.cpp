#include <iostream>
using namespace std;

int main ()
{
    int units;
    float tBill, eBill;

    cout << "Enter units consumed: " << flush;
    cin >> units;

    if (units <=300) 
    {
        cout << "Cost is Rs. 2 per unit." << endl;
        tBill= units * 2 ;
    }
    else if (units <= 500)
    {
        cout << "Cost is Rs. 5 per unit." << endl;
        tBill = units * 5 ;
    }
        
    else
    {
        cout << "Cost per unit is Rs. 7 " << endl;
        tBill = units * 7;
    }

    tBill = tBill + 150;

    if (tBill > 2000)
    {
        eBill = tBill * 5 /100;
        tBill = tBill + eBill;
    }
    cout << "Your total bill is:  " << tBill << endl;

}
