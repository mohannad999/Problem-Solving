// PS#8.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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



int SerchNumFreq(int num ,int SerchNum)
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



int main()
{

    int fullnumber = Reabdnumber("Enter the Whole number: "); 
    int Serchnum = Reabdnumber("Enter the spcific Number: "); 
    
    cout << "The total freqncy of " << Serchnum << " in " << fullnumber << " = " << SerchNumFreq(fullnumber, Serchnum)<<endl; 
    
}

