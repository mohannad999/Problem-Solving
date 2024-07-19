/*
write a program to print Numner of :
- Days
-Hours
-Minutes
-Seconds

in a certain Year
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
    return (((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0);
}

void printLeapYearDate(short Year)
{
    cout << "Numer of Days    in Year [" << Year << "] is 366 \n";
    cout << "Numer of Hours   in Year [" << Year << "] is 8784 \n";
    cout << "Numer of Minutes in Year [" << Year << "] is 527040 \n";
    cout << "Numer of Secinds in Year [" << Year << "] is 31622400 \n";
}

void printNotLeapYearDate(short Year)
{
    cout << "Numer of Days    in Year [" << Year << "] is 365 \n";
    cout << "Numer of Hours   in Year [" << Year << "] is 8760 \n";
    cout << "Numer of Minutes in Year [" << Year << "] is 525600 \n";
    cout << "Numer of Secinds in Year [" << Year << "] is 3153600 \n";
}

int main()
{
    short Year = ReadNumber();

    if (IsLeapYear(Year))
    {
        cout << "its a leep Year\n";
        printLeapYearDate(Year);
    }
    else
    {
        cout << "it's not a leap year\n";
        printNotLeapYearDate(Year);
    }
    system("pause>0");
    return 0;
}