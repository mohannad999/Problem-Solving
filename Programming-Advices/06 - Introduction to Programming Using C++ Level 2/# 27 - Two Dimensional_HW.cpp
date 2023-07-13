// # 27 - Two Dimensional_HW.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void AddArrayValues(int  Array[10][10])
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			Array[i-1][j-1] = i * j;
		}
	}
}

void PrintArrayValues(int Array[10][10])
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			printf("%.*d ", 2, Array[i-1][j-1]);
				
		}
		cout << "\n";
	}
}

int main()
{
	// Array[Row][col]
	int Array[10][10] ; // = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };

	AddArrayValues(Array); 
	PrintArrayValues(Array);


}

