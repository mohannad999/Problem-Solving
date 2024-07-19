// PS#14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std; 

void Readnum(int &num1, int &num2)
{
    cout << "Enter num 1 : "; 
    cin >> num1;
    cout << "Enter num 2 : ";
    cin >> num2;
}

void Swapnum(int& num1, int& num2)
{
    int num3 =0 ; 
    num3 = num1;
    num1 = num2;
    num2 = num3; 
}

void printSwapNum(int num1, int num2)
{
    cout << "\nnum 1 = " << num1 << endl; 
    cout << "num 2 = " << num2 << endl; 
}

int main()
{
    int num1, num2;
    Readnum(num1, num2);
    Swapnum(num1, num2);
    printSwapNum(num1, num2);

}

