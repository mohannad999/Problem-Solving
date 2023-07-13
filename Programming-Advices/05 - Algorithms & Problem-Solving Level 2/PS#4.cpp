// PS#4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


bool CheckIfPerfectNum(int Num)
{
    int sum = 0;
    for (int i = 1; i < Num; i++)
    {
        if (Num % i == 0)
        {
            sum += i;
        }
    }

    return (Num == sum);

}

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




void PrintAllPerfectNumbers(int Num)
{
    cout << "\n All Perfect Number From : "<<Num <<" to " <<1 <<endl;
    for (int i = 1; i <= Num; i++)
    {
        if (CheckIfPerfectNum(i))
            cout << i <<endl;
    }

}

int main()
{
    PrintAllPerfectNumbers(ReadPositiveNum("Enter Number : ")); 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
