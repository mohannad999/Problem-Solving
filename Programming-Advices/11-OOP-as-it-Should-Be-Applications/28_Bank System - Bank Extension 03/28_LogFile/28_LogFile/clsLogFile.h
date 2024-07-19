#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "clsUser.h"
#include "clsDate.h"


class clsLogFile 
{
private: 


   static string _ConverUserLogObjectToLine(clsUser User, string Seperator = "#//#")
    {

        string UserRecord = "";
        string Date = clsDate::DateTimeToString(clsDate());
        UserRecord += Date + Seperator;;
        UserRecord += User.UserName + Seperator;
        UserRecord += User.Password + Seperator;
        UserRecord += to_string(User.Permissions);

        return UserRecord;

    }

  static   void _AddDataLineToFile(string  stDataLine)
    {
        fstream MyFile;
        MyFile.open("LogFile.txt", ios::out | ios::app);

        if (MyFile.is_open())
        {

            MyFile << stDataLine << endl;

            MyFile.close();
        }

    }
public: 

    static void AddNewLog()
    {
        _AddDataLineToFile(_ConverUserLogObjectToLine(CurrentUser));
    }

 
};

