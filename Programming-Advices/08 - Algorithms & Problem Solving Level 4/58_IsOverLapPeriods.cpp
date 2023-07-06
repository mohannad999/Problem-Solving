/*
Write a program to Read Two perioda
and check if they overlab or not

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


struct stPeriod
{
    stDate StartDate;
    stDate EndDate;

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

    stPeriod Period1; 
    stPeriod Period2; 

  
    Period1.StartDate = ReadFullDate("Enter  Period1 StartDate");

    Period1.EndDate  = ReadFullDate("Enter  Period1 EndDate ");


     
    Period2.StartDate = ReadFullDate("Enter  Period2 StartDate");

    Period2.EndDate  = ReadFullDate("Enter  Period2 EndDate ");

    short actualVacationDays;



    switch (CompareDates(Period1.EndDate,Period2.StartDate))
    {
    case enCompareDates::AFTER:
       // if EndDate of Priod1 End After StartDate of Period2 
       // the Start Date of period1 should after EndDate of Period2
       if(CompareDates(Period1.StartDate,Period2.EndDate)==enCompareDates::AFTER)
       cout << "\nNo Period it's not OverLap\n";
       else 
        cout << "\n Period it's  OverLap\n";
        break;

    case enCompareDates::BEFORE:
        cout << "\nNo Period it's not OverLap\n";
        break;

    case enCompareDates::EQUAL:
          cout << "\n Period it's  OverLap\n";
        break;
    }
   

    system("pause>0");
    return 0;
}