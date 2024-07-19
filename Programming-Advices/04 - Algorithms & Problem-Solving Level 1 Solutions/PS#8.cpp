// PS#8.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

using namespace std; 

enum enPassFail { Fail = 0, Pass = 1 }; 

int ReadGread()
{
    int Greade;
    cout << "Enter the Grade : ";
    cin >> Greade; 
    return Greade; 
   
}

enPassFail CheckGrade(int Greade)
{
    if (Greade >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail; 
}

void PrintResult(enPassFail Result)
{
    if (enPassFail::Pass == Result)
        cout << "Congratualtion you have pass :)" << endl;
    else
        cout << "Hard luck try again :(" << endl;
}


int main()
{
    PrintResult(CheckGrade(ReadGread()));
}

