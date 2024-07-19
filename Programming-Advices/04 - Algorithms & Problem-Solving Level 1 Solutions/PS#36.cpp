// PS#36.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

enum enOperationType {Add ='+',supstarion ='-',multipaly='*',divide='/' };

float ReadNum(string massege)
{
    float num;
    cout << massege;
    cin >> num;
    return num;
}

enOperationType ReadOperation(string massege)
{
    char Ob; 
    cout << massege;
    cin >> Ob; 
    return (enOperationType)Ob;
}

float Calclation(float num1, float num2, enOperationType Op)
{
    switch (Op)
    {
    case enOperationType::Add :
            return num1 + num2;

    case enOperationType::supstarion:
        return num1 - num2;

    case enOperationType::multipaly:
        return num1 * num2;

    case enOperationType::divide:
        return num1 / num2;
    default:
        return num1 + num2;

    }
}

int main()
{
     int num1=0,num2=0;
     enOperationType Op; 

     num1 = ReadNum("Enter number 1 : ");

     num2 = ReadNum("Enter number 2 : ");

     Op = ReadOperation("Please Enter the Operation Type :  "); 

     cout << "Result : " << Calclation(num1, num2, Op) << endl;


}

