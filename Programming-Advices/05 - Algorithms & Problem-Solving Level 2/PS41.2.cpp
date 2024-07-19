// PS41.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include<iostream>
using namespace std;


void FillArray(int arr[100], int& arrLength)
{
	arrLength = 8;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	//arr[4] = 50;
	//arr[5] = 60;
	//arr[6] = 70;
	//arr[7] = 80;
	arr[4] = 40;
	arr[5] = 30;
	arr[6] = 20;
	arr[7] = 2;
	
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}


void AddArrayElement(int Number, int ReveredArray[100], int &arrLength2)
{ //its a new element so we need to add the length by 1
	arrLength2++;
	ReveredArray[arrLength2 - 1] = Number;
}
void CopyRevirceArray(int arrSource[100], int ReveredArray[100], int SourceLength,int arrLength2)
{
	for (int i = 0; i < SourceLength; i++)
	{
		
	 AddArrayElement(arrSource[SourceLength-1-i], ReveredArray, arrLength2);
		
	}
}

/*
* bool IsPalindromeArray(int arr[100], int Length)
{
for (int i = 0; i < Length; i++)   
   { 
      if (arr[i] != arr[Length - i - 1])
       { 
        return false;       
       }     
   }
	return true;
	}
*/
bool checkArrayPalindrome(int arrSource[100], int ReveredArray[100], int SourceLength)
{
	for (int i = 0; i < SourceLength; i++)
	{
		if (!(arrSource[i] == ReveredArray[i]))
			return false;
	}
	return true;
}
int main()
{
	int arrSource[100], SourceLength = 0, ReveredArray[100],arrLength2=0;
	FillArray(arrSource, SourceLength);
	cout << "\nArray 1 elements:\n";
	PrintArray(arrSource, SourceLength);
	CopyRevirceArray(arrSource, ReveredArray, SourceLength, arrLength2);
	cout << "\nArray 2 distinct elements:\n";
	PrintArray(ReveredArray, SourceLength);

	if (checkArrayPalindrome(arrSource, ReveredArray, SourceLength))
		cout << "\nYes Array is palindrome\n"; 
	else
		cout << "\nNo Array is not palindrome\n";
	return 0;
}