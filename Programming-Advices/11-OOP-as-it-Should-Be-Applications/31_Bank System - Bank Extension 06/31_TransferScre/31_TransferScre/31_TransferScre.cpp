// 31_TransferScre.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Transfer Screen


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
