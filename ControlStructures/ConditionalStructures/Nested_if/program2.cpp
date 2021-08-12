#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter three numbers: " << flush;
    cin >> a >> b >> c;
    if (a == b )
    {
        if (a == c)
            {
                cout << "All numbers are equal";
            }
            else
            {
                cout << "All numbers are different. " ;
            }
   }
   else 
   {
      cout << "All numbers are not equal. " ; 
   }
}
