// PS#5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


struct stCandidate {
    short int Age;
    bool driverLincense;
    bool refrance; 
};

stCandidate Readinfo()
{
    stCandidate Candidate;
    cout << "Enter Your Age : ";
    cin >> Candidate.Age;
    cout << "Are you have a driver Lincense (0/1) : ";
    cin >> Candidate.driverLincense;
    cout << "Do you have refrence (0/1) : "; 
    cin >> Candidate.refrance; 
    return Candidate;
}
bool CheckCandidate(stCandidate Candidate)
{
    return  (Candidate.refrance|| (Candidate.Age >= 21 && Candidate.driverLincense == 1));

}

void printResult(stCandidate Candidate)
{
    if (CheckCandidate(Candidate))
        cout << "\n Acceptied :)" << endl;
    else
        cout << "\n Rejicted :( " << endl;
}


int main()
{
    printResult(Readinfo());
}

