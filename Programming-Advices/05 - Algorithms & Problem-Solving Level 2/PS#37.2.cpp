// PS#37.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
#include<string>

using namespace std;

enum PrimeNum { Yes = 1, No = 0 };

int ReadNum(string messege)
{
    int num;
    do {
        cout << messege;
        cin >> num;
    } while (num < 0);
    return num;

}



void AddArrayElements(int number, int arr[100], int& arrLength)
{
    arrLength++;
    arr[arrLength - 1] = number;
}

int RandomNumber(int From, int To)
{
    //Function to generate a random numberint 
    int randNum = rand() % (To - From + 1) + From;
   // cout << '\n' << randNum << endl;
    return randNum;
}

void CopyArrayUsingAddArrayElement(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
{
    for (int i = 0; i < arrLength; i++) 
        AddArrayElements(arrSource[i], arrDestination, arrDestinationLength);
}


void FillArrayWithRandomNumbers(int arr[100], int& arrLength) 
{ 
    cout << "\nEnter number of elements:\n";     
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++) 
        arr[i] = RandomNumber(1, 100); 
}

void ReadArray(int arr[100], int& arrLength)
{
    arrLength = 0;
    int addnum;
    do
    {
        AddArrayElements(RandomNumber(1, 99), arr, arrLength);
        cout << "Do you want to add more numer  (yes :1 ,No :0) : ";
        cin >> addnum;
    } while (addnum == PrimeNum::Yes);

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

    int arr[100], arrLength = 0, arr2Length = 0; 

    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100];  
    CopyArrayUsingAddArrayElement(arr, arr2, arrLength, arr2Length); 
    cout << "\nArray 1 elements:\n";     PrintArray(arr, arrLength);  
    cout << "\nArray 2 elements after copy:\n";   
    PrintArray(arr2, arr2Length);
    return 0;

}
