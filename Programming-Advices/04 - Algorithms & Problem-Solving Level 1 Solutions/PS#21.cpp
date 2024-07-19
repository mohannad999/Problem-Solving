// PS#21.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
using namespace std; 
float ReadCircuference()
{
    float  Circuference; 
    cout << "Enrer the Circuference : "; 
    cin >> Circuference; 
    return Circuference;

}

float CalculateCircalAreaByCircuference(float Circuference)
{
    float Area; 
    const float pi = 3.14;
    Area = (pow(Circuference, 2)) / (pi * 4);
    return Area; 
}

void PrintCircalArea(float Area)
{
    cout << "\nArea = " << Area << endl;
}
int main()
{
    PrintCircalArea(CalculateCircalAreaByCircuference(ReadCircuference()));
}

