// PS#15.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void LetterPattern(int num)
{

    for (int i = 1; i <= num; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << char(i + 64);
        }
        cout << endl;
    }

}





int main()
{
    LetterPattern(Reabdnumber("Enter Number : "));

}





