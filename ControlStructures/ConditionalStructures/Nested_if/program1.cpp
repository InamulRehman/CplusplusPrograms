#include <iostream> 
using namespace std;

int main ()
{
    int a, b, c;
    cout << "Enter three numbers: " << flush;
    cin >> a >> b >> c;

   /* sml = a;

    if (b<a)
        {
            sml = b;
            if (c<b)
            {
                sml = c;
            }
        }
    cout << "Smallest number is: " << sml;           */

    if (a<b)
        {
            if (a<c)
            {
                cout << "Smallest number is: " << a;
            }
            else
            {
                cout << "Smallest number is: " << c;
            }
        }
        else
        {
            if (b <c)
            {
                 cout << "Smallest number is: " << b;

            }
            else
            {
                cout << "Smallest number is: " << c;
            }
        }


    return 0;


}