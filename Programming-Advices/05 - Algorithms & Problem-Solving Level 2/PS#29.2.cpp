// PS#29.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void ReadArray(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements: ";
    cin >> arrLength;
    // cout << "\nEnter array elements: \n";
    for (int i = 0; i < arrLength; i++)
    {
        // cout << "Element [" << i + 1 << "] : ";
        arr[i] = RandomNumber(1, 99);
        // cout << arr[i] << ", " ;
    }
    //cout << endl;
}

void PrintArray(int arr[100], int arrLength)
{
    cout << "\n";
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

PrimeNum ChickIfPrime(int Num)
{
    Num = round(Num / 2);

    for (int counter = 2; counter <= Num; counter++)
    {
        if (Num % counter == 0)
            return PrimeNum::NotPrime;
    }
    return PrimeNum::Prime;
 } 


void CopyArry(int arr[100], int arr2[100], int arrLength ,int& arrLength2)
{
    int counter = 0;
    for (int i = 0; i < arrLength; i++)
    {
        
        if (ChickIfPrime(arr[i]) == PrimeNum::Prime)
        {
            arr2[counter] = arr[i];
            counter++; 
        }

    }
    arrLength2 = --counter;
}






int main() {

    srand((unsigned)time(NULL));
    int arr[100], arr2[100], arrLength, arrLength2, NumberToCheck;
    ReadArray(arr, arrLength);
    cout << "\n array 1 : ";
    PrintArray(arr, arrLength);
    arrLength2 = 0;
    CopyArry(arr, arr2, arrLength, arrLength2);
    cout << "\n array 2 : ";
    PrintArray(arr2, arrLength2);

    return 0;

}



