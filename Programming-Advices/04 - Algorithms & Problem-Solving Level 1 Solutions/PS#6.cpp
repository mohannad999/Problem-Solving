// PS#6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std; 

struct Fullname {
    string FirstName; 
    string SecondName; 
};

Fullname Readname()
{
    Fullname name;
    cout << "Enter your First name : ";
    cin >> name.FirstName; 
    cout << "Enter your Second name : ";
    cin >> name.SecondName;

    return name;
}

string GetFullname(Fullname name)
{
    string Fullname = name.FirstName + " " + name.SecondName; 
    return Fullname; 
}

void printFullName(string name)
{
    cout << "\n Your name is : " << name << endl;

}
int main()
{
    printFullName(GetFullname(Readname()));
}

