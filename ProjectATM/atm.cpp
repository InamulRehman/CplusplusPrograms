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

        }
// cashWithdraw function is used to widthdraw money from ATM
        void cashWithDraw(double balance)
        {

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
                case 1:                                 // if user presses 1
                    cout << endl << "Your Bank Balance is: " << user1.getBalance();
                    _getch();
                    break;
                case 2:
                
                    break;
                case 3:
                
                    break;
                case 4:
                
                    break;
                case 5:
                
                    break;
                
                default:
                    break;
                }

                


            } while (1);
            
        }

    } while (1);                         // condition will always be true(because of 1) and loop is capable of running infiite times
                                                                
    




}