// PS#50.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std; 

int EnterPinCode()
{
    string PinCode;
    string code = "1234"; 
    short int Counter = 3; 
    do {
        cout << "Enter pin Code : "; 
        cin >> PinCode; 
        Counter--; 
        if (PinCode == code)
        {
            return 1; 
        }

        else 
        system("color  4F"); //red coler 
        cout << "Wrong pin" << endl;
        cout << "you have " << Counter << " Trials" << endl;

      } while (Counter > 0 && code != PinCode);
        return 0;
}

bool login()
{
    if (EnterPinCode() == 1)
    {
        system("color  2F"); //Grean 
        cout << "\n Your account palance is " <<7500<< endl;
        return 1;

    }
    else 
        cout << "Your visa blocked ... cal the bank  \n";
    return 0;
}

int main()
{
    login(); 
}

