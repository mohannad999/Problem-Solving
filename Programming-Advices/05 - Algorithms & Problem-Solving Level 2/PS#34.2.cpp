// PS#34.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

    for (int i = 0; i < arrLength; i++)
    {
        //arr[i] = i + 1; // 
        arr[i] = RandomNumber(1, 99);
    }
}


int SearchNum(int arr[100],int arrLength)
{
    int num = ReadNum("Enter number you are looking for : "); 
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == num)
        {
            cout << "The number you are looking for : " << num << endl;
            cout << "The number is found at position : " << i << endl; 
            cout << "The number found it's Order : " << i +1 << endl;
            return i; 
        }
    }
    cout << "The number you are looking for : " << num << endl;
    cout << "The number is not found :( : " << endl;

    return 0; 

}

void PrintArray(int arr[100], int arrLength)
{
    cout << "\n";
    for (int i = 0; i < arrLength; i++)
    {
      //  cout << "Arr[" << i << "] : ";
        cout << arr[i] << " ";
      
    }
    cout << "\n\n";
}

int main() {

    srand((unsigned)time(NULL));
    int arr[100];
    int  arrLength, arrLength2;

    ReadArray(arr, arrLength);
    cout << "\n Array Elements : ";
    PrintArray(arr, arrLength);

    SearchNum(arr,arrLength); 

    return 0;
}
