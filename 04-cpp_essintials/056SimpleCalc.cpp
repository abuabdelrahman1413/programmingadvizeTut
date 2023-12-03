#include <iostream>
using namespace std;
struct stNumsOperator
{
    int Num1;
    int Num2;
    string Operator;
};
void ReadNumsOperator(stNumsOperator &Info)
{
    cout << "Enter First Number\n";
    cin >> Info.Num1;

    cout << "Enter Second Number\n";
    cin >> Info.Num2;

    cout << "Enter The operator\n";
    cin >> Info.Operator;
}
int Operator(stNumsOperator Info)
{
    if (Info.Operator == "+")
    {
        return (Info.Num1 + Info.Num2);
    }

    else if (Info.Operator == "-")
    {
        return (Info.Num1 - Info.Num2);
    }

    else if (Info.Operator == "*")
    {
        return (Info.Num1 * Info.Num2);
    }

    else if (Info.Operator == "/")
    {
        return (Info.Num1 / Info.Num2);
    }

    else
        cout << "Invalid operator\n";
}

int main ()
{
    stNumsOperator calc;
    ReadNumsOperator(calc);
    int Result = Operator(calc);
    cout << Result << endl;
}