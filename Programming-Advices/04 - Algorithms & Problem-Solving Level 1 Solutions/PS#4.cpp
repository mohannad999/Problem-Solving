// PS#4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std; 


struct stCandidate {
    short int Age; 
    bool driverLincense; 
};

stCandidate Readinfo()
{
    stCandidate Candidate; 
    cout << "Enter Your Age : ";
     cin >> Candidate.Age ; 
     cout << "Are you have a driver Lincense (0/1) : ";
     cin >> Candidate.driverLincense; 
     return Candidate;
}
bool CheckCandidate(stCandidate Candidate)
{
    return  (Candidate.Age >= 21 && Candidate.driverLincense == 1);
    
}

void printResult(stCandidate Candidate)
{
    if (CheckCandidate(Candidate))
        cout << "Acceptied :)";
    else
        cout << "Rejicted :( ";
}


int main()
{
    printResult(Readinfo());
}

