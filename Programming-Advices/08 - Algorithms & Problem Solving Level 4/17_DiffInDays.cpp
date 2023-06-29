/*
Write a problem to read Date ,
and make function to calculate the difference in days

Note : Date1 should be less than date2

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
{ // if year is divisible by 4 AND not divisible by 100// OR if year is divisible by 400// then it is a leap yearreturn
    (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

short DaysFromTheBeggingOfYear(stDate Date)
{
    short NumberoFDays = 0;

    for (int i = 1; i < Date.Month; i++)
    {
        NumberoFDays += NumberOfDaysInAMonth(i, Date.Year);
    }
    return (NumberoFDays + Date.Day);
}

short DiffInDays(stDate Date1, stDate Date2)
{
    return (DaysFromTheBeggingOfYear(Date1) - DaysFromTheBeggingOfYear(Date2));
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

    stDate Date1;
    stDate Date2;
    short NumberOfDiffernceDays;

    Date1 = ReadFullDate();
    Date2 = ReadFullDate();

    NumberOfDiffernceDays = DiffInDays(Date2, Date1);

    cout << "Differnce Between Date 1 and Date 2 = " << NumberOfDiffernceDays << " \n\n";

    system("pause>0");
    return 0;
}
