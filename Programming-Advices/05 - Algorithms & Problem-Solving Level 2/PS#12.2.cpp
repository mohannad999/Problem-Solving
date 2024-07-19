// PS#12.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void InvertedPattern(int num)
{

    for (int i = num; i >= 0; i--)
    {
        
        for (int j = 0;j<i;j++)
        {
            cout << i; 
        }
        cout << endl;
    }

}




int main()
{
    InvertedPattern(Reabdnumber("Enter Number : ")); 

}

