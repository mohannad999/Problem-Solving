// PS#30.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

int ReadPositiveNum(string masseage)
{
    int num; 
    do{
        cout << masseage; 
        cin >> num; 
    
    } while (num <= 0);
    return num; 
}

void PrintFactorialNnum(int Num)
{
    int factorial=1; 
    for (int i = 1; i <= Num; i++)
    {
        factorial *= i;
    }

    cout << "Factorial =" << factorial;
}


int main()
{
    PrintFactorialNnum(ReadPositiveNum("Please positve num :"));
}

