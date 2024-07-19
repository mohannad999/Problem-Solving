// PS#38.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum PrimeNum {Prime=1 ,NotPrime=2};

int ReadPositiveNum(string message)
{
    int num; 
    do 
    {
        cout << message; 
        cin >> num;
    } while (num <= 0); 
        return num; 
}

PrimeNum ChickIfPrime(int Num)
{
    Num = round(Num / 2); 
    
    for (int counter = 2; counter < Num; counter++)
    {
        if (Num % counter == 0 )
            return PrimeNum::NotPrime;     
    }
    return PrimeNum::Prime;
}

void PrintNum(PrimeNum IsPrime)
{
    if (IsPrime == PrimeNum::NotPrime)
        cout << "\nnot Prime Number\n" ; 
    else 
        cout << "\nPrime Number\n";
}


int main()
{
    PrintNum(ChickIfPrime(ReadPositiveNum("Please Enter positive Number : ")));
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
