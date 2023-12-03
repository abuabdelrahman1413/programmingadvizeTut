#include <iostream>
using namespace std;

int main()
{
    short ATMPin;
    int Balnce = 75000;

    cout << "Enter your ATM Pin: " << endl;
    cin >> ATMPin;

    if (ATMPin == 1234)
        cout << Balnce << " $\n";
    else    
        cout << "Invalid ATM pin\n";
}