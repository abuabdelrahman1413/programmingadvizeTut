
#include <iostream>
using namespace std;

int ReadPositiveNumber(string Mesaage)
{
    int Number;
    cout <<Mesaage;
    cin>>Number;
	cout << endl;
    return Number;
}

void PrintNumberPattern(int Number)
{	cout << endl;
	int n=0;
	while (Number != 0) //can use for(int i =Number; i>=1; i--)
	{
		n++;
		for (int i = 1; i <= n; i++)
		{
			cout << n;
		}
		Number--;
		cout << endl;
	}
}

int main()
{
	PrintNumberPattern(ReadPositiveNumber("Please Enter a Number: "));
}
