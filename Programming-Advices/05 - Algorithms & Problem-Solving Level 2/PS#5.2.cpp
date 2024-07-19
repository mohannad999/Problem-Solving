// PS#5.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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



void PrintRevercedNum(int num)
{
    int Reminder = 0;
  
    while (num > 0)
    {
        Reminder = num % 10;
        num /= 10;
        cout << Reminder; 

    }


}

int main()
{
    PrintRevercedNum(Reabdnumber("Enter positve number : ")); 
}

