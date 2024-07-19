// PS#13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;




void ReadNums(int& num1, int& num2,int &num3)
{
    cout << "Enter num1  :";
    cin >> num1;
    cout << "Enter num2  :";
    cin >> num2;
    cout << "Enter num3  :";
    cin >> num3;
}


int CheckMax(int num1, int num2,int num3)
{
    if ((num1 > num2) && (num1 > num3))
        return num1;
    else if ((num2 > num1) && (num2 > num3))
        return num2;
    else
        return num3; 


}


void PrintMax(int Maxnum)
{
    cout << "The max number is  : " << Maxnum << endl;



}
int main()
{
    int num1, num2, num3;
    ReadNums(num1, num2,num3);
    PrintMax(CheckMax(num1, num2,num3));

}
