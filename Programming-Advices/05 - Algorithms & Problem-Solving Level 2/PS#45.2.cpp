// PS#45.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<string>

using namespace std;

enum OddEvevn { Odd = 1, Even = 0 };
enum numberType { Possitive = 1, Neigative = 0 };

int ReadNum(string messege)
{
    int num;
    do {
        cout << messege;
        cin >> num;
    } while (num < 0);
    return num;

}


numberType CheckNumberType(int num)
{
    if (num >= 0)
    {
        return numberType::Possitive;
    }
    return numberType::Neigative;
}

void AddArrayElements(int number, int arr[100], int& arrLength)
{
    arrLength++;
    arr[arrLength - 1] = number;
}



int  CountPositiveNumber(int arr[100], int arrLength)
{
    int oddnumber = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (CheckNumberType(arr[i]) == numberType::Neigative)
        {
            oddnumber++;
        }
    }
    return oddnumber;
}

int RandomNumber(int From, int To)
{
    //Function to generate a random numberint 
    int randNum = rand() % (To - From + 1) + From;
    // cout << '\n' << randNum << endl;
    return randNum;
}



void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(-100, 100);
}

//void ReadArray(int arr[100], int& arrLength)
//{
//    arrLength = 0;
//    int addnum;
//    do
//    {
//        AddArrayElements(RandomNumber(1, 99), arr, arrLength);
//        cout << "Do you want to add more numer  (yes :1 ,No :0) : ";
//        cin >> addnum;
//    } while (addnum == PrimeNum::Yes);
//
//}





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

    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);
    cout << "\nCount of positive numbers : " << CountPositiveNumber(arr, arrLength) << endl;
    return 0;

}