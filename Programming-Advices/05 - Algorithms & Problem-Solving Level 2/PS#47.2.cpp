// PS#47.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <math.h>

using namespace std;


float MyRound(float num);
float ReadNum();
float GetFractionPart(float num, int int_num);



int main()
{
    float num= ReadNum();
    cout << MyRound(num) << endl;
    cout << round(num);
    //cout << abs(-10);
}


float GetFractionPart(float num, int int_num)
{
    return num - int_num;
}


float MyRound(float num)
{
    int int_number=0;
    int_number = (int) num;
    float FractionPart= GetFractionPart(num,int_number);

    if (FractionPart > 0.5)
    {
        if (int_number > 0)
            return int_number +1;
        else
            return int_number -1;
    }
}

float ReadNum()
{
    cout << "Please Enter the number : "; 
    float num; 
    cin >> num;
    // } while (num < 0);
    return num;

}