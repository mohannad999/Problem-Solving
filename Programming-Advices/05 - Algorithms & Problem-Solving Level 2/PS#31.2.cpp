// PS#31.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void SwapNumbers(int& A, int& B)
{
    int C = 0;
    C= A;
    A = B; 
    B = C;
}

int RandomNumber(int From, int To)
{
    //Function to generate a random numberint 
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void shuffleArra(int arr[100], int Arraylengh)
{
    for (int i = 0; i < Arraylengh; i++)
    {
        SwapNumbers(arr[RandomNumber(1, Arraylengh) - 1], arr[RandomNumber(1, Arraylengh) - 1]);
    }
}




void ReadArray(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements: ";
    cin >> arrLength;
   
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = i + 1;
    } //RandomNumber(1, 99); 
}

void PrintArray(int arr[100], int arrLength)
{
    cout << "\n";
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}




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
    int arr[100], arr2[100], sum[100], arrLength;

    ReadArray(arr, arrLength);
    cout << "\n array 1 : ";
    PrintArray(arr, arrLength);


    shuffleArra(arr, arrLength);
    PrintArray(arr, arrLength);



    return 0;

}



