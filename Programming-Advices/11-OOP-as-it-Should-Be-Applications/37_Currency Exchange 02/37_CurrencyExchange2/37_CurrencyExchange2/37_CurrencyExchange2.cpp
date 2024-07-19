// 34_EncryptPass.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Currency Exchange 02


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
