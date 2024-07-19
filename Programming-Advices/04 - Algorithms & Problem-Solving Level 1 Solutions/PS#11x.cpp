// PS#11.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 0 };


void ReadNums(int& num1, int& num2, int& num3)
{
    cout << "Enter num1  :";
    cin >> num1;
    cout << "Enter num2  :";
    cin >> num2;
    cout << "Enter num3  :";
    cin >> num3;

}

int Sumofnums(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}


float CalculateAVR(int num1, int num2, int num3)
{

    return(float(Sumofnums(num1, num2, num3)) / 3.0);
}

enPassFail CheckMark(float mark)
{
    if (mark >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;

}
void PrintSum(float Mark)
{
    cout << "the sum of three num = " << Mark << endl;

    if (enPassFail::Pass == CheckMark(Mark))
    cout << "Congratulations you passed the exam" <<endl;
    else
        cout << "Hard luck in the next time" <<endl; 

}
int main()
{
    int num1, num2, num3;
    ReadNums(num1, num2, num3);
    PrintSum(CalculateAVR(num1, num2, num3));

}
