#include <iostream>
using namespace std;

int main ()
{
    double dis, spd, time;
    cout << "Enter distance traveled by vehicle in miles: " << flush;
    cin >> dis;
    cout << "Enter speed of vehicle(mph): " << flush;
    cin >> spd;

    time = dis/ spd;

    cout << "Time required to reach the destination is : " << time << " hours. "<< endl;

}