// PS#47.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std; 

float ReadPositveNum(string message)
{
    float num;
    do {
        
        cout << message; 
        cin >> num; 
    } while (num <= 0);
        return num; 
}

float CalTotalMonths(float LoanAmount, float MonthlyInstallment)
{
    return (LoanAmount / MonthlyInstallment);
}

int main()
{
   
    cout <<CalTotalMonths(ReadPositveNum("\nEnter Loan Amount : "), ReadPositveNum("\nEnter Monthly Installment : ")) <<endl;

}

