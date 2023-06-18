/*
write a program to print Numner of :
- Days
-Hours
-Minutes
-Seconds

in a certain Month
*/

#include <iostream>
using namespace std;

enum Months
{
    Jan = 1,
    Feb = 2,
    Mar = 3,
    Apr = 4,
    May = 5,
    Jun = 6,
    Jul = 7,
    Aug = 8,
    Sep = 9,
    Oct = 10,
    Nov = 11,
    Dec = 12,
};

short ReadNum(string messege)
{
    short Year;
    cout << messege;
    cin >> Year;
    return Year;
}

bool isLeapYear(short Year)
{
    // if year is divisible by 4 AND not divisible by 100
    // OR if year is divisible by 400// then it is a leap year
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short CheckMonthDays(short Month, short Year)
{
  if (Month < 1 || Month > 12)
        return 0;

    // 31 days
    if (Month == Jan || Month == Mar || Month == May || Month == Jul || Month == Aug || Month == Oct || Month == Dec)
        return 31;

    // 30  days
    if (Month == Apr || Month == Jun || Month == Sep || Month == Nov)
        return 30;

    if (Month == Feb)
        return isLeapYear(Year) ? 29 : 28;

        
}

// short NumberOfDaysInAMonth(short Month, short Year)
// {
//     if (Month < 1 || Month > 12)
//         return 0;
//     if (Month == 2)
//     {
//         return isLeapYear(Year) ? 29 : 28;
//     }
//     short arr31Days[7] = {1, 3, 5, 7, 8, 10, 12};
//     for (short i = 1; i <= 7; i++)
//     {
//         if (arr31Days[i - 1] == Month)
//             return 31;
//     } // if you reach here then its 30 days.
//     return 30;
// }

short NumberOfDaysInAMonth(short Month, short Year)
{
    return CheckMonthDays(Month, Year);
}

short NumberOfHoursInAMonth(short Month, short Year)
{
    return NumberOfDaysInAMonth(Month, Year) * 24;
}

int NumberOfMinutesInAMonth(short Month, short Year)
{
    return NumberOfHoursInAMonth(Month, Year) * 60;
}

int NumberOfSecondsInAMonth(short Month, short Year)
{
    return NumberOfMinutesInAMonth(Month, Year) * 60;
}

int main()
{
    short Year = ReadNum("Please Enter the Year : ");
    short Month = ReadNum("Please Enter the Month : ");

    cout << "\nNumber of Days    in Month [" << Month << "] is " << NumberOfDaysInAMonth(Month, Year);
    cout << "\nNumber of Hours   in Month [" << Month << "] is " << NumberOfHoursInAMonth(Month, Year);
    cout << "\nNumber of Minutes in Month [" << Month << "] is " << NumberOfMinutesInAMonth(Month, Year);
    cout << "\nNumber of Seconds in Month [" << Month << "] is " << NumberOfSecondsInAMonth(Month, Year);
    system("pause>0");
    return 0;
}