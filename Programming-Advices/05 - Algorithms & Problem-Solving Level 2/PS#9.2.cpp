// PS#9.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

unsigned long Reabdnumber(string messege)
{
    unsigned long num;
    do {
        cout << messege;
        cin >> num;
    } while (num <= 0);
    return num;
}



unsigned long SerchNumFreq(unsigned long num, int SerchNum)
{
     int Reminder, FrqNum = 0;

    while (num > 0)
    {
        Reminder = num % 10;
        num /= 10;

        if (Reminder == SerchNum)
            FrqNum++;
    }
    return FrqNum;
}

void NumberFrom0To9(unsigned long num)
{
    for (int i = 0; i <= 9; i++)
    {
       int FrqNum = SerchNumFreq(num, i);
       if (FrqNum > 0)
           cout << "Frequncy of " << i << " : " << FrqNum << endl;
    }
}



int main()
{
    NumberFrom0To9(Reabdnumber("Enter positive number : "));

}

