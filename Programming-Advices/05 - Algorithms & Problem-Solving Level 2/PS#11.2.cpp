// PS#11.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int Reabdnumber(string messege)
{
    int num;
    do {
        cout << messege;
        cin >> num;
    } while (num <= 0);
    return num;
}

int ReverseNum(int Num)
{
    int Reminder, ReverceNumber = 0;

    while (Num > 0)
    {
        Reminder = Num % 10;
        Num /= 10;
        ReverceNumber = ReverceNumber * 10 + Reminder;

    }
    return ReverceNumber;
}

void PrintNum(bool IsPainderNumber)
{
    if(IsPainderNumber)
        cout << "\nYes , it is a Palindrome number.\n";
    else     
        cout << "\nNo , it is NOT a Palindrome number.\n";

}

bool IsPainderNumber(int num )
{
    int ReverceNumber = ReverseNum(num);
    return (num == ReverceNumber);
}


int main()
{
    PrintNum(IsPainderNumber(Reabdnumber("Enter The Number : ")));

}

