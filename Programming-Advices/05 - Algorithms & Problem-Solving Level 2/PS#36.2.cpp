// PS#36.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void ReadArray(int arr[100], int& arrLength)
{
    arrLength = 0; 
    int addnum;
    do
    {
        AddArrayElements(ReadNum("\nEnter number : "),arr, arrLength);
        cout << "Do you want to add more numer  (yes :1 ,No :0) : ";
        cin >> addnum;
    } while (addnum== PrimeNum::Yes);
 
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

    

    return 0;
}


