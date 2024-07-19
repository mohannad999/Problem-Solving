// PS#12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// PS#11.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;




void ReadNums(int& num1, int& num2)
{
    cout << "Enter num1  :";
    cin >> num1;
    cout << "Enter num2  :";
    cin >> num2;
}


int CheckMax(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;

   
}


void PrintMax(int Maxnum)
{
    cout << "The max number is  : " << Maxnum << endl;

  

}
int main()
{
    int num1, num2, num3;
    ReadNums(num1, num2);
    PrintMax(CheckMax(num1, num2));

}
