// Short_Hand_IF_HW1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std ; 

int Readnun()
{
    int num; 
    cout << "\n\n Please enter Number : "; 
    cin >> num; 

    return num; 
}


string Ispositive(int num)
{
    string result = "";
    (num > 0) ? result = "Positive\n\n" : result = "Negative\n\n";
    return result;
}

string CheckNum(int num)
{
    string result = "";
    (num > 0) ? result = "Positive\n\n" : ((num == 0) ? result ="Zero" : result = "Negative\n\n");
    return result;
}

int main()
{
   // cout << Ispositive(Readnun()); 
    cout << CheckNum(Readnun());
}

