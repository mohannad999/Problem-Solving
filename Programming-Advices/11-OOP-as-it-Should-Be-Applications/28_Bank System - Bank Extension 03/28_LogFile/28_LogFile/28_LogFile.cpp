// 28_LogFile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Register Logins In a Log File

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
