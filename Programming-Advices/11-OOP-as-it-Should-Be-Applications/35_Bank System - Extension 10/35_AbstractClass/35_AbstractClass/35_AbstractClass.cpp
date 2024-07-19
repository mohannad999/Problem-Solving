// 35_AbstractClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Abstract Class/Interface Practical Example



#include <iostream>
#include "clsLoginScreen.h"

int main()

{
    while (true)
    {
        if (!clsLoginScreen::ShowLoginScreen())
        {
            break;
        }

    }

    return 0;
}
