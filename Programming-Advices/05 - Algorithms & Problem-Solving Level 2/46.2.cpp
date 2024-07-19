// 46.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <math.h>

using namespace std; 


int MyABS(int num); 
int ReadNum(string messege); 

int main()
{
   // cout << abs()
    cout << MyABS(-10) << endl;
    //cout << abs(-10);
}

int MyABS(int num)
{
    if (num < 0)
        return num * -1;
    else
        return num; 
}


int ReadNum(string messege)
{
    int num;
    //do {
        cout << messege;
        cin >> num;
   // } while (num < 0);
    return num;

}