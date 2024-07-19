// PS#3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>

using namespace std;


enum enNumberType {Odd=1,Even=2};

int ReadNumber()
{
    int num;
    cout << "Enter the number :";
        cin >> num; 
        return num; 
}

enNumberType CheckNumber(int num)
{
    if (num % 2 == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd; 
}


void printNumber(enNumberType NumberType)
{
    if (NumberType == enNumberType::Even)
        cout << "\n number is Even\n"  ;
    else 
        cout << "\n number is odd\n";

}

int main()
{
    printNumber(CheckNumber(ReadNumber()));
}
