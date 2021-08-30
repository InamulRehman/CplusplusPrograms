#include <iostream>
using namespace std;

int main ()
{
    int a, b, c, d, e, min, max;
    cout << "Enter five integers: " ;
    cin >> a >> b >> c >> d >> e;
    min = max = a;

    if (b < min)
        min = b;
    if (c < min)
        min = c;
    if (d < min)
        min = d;
    if (e < min)
        min = b;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    if (d > max)
        max = d;
    if (e > max)
        max = e;
    
    cout << "Minimum number is : " << min << endl;
    cout << "Maximum number is : " << max << endl;
    return 0;


}