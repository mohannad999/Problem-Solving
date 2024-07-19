
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

void IncreaseDatebyoneDay(stDate &Date)
{
    ((IsLastmonthInyear((Date.Month))) && (IsLastDayInMonth((Date))) ? Date.Day = 1, Date.Month = 1, Date.Year++ : ((IsLastDayInMonth((Date))) && (!IsLastmonthInyear((Date.Month))) ? Date.Day = 1, Date.Month++ : (!IsLastDayInMonth((Date))) && (!IsLastmonthInyear((Date.Month))) ? Date.Day++
                                                                                                                                                                                                                                                                                      : Date.Day));
}

// void IncreaseDatebyoneDay(stDate &Date)
// {
//     if ((IsLastmonthInyear(Date.Month)) && (IsLastDayInMonth(Date)))
//     {
//         Date.Day = 1;
//         Date.Month = 1;
//         Date.Year++;
//     }
//     else if ((IsLastDayInMonth(Date)) && (!IsLastmonthInyear(Date.Month)))
//     {
//         Date.Day = 1;
//         Date.Month++;
//     }

//     else if (!IsLastDayInMonth(Date) && !IsLastmonthInyear(Date.Month))
//         Date.Day++;
// }

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

    IncreaseDatebyoneDay(Date1);
    cout << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    system("pause>0");
    return 0;
}