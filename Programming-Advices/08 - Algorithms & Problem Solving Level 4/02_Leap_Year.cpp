/*
write a programe to check if year is a leap year or not 

*/


#include <iostream>
#include <string>
using namespace std;

int ReadNumber()
{
    int Number;
    cout << "\nEnter the Year? ";
    cin >> Number;
    return Number;
}


bool IsLeapYear(int year)
{
    if((year%4==0) && (year%100 !=0))
    return true ; 
    else if(year%400 ==0)
    return true ; 
    else 
    return false; 
}

int main()
{
   
if(IsLeapYear(ReadNumber()))
{
    cout<< "its a leep Year";
}
else 
cout<<"it's not a leap year";

    system("pause>0");
    return 0;
}