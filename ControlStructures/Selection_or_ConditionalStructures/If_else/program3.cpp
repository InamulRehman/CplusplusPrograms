#include <iostream>
using namespace std;

int main ()
{
    int grade;
    float salary, bonus;
    cout << "Enter salary: " << flush;
    cin >> salary;
    cout << "Enter Grade: " << flush;
    cin >> grade;
    if (grade > 15)
        bonus = salary * 50 / 100;
    else 
        bonus = salary * 25 / 100;
    salary = salary + bonus;
    cout << "Yopur bonus is: " << bonus << endl;
    cout << "Your total salary is: RS " << salary << endl;
}