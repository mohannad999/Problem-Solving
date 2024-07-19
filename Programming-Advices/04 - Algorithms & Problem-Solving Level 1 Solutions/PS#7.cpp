// PS#7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std; 
int ReadNum()
{
    int num; 
    cout << "Enter the number : ";
    cin >> num;
    return num; 
}

float calcuateHalfNum(int num)
{
    return (float)num / 2.0;
}

void Printnum(int num)
{
    cout << "the half of " << num << " = " << to_string(calcuateHalfNum(num)) <<endl;
}

int main()
{
    Printnum(ReadNum()); 
}
