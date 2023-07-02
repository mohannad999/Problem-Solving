/*

Write a program to read Vacation priod
DateFrom and DateTo and make a function to
calculate tha actual Vacation Days

Note : Weekends are excluded

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
{ // if year is divisible by 4 AND not divisible by 100// OR if year is divisible by 400// then it is a leap year
return(Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
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

short DayOfWeekOrder(stDate Date)
{
    short a, y, m;
    a = (14 - Date.Month) / 12;
    y = Date.Year - a;
    m = Date.Month + (12 * a) - 2;
    // Gregorian://0:sun, 1:Mon, 2:Tue...etc
    return (Date.Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
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
bool IsWeakend(short NumberofDayinWeak)
{
    // End of Weak in Jordan Friday(5) & Sutarday(6)

    if (NumberofDayinWeak == 5 || NumberofDayinWeak == 6)
        return true;
    else
        return false;
}
bool IsLastDayInMonth(stDate Date) { return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year)); }
bool IsLastMonthInYear(short Month) { return (Month == 12); }


stDate IncreaseDateByOneDay(stDate Date)
{
    if (IsLastDayInMonth(Date))
    {
        if (IsLastMonthInYear(Date.Month))
        {
            Date.Month = 1;
            Date.Day = 1;
            Date.Year++;
        }
        else
        {
            Date.Day = 1;
            Date.Month++;
        }
    }
    else
    {
        Date.Day++;
    }
    return Date;
}

bool IsDate1BeforeDate2(stDate Date1, stDate Date2) { return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false); }

short CaluteVacationDays(stDate Date1, stDate Date2, bool IncludeEndDay = false)
{
    int Days = 0;
    while (IsDate1BeforeDate2(Date1, Date2))
    { 
        if(!(IsWeakend(DayOfWeekOrder(Date1.Day,Date1.Month,Date1.Year))))
        {
        Days++;
        }

        Date1 = IncreaseDateByOneDay(Date1);
       
      }
    return IncludeEndDay ? ++Days : Days;
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
stDate ReadFullDate(string messege)
{
    stDate Date;
    cout << "\n\n_________________________\n\n";
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
    stDate DateFrom;
    stDate DateTo;
    DateFrom = ReadFullDate("Enter Date From");
    DateTo = ReadFullDate("Enter Date To");
    short actualVacationDays;

  actualVacationDays=CaluteVacationDays(DateFrom,DateTo); 

  cout << "Number of actual Vacation Days "<< actualVacationDays <<"\n\n"; 
    system("pause>0");
    return 0;
}