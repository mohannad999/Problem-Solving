// PS#9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std; 

void ReadNums(int& num1, int& num2, int& num3)
{
        cout << "Enter num1  :"; 
        cin >> num1;
        cout << "Enter num2  :";
        cin >> num2;
        cout << "Enter num3  :";
        cin >> num3;

}

int Sumofnums(int num1,int num2,int num3)
{
    return num1 + num2 + num3; 
}

void PrintSum(int sum)
{
    cout << "the sum of three num = " << sum <<endl; 
}
int main()
{
    int num1, num2, num3; 
    ReadNums(num1, num2, num3); 
    PrintSum(Sumofnums(num1, num2, num3));

}
