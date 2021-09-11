#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class ATM
{
    private:
                                    //Private member variables
        long int account_No;
        string name;
        int PIN;
        double balance;
        string mobile_no;

    public:
                                    //Public member functions

// Member function to set (formal parameters )data to member variables
        void setData(long int account_No_a, string name_a, int PIN_a, double balance_a,
        string mobile_no_a)
        {
            account_No = account_No_a;
            name = name_a;
            PIN = PIN_a;
            balance = balance_a;
            mobile_no = mobile_no_a;
        }

// Member function to get user's account number
        long int getAccountNo()
        {
            return account_No;
        }
// Member function to get user's name
        string getName()
        {
            return name;
        }
// Member function to get user's PIN
        int getPin()
        {
            return PIN;
        }
// Member function to check user's balance
        double getBalance()
        {
            return balance;
        }
// Member function to get user's name
        string getMobileNo()
        {
            return mobile_no;
        }
// setMobile function is Updating the user's mobile number
        void setMobile(string mobile_prev, string mobile_new)
        {
            if(mobile_prev == mobile_no)
            {
                mobile_no = mobile_new;

                cout << endl << "Successfully updated mobile number " ;
                _getch();
            }
            else 
            {
                cout << endl << "Incorrect Old Mobile number!!! ";
                _getch();
            }

        }
// cashWithdraw function is used to widthdraw money from ATM
        void cashWithDraw(double amount_a)
        {
            if (amount_a > 0 && amount_a < balance)
            {
                balance -= amount_a;
                cout << endl << "Please Collect Your Cash ";
                cout << endl << "Your Available Balance: " << balance;
                _getch();
            }
            else 
            {
                cout << endl << "Invalid input or Insufficient balance";
                _getch();
            }
        }

        

};
int main()
{
    int choice = 0, enterPIN;                   // enterPin  ,  enterAccountNo  to authenticate the user
    long enterAccountNo;

    system("cls");

// created user(object)
    ATM user1;                              

// Setting user's details (user1 an object)
    user1.setData(1234567, "Inam", 135, 44000.00, "03218280634");


    do
    {
        system("cls");
        cout << "_________Welcome to ATM__________"<< endl;

// Asking user to enter account no and PIN to authenticate the user
        cout << "Enter Your Account No ";
        cin >> enterAccountNo;
        cout << "Enter PIN " ;
        cin >> enterPIN;

// Checking whether user is valid or not
        if ( (enterAccountNo == user1.getAccountNo()) && (enterPIN == user1.getPin()) )
        {
            do
            {
                int amount = 0;
                string oldMobileNo, newMobileNo;

                system("cls");

                //User's Interface

                cout << endl << " *********** Welcome to ATM *********** "<< endl;
                cout << endl << "Select Option " ;
                cout << endl << "1. Check Balance";
                cout << endl << "2. Cash WithDrawl";
                cout << endl << "3. Show User DEtails";
                cout << endl << "4. Update Mobile NUmber";
                cout << endl << "5. Exit" << endl;
                cin >> choice;                          // taking user's choice

                switch (choice)                         // switch condition
                {
                case 1: 
                                                // if user presses 1
                    cout << endl << "Your Bank Balance is: " << user1.getBalance();
                    _getch();
                    break;

                case 2:
                                                // if user presses 2
                    cout << endl << "Enter the Amount ";
                    cin >> amount;
                    user1.cashWithDraw(amount);
                    break;

                case 3:
                                                // If user presses 3
                    cout << endl << " `````` User's Details Are `````` ";
                    cout << endl << " -->> Account No " << user1.getAccountNo();
                    cout << endl << " -->> Name " << user1.getName();
                    cout << endl << " -->> Balance " << user1.getBalance();
                    cout << endl << " -->> Mobile No " << user1.getMobileNo();
                    _getch();
                    break;

                case 4:

                                                //if user presses 4
                    cout << endl << "Enter old mobile number " ;
                    cin >> oldMobileNo;
                    cout << endl << "Enter new mobile Number ";
                    cin >> newMobileNo;
                    user1.setMobile(oldMobileNo, newMobileNo);
                    break;

                case 5:

                    exit(0);
                
                    break;
                
                default:

                    cout << "Please enter valid choice!!! ";
                    break;
                }
                
            } while (1);
            
        }

    } while (1);                         // condition will always be true(because of 1) and loop is capable of running infiite times
                                                                
    




}