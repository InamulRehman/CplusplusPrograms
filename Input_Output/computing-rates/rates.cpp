#include <iostream>
using namespace std;

int main ()
{
    float e1, e2, g1, g2, p1, p2;
    cout << "Enter cutrrent electricity rate per unit:  " << flush;
    cin >> e1;
    cout << "Enter cutrrent gas rate per unit:  " << flush;
    cin >> g1;
    cout << "Enter cutrrent petrol rate per unit:  " << flush;
    cin >> p1;

    e2 = e1 * 1.1;
    g2 = g1 * 1.1;
    p2 = p1 * 1.1;           // 10% adding to current rate , 10% = 1/10 ______________(100+10) %

    cout << " New electricity rate per unit:  " << e2 << endl;
    cout << " New gas rate per unit:  "  << g2 << endl;
    cout << " New petrol rate per unit:  " << p2 ;
    return 0;


}
