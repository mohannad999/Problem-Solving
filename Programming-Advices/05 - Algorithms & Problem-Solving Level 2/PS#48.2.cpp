// PS#48.2.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <string>
#include <math.h>

using namespace std;


float MyFloor(float num);
float ReadNum();
float GetFractionPart(float num, int int_num);



int main()
{
    float num = ReadNum();
    cout << MyFloor(num) << endl;
    cout << floor(num);
    //cout << abs(-10);
}


float GetFractionPart(float num, int int_num)
{
    return num - int_num;
}

float MyFloor(float num)
{
    int int_number = 0;
    int_number = (int)num;
    float FractionPart = GetFractionPart(num, int_number);

        if (int_number > 0)
            return int_number ;
        else
            return int_number - 1;
    
}

float ReadNum()
{
    cout << "Please Enter the number : ";
    float num;
    cin >> num;
    // } while (num < 0);
    return num;

}