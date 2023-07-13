// PS#21.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// PS#20.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<string>
using namespace std;

int RandomNumber(int From, int To)
{
    //Function to generate a random numberint 
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}


enum enCharType { SamallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };


    string GenratFourLattersKey()
    {
        string FourLetter = "";
        FourLetter  = char(RandomNumber(65, 90));
        FourLetter += char(RandomNumber(65, 90));
        FourLetter += char(RandomNumber(65, 90));
        FourLetter += char(RandomNumber(65, 90));
        return FourLetter; 
    }
  
    string MeargeFourkeys()
    {
        string Key = "";
        Key  = GenratFourLattersKey(); 
        Key  = Key + "-" + GenratFourLattersKey();
        Key  = Key + "-" + GenratFourLattersKey();
        Key  = Key + "-" + GenratFourLattersKey();
        
        return Key;
    }

    void PrintKey(int num)
    {
        for (int i = 1; i <= num; i++)
        {
            cout << "\n\nKey[" << i << "] : " << MeargeFourkeys(); 
        }
        cout << "\n\n\n"; 
        
    }

    int ReadNum(string messege)
    {
        int num; 
        do {
            cout << messege;
            cin >> num;
        } while (num < 0);
        return num; 
         
    }
int main()
{ //Seeds the random number generator in C++, called only once   
    srand((unsigned)time(NULL));
    PrintKey(ReadNum("\nEnter number of keys : "));


    return 0;
}