/*
write a programe to check if year is a leap year or not

*/

#include <iostream>
#include <string>
using namespace std;

short ReadNumber()
{
    short Number;
    cout << "\nEnter the Year? ";
    cin >> Number;
    return Number;
}

bool IsLeapYear(short year)
{
    // return (((year%4==0) && (year%100 !=0))||year%400 ==0)?true:false;
    return (((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0);
}

int main()
{

    if (IsLeapYear(ReadNumber()))
    {
        cout << "its a leep Year";
    }
    else
        cout << "it's not a leap year";

    system("pause>0");
    return 0;
}