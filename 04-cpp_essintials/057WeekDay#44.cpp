#include <iostream>
using namespace std;

int main()
{
    int Day ;

    cout << "Enter The Day: " << endl;
    cin >> Day;

    if (Day == 1)
        cout << ("Friday\n");
    else if (Day == 2)
    {
      cout << ("Sat\n"); 
    }
    else if (Day == 3)
    {
        cout << ("sun\n");
    }
    else if (Day == 4)
    {
        cout << ("Mon\n");
    }
    
    else if (Day == 5)
    {
       cout << ("Tue\n");
    }
    else if (Day == 6)
    {
        cout << ("Wed\n");
    }
    else if (Day == 7)
    {
        cout << ("Thr\n");
    }
    
    else 
        cout << ("Invalid Day\n");

}