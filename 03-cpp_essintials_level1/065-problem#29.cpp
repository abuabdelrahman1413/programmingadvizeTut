#include <iostream>
using namespace std;
int main()
{
    //print from 1 to n;
    short n, i,sum=0;
    cout << "Enter N: " <<endl;
    cin >> n;
    i = 1;
	cout << "***********" << endl;
    while ( i <= n ){
        if ( i % 2 == 0){
            sum = sum + i;
        }
        i++;
    }
    cout << sum << endl;
        
}
