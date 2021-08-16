#include <iostream>
using namespace std;

int main()
{
    float a, b, res;
    char op;
    cout << "Enter numbers: " << flush;
    cin >> a >> b;
    cout << "Enter operator: " << flush;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a-b;
        break;
    case '*':
        cout << a*b;
        break;
    case '/':
        if (b == 0)
            cout << "error.";
        else 
            cout << a/b;
        break;
    
    default:
        cout << "Invalid operator.";
        break;
    }
        

}