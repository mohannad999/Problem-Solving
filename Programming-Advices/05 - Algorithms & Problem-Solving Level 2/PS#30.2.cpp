// PS#30.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void ReadArray(int arr[100],int arr2[100] ,int& arrLength)
{
    cout << "\nEnter number of elements: ";
    cin >> arrLength;
    // cout << "\nEnter array elements: \n";
    for (int i = 0; i < arrLength; i++)
    {
        // cout << "Element [" << i + 1 << "] : ";
        arr[i]  = RandomNumber(1, 99);
        arr2[i] = RandomNumber(1, 99);
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

// 

//void CopyArry(int arr[100], int arr2[100], int arrLength, int& arrLength2)
//{
//    int counter = 0;
//    for (int i = 0; i < arrLength; i++)
//    {
//
//        if (ChickIfPrime(arr[i]) == PrimeNum::Prime)
//        {
//            arr2[counter] = arr[i];
//            counter++;
//        }
//
//    }
//    arrLength2 = --counter;
//}


void SumTwoArray(int arr1[100], int arr2[100], int sum[100], int arrLength)
{

    for (int i = 0; i < arrLength; i++)
    {
       // sum[i] = 0; 
        sum[i] = arr1[i] + arr2[i];
    }
}



int main() {

    srand((unsigned)time(NULL));
    int arr[100], arr2[100], sum[100], arrLength ;

    ReadArray(arr,arr2,arrLength);
    cout << "\n array 1 : ";
    PrintArray(arr, arrLength);
   
    cout << "\n array 2 : ";
    PrintArray(arr2, arrLength);

    SumTwoArray(arr, arr2, sum, arrLength);
    cout << "\n\n sum of arr1 + arr2 : ";
    PrintArray(sum, arrLength);


    return 0;

}



