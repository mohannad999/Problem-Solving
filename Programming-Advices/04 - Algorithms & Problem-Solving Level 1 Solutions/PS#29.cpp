// PS#29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

enum enOddOrEven { Odd = 1,Even = 2 };

int ReadNum()
{
    int num = 0; 
    cout << "Enter num : "; 
    cin >> num; 
    return num; 
}


enOddOrEven CheckEvenOrOdd(int num)
{
    if (num%2 == 0)
        return enOddOrEven::Even;
    else
        return enOddOrEven::Odd;
}


void PrintSumOfEvenFrom0Tonum(int num)
{
    int sum = 0; 

        for (int i = 0; i <= num; i++)
        {

            if (CheckEvenOrOdd(i) == enOddOrEven::Even)
            {
            sum += i;
            }
        }

    cout << " The sum =" << sum;
}

int main()
{
    PrintSumOfEvenFrom0Tonum(ReadNum()); 
}
