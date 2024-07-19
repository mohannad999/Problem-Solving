/*
Write a programe to read a date , and
print the day name of week
*/

#include <iostream>
#include <string>
using namespace std;

string dayWeakName[] = {"SUN", "MON", "TUE", "WEN", "THE", "FRI", "SAT"};

struct Date
{
    short year;
    short month;
    short day;
};

struct TargetDay
{
    string date;
    short dayOrder;
    string DayName;
};

enum Dayweak
{
    SUN = 0,
    MON = 1,
    TUE = 2,
    WEN = 3,
    THE = 4,
    FRI = 5,
    SAT = 6,
};

short ReadNum(string messege)
{
    short num;
    cout << messege;
    cin >> num;
    return num;
}

void ReadDate(Date &date)
{
    date.year = ReadNum("Please enter a year ?");

    date.month = ReadNum("Please enter a Month ?");

    date.day = ReadNum("Please enter a day ?");
}




void CalculateDayWeak(Date &date, TargetDay &targetday)
{
    // Using Gregorian calender calculation
    // SUN : 0 , MON : 1 , etc
    short a, y, m, d;
    ReadDate(date);
    targetday.date = to_string(date.day) + "/" + to_string(date.month) + "/" + to_string(date.year);

    a = (14 - date.month) / 12;
    y = date.year - a;
    m = date.month + 12 * a - 2;

    targetday.dayOrder = (date.day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
    targetday.DayName = dayWeakName[targetday.dayOrder];
}

void PrintDayWeak(TargetDay targetday)
{
    cout << "Date       :" << targetday.date << "\n";
    cout << "Day Order  :" << targetday.dayOrder << "\n";
    cout << "Day name   :" << targetday.DayName << "\n";
}

int main()
{
    Date date;
    TargetDay targetday;
    CalculateDayWeak(date, targetday);
    PrintDayWeak(targetday);

    system("pause>0");
    return 0;
}