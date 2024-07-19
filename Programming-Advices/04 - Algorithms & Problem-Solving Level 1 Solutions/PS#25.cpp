// PS#25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

int ReadAge()
{
    int Age; 
    cout << "Enter your Age : "; 
    cin >> Age; 
    return Age; 

}

bool ValidateAgeRange(int Age, int From, int To)
{
    return (Age >= From && Age <= To);
}

int ReadUntilAge(int From, int To)
{
    int Age =0 ; 

    do {

        Age = ReadAge();
    } while (!ValidateAgeRange(Age, From, To));
    return Age; 

}

void PrintResult(int Age)
{
    cout << "Your Age is : " << Age; 
}

int main()
{
    PrintResult(ReadUntilAge(18, 25)); 
}

