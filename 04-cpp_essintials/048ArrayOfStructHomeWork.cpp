#include <iostream>
using namespace std;
struct stPersonalInfo
{
    string FirstName;
    string LastName;
    short Age;
    string Phone;
};
void ReadInfo(stPersonalInfo &Info)
{
    cout << "Enter FirstName: " << endl;
    cin >> Info.FirstName;

    cout << "Enter LastName: " << endl;
    cin >> Info.LastName;

    cout << "Enter Age: " << endl;
    cin >> Info.Age;

    cout << "Enter Phone: " << endl;
    cin >> Info.Phone;
    cout << endl;
}
void PrintInfo (stPersonalInfo Info)
{
    cout << "\n***************************************************\n";
    cout << Info.FirstName << endl;
    cout << Info.LastName << endl;
    cout << Info.Age << endl;
    cout << Info.Phone << endl;
    cout << "\n***************************************************\n";
}
void ReadInfoArray (stPersonalInfo person[2])
{
    ReadInfo(person[0]);
    ReadInfo(person[1]);
}
void PrintInfoArray (stPersonalInfo person[2])
{
    PrintInfo(person[0]);
    PrintInfo(person[1]);
}
int main()
{
    stPersonalInfo person[2];
    ReadInfoArray(person);
    PrintInfoArray(person);
}