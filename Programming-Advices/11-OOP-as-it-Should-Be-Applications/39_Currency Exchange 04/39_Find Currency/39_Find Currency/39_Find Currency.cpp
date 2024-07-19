// 39_Find Currency.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Find Currency


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
