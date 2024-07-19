// PS#2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>

using namespace std;


void PrintName(string name)
{
    cout << " your name is : " << name;

}

string readName()
{
    string name; 
    cout << "Enter Your name :";
    getline(cin, name); 

    return name; 
}

int main()
{
    PrintName(readName());
}
