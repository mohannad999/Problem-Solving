// 31_TransferLog.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Create Transfer Log


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
