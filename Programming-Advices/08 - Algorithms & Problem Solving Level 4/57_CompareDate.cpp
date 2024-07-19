/*
Write a program to read date 1 and date 2
and Write a function to compare dates
and retuen :

-1 : BEFORE
 0 : EQUAL
 1 : AFTER
*/

#include <iostream>
using namespace std;

enum enCompareDates
{
    BEFORE = -1,
    EQUAL = 0,
    AFTER = 1
};

struct stDate
{
    short Year;
    short Month;
    short Day;
};

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

bool IsDate1EqualDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false;
}

bool IsDate1AfterDate2(stDate Date1, stDate Date2)
{
    return (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2));
}

enCompareDates CompareDates(stDate Date1, stDate Date2)
{
    if (IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2))
    {
        return enCompareDates::BEFORE;
    }

    if (IsDate1AfterDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2))
    {
        return enCompareDates::AFTER;
    }

    if (IsDate1EqualDate2(Date1, Date2))
    {
        return enCompareDates::EQUAL;
    }
}

short ReadDay()
{
    short Month;
    cout << "Please enter a Day? ";
    cin >> Month;
    return Month;
}

short ReadMonth()
{
    short Month;
    cout << "Please enter a Month? ";
    cin >> Month;
    return Month;
}
short ReadYear()
{
    short Year;
    cout << "Please enter a year? ";
    cin >> Year;
    return Year;
}
stDate ReadFullDate(string messege)
{
    stDate Date;
    cout << "\n\n_________________________\n";
    cout << "   " << messege << "   \n";
    cout << "_________________________\n";
    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();
    return Date;
}
void PrintDate(stDate &Date1)
{
    cout << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << "\n\n";
}

int main()
{
    stDate Date1;
    stDate Date2;
    Date1 = ReadFullDate("Enter Date one");

    Date2 = ReadFullDate("Enter Date two");

    short actualVacationDays;



    switch (CompareDates(Date1, Date2))
    {
    case enCompareDates::AFTER:
        cout << "\nDate1 is after Date2\n";
        break;

    case enCompareDates::BEFORE:
        cout << "\nDate1 is Before Date2\n";
        break;

    case enCompareDates::EQUAL:
        cout << "\nDate1 is Equal Date2\n";
        break;
    }
   

    system("pause>0");
    return 0;
}