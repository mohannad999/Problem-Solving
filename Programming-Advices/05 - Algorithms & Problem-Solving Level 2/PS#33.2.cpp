
// PS#32.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<string>

using namespace std;

enum PrimeNum { Prime = 1, NotPrime = 2 };

int ReadNum(string messege)
{
    int num;
    do {
        cout << messege;
        cin >> num;
    } while (num < 0);
    return num;

}

int RandomNumber(int From, int To)
{
    //Function to generate a random numberint 
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
} 

string GenratFourLattersKey()
{
    string FourLetter = "";
    FourLetter = char(RandomNumber(65, 90));
    FourLetter += char(RandomNumber(65, 90));
    FourLetter += char(RandomNumber(65, 90));
    FourLetter += char(RandomNumber(65, 90));
    return FourLetter;
}

string MeargeFourkeys()
{
    string Key = "";
    Key = GenratFourLattersKey();
    Key = Key + "-" + GenratFourLattersKey();
    Key = Key + "-" + GenratFourLattersKey();
    Key = Key + "-" + GenratFourLattersKey();

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

void ReadArray(string arr[100], int& arrLength)
{
    cout << "\nEnter number of elements: ";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
    {
        //arr[i] = i + 1; // RandomNumber(1, 99);
        arr[i] = MeargeFourkeys(); 
    }
}

void PrintArray(string arr[100], int arrLength)
{
    cout << "\n";
    for (int i = 0; i < arrLength; i++)
    {
        cout << "Arr[" << i << "] : ";
        cout << arr[i] << " ";
        cout << "\n";
    }
}

int main() {

    srand((unsigned)time(NULL));
    string arr[100];
    int  arrLength, arrLength2;

    ReadArray(arr, arrLength);
    cout << "\n Array Elements : ";
    PrintArray(arr, arrLength);

    return 0;
}
