/*
wirte a programe to read Date 1 and Date 2 and check :
1- Is it's last day in a month
2- Is it's last month in a year
*/

#include <iostream>
using namespace std;
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

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;

    int NumberOfDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];
}

bool IsLastDayInMonth(stDate Date)
{
    return (NumberOfDaysInAMonth(Date.Month, Date.Year) == Date.Day);
}

bool IsLastmonthInyear(short Month)
{
    return (Month == 12);
}
short ReadDay()
{
    short Day;
    cout << "\nPlease enter a Day? ";
    cin >> Day;
    return Day;
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
    cout << "Please enter a Year? ";
    cin >> Year;
    return Year;
}

stDate ReadFullDate()
{
    stDate Date;
    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();
    return Date;
}
int main()
{
    stDate Date1 = ReadFullDate();

    if (IsLastDayInMonth(Date1))
        cout << "Yes it's last day in Month \n";
    else
        cout << "No, it's not last day in Month \n";

    if (IsLastmonthInyear(Date1.Month))
        cout << "Yes it's last Month in Year\n";
    else
        cout << "No, it's not last  Month in Year\n";

    system("pause>0");
    return 0;
}