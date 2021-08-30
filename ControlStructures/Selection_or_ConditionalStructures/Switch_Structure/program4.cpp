
// program to get charges for membership in health club based on user choice
#include <iostream>
using namespace std;

int main ()
{
    int ch, mon;
    double charges;
    cout << "Health Club Member Ship Menue:" << endl;
    cout << "\t1. Standard Adult Membership" << endl;
    cout << "\t2. Child Membership" << endl;
    cout << "\t3. Senior Citizen Membership" << endl;
    cout << "\t4. Quit the program" << endl;

    cout << "Enter your choice: " << flush;
    cin >> ch;
    cout << "Enter number of months: " << flush;
    cin >> mon;

    switch (ch)
    {
        case 1:
            {
                charges = 50 * mon;
                break;
            }
        case 2:
            {
                charges = 20 * mon;
                break;
            }
        case 3:
            {
                charges = 40 * mon;
                break;
            }
        case 4:
            {
                cout << "Quiting....";
                break;
            }

        default:
            {
                cout << "Invalid choice...\n";
                cout << "Enter valid choice 1 to 4.\n";
                cout << "Run again program to re enter choice.";
                break;
            }

    }
    if (ch == 1 || ch == 2 || ch == 3)
        cout << "Your Total charges are : " << charges;
}

