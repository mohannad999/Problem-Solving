// PS#46.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void PrintAtoZ()
{
    int Z = 90; 
    for (int A = 65; A <= 90; A++)
    {
        cout << char(A) <<endl;
    }
}

int main()
{
    PrintAtoZ();
}

