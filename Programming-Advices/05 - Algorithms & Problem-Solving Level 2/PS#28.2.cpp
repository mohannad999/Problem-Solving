// PS#28.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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


//int SumArry(int arr[100], int arrLength)
//{
//    int Sum = 0;
//    for (int i = 0; i < arrLength; i++)
//    {
//        Sum += arr[i];
//    }
//    return Sum;
//}
//
//float Avrge(int sum, int arrlength)
//{
//    return(float)sum / arrlength;
//}

void CopyArry(int arr[100], int arr2[100],int arrLength)
{
    
    for (int i = 0; i < arrLength; i++)
    {
        arr2[i] = arr[i]; 
    }
    
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
    int arr[100],arr2[100], arrLength, NumberToCheck;
    ReadArray(arr, arrLength);
    cout << "\n array 1 : ";
    PrintArray(arr, arrLength);
    CopyArry(arr, arr2, arrLength);
    cout << "\n array 2 : ";
    PrintArray(arr2, arrLength);
    
    return 0;

}



