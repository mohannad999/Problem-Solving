/*
write a problme to read date1 and date2
and check if date1 less than date2
*/

#include <iostream>
using namespace std;

struct stDate
{
    short day;
    short months;
    short year;
};


void ReadDate(stDate &Date)
{
    cout << "Enter a day   : ";
    cin >> Date.day;
    cout << "Enter a Month : ";
    cin >> Date.months;
    cout << "Enter a Year  : ";
    cin >> Date.year;
}

string CompereDate(stDate Date1, stDate Date2)
{
    if (Date1.year > Date2.year)
        return "Date One Bigger than Date two";

    else if (Date1.year < Date2.year)
        return "date two Bigger than Date one";

    else if (Date1.year == Date2.year)
    {
        if (Date1.months > Date2.months)
            return "Date One Bigger than Date two";

        else if (Date1.months < Date2.months)
            return "date two Bigger than Date one";

        else if (Date1.months == Date2.months)
        {
            if (Date1.day > Date2.day)
                return "Date One Bigger than Date two";

            else if (Date1.day < Date2.day)
                return "Date two Bigger than Date one";

            else if (Date1.day == Date2.day)
                return "Same Day";
        }
    }
}

int main()
{
    stDate date1;
    stDate date2;
    cout << "Enter DATE 1 : \n";
    ReadDate(date1);
    cout << "Enter DATE 2 : \n";
    ReadDate(date2);

    cout << CompereDate(date1, date2);

    system("pause>0");
    return 0;
}