/*
Write a problem to read date and
make functions to decrease
dates as following :


- DecreaseDateByXDays
- DecreaseDateByOneWeak
- DecreaseDateByOneWeak
- DecreaseDateByXWeaks
- DecreaseDateByOneMonth
- DecreaseDateByXMonth
- DecreaseDateByOneYear
- DecreaseDateByXYear
- DecreaseDateByXYearFaster
- DecreaseDateByOneDecade
- DecreaseDateByXDecades
- DecreaseDateByXDecadesFaster
- DecreaseDateByOneCentery
- DecreaseDateByOneMilennium

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

void DecreaseDatebyoneDay(stDate &Date)
{
    ((Date.Day == 1 && Date.Month == 1) ? Date.Month = 12, Date.Year--, Date.Day = NumberOfDaysInAMonth(Date.Month, Date.Year) : (Date.Day == 1 && Date.Month != 1) ? Date.Month--, Date.Day = NumberOfDaysInAMonth(Date.Month, Date.Year) : Date.Day--); //   : Date.Day));
    //     if(Date.Day==1&& Date.Month==1)
    //    {
    //     Date.Month=12;
    //     Date.Year--;
    //     Date.Day =NumberOfDaysInAMonth(Date.Month,Date.Year) ;
    //    }

    //    else if (Date.Day==1 &&Date.Month !=1)
    //    {
    //     Date.Month --;
    //     Date.Day =NumberOfDaysInAMonth(Date.Month,Date.Year) ;
    //    }

    //    else if(Date.Day!=1)
    //    {
    //     Date.Day--;
    //    }
}

void DecreaseDateByXDays(short NumberofDays, stDate &Date)
{
    while (NumberofDays > 0)
    {
        DecreaseDatebyoneDay(Date);
        NumberofDays--;
    }
}

void DecreaseDateByOneWeak(stDate &Date)
{
    DecreaseDateByXDays(7, Date);
}

void DecreaseDateByXWeaks(short NumberofWeaks, stDate &Date)
{
    while (NumberofWeaks > 0)
    {
        DecreaseDateByOneWeak(Date);
        NumberofWeaks--;
    }
}

void DecreaseDateByOneMonth(stDate &Date)
{
    if (Date.Month == 1)
    {
        Date.Year--;
        Date.Month = 12;
    }
    else
        Date.Month--;

    // last check day in date should not exceed max days in the current month
    //  example if date is 31/3/2022 decreasing one month should not be 31/2/2022, it should
    //  be 28/2/2022
    short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);
    if (Date.Day > NumberOfDaysInCurrentMonth)
    {
        Date.Day = NumberOfDaysInCurrentMonth;
    }
}


void DecreaseDateByXMonth(short NumberofMonths, stDate &Date)
{

    while (NumberofMonths > 0)
    {
        DecreaseDateByOneMonth(Date);
        NumberofMonths--;
    }
}

void DecreaseDateByOneYear(stDate &Date)
{
    Date.Year--;
}

void DecreaseDateByXYear(short NumberofYear, stDate &Date)
{
    while (NumberofYear > 0)
    {
        DecreaseDateByOneYear(Date);
        NumberofYear--;
    }
}

void DecreaseDateByXYearFaster(short NumberofYear, stDate &Date)
{
    Date.Year = Date.Year - NumberofYear;
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

void PrintDate(stDate &Date1)
{
    cout << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << "\n";
}
int main()
{
    stDate Date1 = ReadFullDate();

    cout << "Date after :  \n";

    DecreaseDatebyoneDay(Date1);
    cout << "01-Decrease one day is        : ";
    PrintDate(Date1);

    cout << "02-Adding 10 days is        : ";
    DecreaseDateByXDays(10, Date1);
    PrintDate(Date1);

    cout << "03-Adding One Weak is       : ";
    DecreaseDateByOneWeak(Date1);
    PrintDate(Date1);

    cout << "04-Adding 10 Weaks is       : ";
    DecreaseDateByXWeaks(10, Date1);
    PrintDate(Date1);

    cout << "05-Adding One Month is      : ";
    DecreaseDateByOneMonth(Date1);
    PrintDate(Date1);

    cout << "06-Adding 5 Month is        : ";
    DecreaseDateByXMonth(5, Date1);
    PrintDate(Date1);

    cout << "07-Adding One Year is       : ";
    DecreaseDateByOneYear(Date1);
    PrintDate(Date1);

    cout << "08-Adding 10 Year is        : ";
    DecreaseDateByXYear(10, Date1);
    PrintDate(Date1);

    cout << "09-Adding 10 Year is Faster : ";
    DecreaseDateByXYearFaster(10, Date1);
    PrintDate(Date1);

    // cout << "01-Adding on day is : " << IncreaseDatebyoneDay(Date1) << "\n";
    system("pause>0");
    return 0;
}