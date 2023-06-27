/*
problem 12
write a prgram to read date and how many
days to add to it ,
print the result on the screen
*/

#include <iostream>
using namespace std;

struct stDate
{
    short day;
    short months;
    short year;
};

bool isLeapYear(short Year)
{ // if year is divisible by 4 AND not divisible by 100// OR if year is divisible by 400// then it is a leap yearreturn
    (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}
short DayOfWeekOrder(short Day, short Month, short Year)
{
    short a, y, m;
    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;
    // Gregorian://0:sun, 1:Mon, 2:Tue...etc
    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}
string DayShortName(short DayOfWeekOrder)
{
    string arrDayNames[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    return arrDayNames[DayOfWeekOrder];
}
short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

string MonthShortName(short MonthNumber)
{
    string Months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    return (Months[MonthNumber - 1]);
}
void PrintMonthCalendar(short Month, short Year)
{
    int NumberOfDays; // Index of the day from 0 to 6
    int current = DayOfWeekOrder(1, Month, Year);
    NumberOfDays = NumberOfDaysInAMonth(Month, Year);                                  // Print the current month name
    printf("\n  _______________%s_______________\n\n", MonthShortName(Month).c_str()); // Print the columns
    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");                                   // Print appropriate spaces
    int i;
    for (i = 0; i < current; i++)
        printf("     ");
    for (int j = 1; j <= NumberOfDays; j++)
    {
        printf("%5d", j);
        if (++i == 7)
        {
            i = 0;
            printf("\n");
        }
    }
    printf("\n  _________________________________\n\n");
}

void PrintYearCalendar(short Year)
{
    short Month = 1;
    while (Month < 13)
    {
        PrintMonthCalendar(Month, Year);
        Month++;
    }
}

short DaysFromTheBeggingOfYear(short days, short Month, short year)
{
    short NumberoFDays = 0;

    for (int i = 1; i < Month; i++)
    {
        NumberoFDays += NumberOfDaysInAMonth(i, year);
    }
    return (NumberoFDays + days);
}

stDate GetDateFromDayOrderInYear(short DateOrderInYear, short Year)
{
    stDate Date;
    short RemainingDays = DateOrderInYear;
    short MonthDays = 0;
    Date.year = Year;
    Date.months = 1;
    while (true)
    {
        MonthDays = NumberOfDaysInAMonth(Date.months, Year);
        if (RemainingDays > MonthDays)
        {
            RemainingDays -= MonthDays;
            Date.months++;
        }
        else
        {
            Date.day = RemainingDays;
            break;
        }
    }
    return Date;
}

stDate AddDaysToDate(stDate &date, short Adddays)
{
    bool monthMask = false;
    bool YearMask = false;

    while (Adddays > 0)
    {
        if (date.day <= NumberOfDaysInAMonth(date.months, date.year))
        {
            date.day++;
            Adddays--;
        }
        else
        {
            monthMask = true;
        }

        if (monthMask)
        {
            if (date.months != 12)
            {
                date.months++;
                date.day = 1;
            }
            else
            {
                YearMask = true;
            }

            monthMask = false;
        }

        if (YearMask)
        {
            date.year++;
            date.months = 1;
            date.day = 1;
            YearMask = false;
        }
    }
    return date; 
}

short AddDays()
{
    short days;
    cout << "\nHow many days you want to add ? ";
    cin >> days;
    return days;
}
short ReadDay()
{
    short Month;
    cout << "\nPlease enter a Day? ";
    cin >> Month;
    return Month;
}
short ReadMonth()
{
    short Month;
    cout << "\nPlease enter a Month? ";
    cin >> Month;
    return Month;
}
short ReadYear()
{
    short Year;
    cout << "\nPlease enter a year? ";
    cin >> Year;
    return Year;
}
int main()
{
    stDate Date;

    Date.day = ReadDay();
    Date.months = ReadMonth();
    Date.year = ReadYear();

    short NumberOfAddDays = AddDays();

    AddDaysToDate(Date,NumberOfAddDays);

    cout << "Date after add [" << NumberOfAddDays << "] Day is: ";
    cout << Date.day << "/" << Date.months << "/" << Date.year;

    system("pause>0");
    return 0;
}