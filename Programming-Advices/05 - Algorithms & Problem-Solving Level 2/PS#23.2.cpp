// PS#23.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include<iostream>
#include<string>
using namespace std;



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
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;
   // cout << "\nEnter array elements: \n";
    for (int i = 0; i < arrLength; i++)
    {
       // cout << "Element [" << i + 1 << "] : ";
         arr[i]= RandomNumber( 1, 99);
        // cout << arr[i] << ", " ;
    }
    cout << endl;
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}


int MaxNum(int arr[100], int arrLength)
{
    int maxnum = 0; 
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i]> maxnum)
        {
            maxnum = arr[i];
        }
    }
    return maxnum; 
}

int TimesRepeated(int Number, int arr[100], int arrLength)
{
    int count = 0;
    for (int i = 0; i <= arrLength - 1; i++)
    {
        if (Number == arr[i])
            count++;
    }
    return count;
}





int main() {

    srand((unsigned)time(NULL));
    int arr[100], arrLength, NumberToCheck;
    ReadArray(arr, arrLength);
    cout << "\n array: ";
    PrintArray(arr, arrLength);
    cout << "\n\nmax num in arr : " << MaxNum(arr, arrLength) << endl; 
 
    return 0;

}



