/*
Write a program to read date 1 and date 2 
and check if date 1 is after date 2
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

bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

bool IsDate1AftereDate2(stDate Date1, stDate Date2)
{
    return !(IsDate1BeforeDate2(Date1,Date2));
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

cout<< "Is Date one After date Two ?\n"; 

if(IsDate1AftereDate2(Date1,Date2))
{
    cout<<"Yes , Date 1 is after Date 2\n";
}
else 
    cout << "No , Date 1 isn't after Date 2\n" ;

  

    system("pause>0");
    return 0;
}