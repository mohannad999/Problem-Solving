// #19 - Recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std; 


void PrintNumbersFromNtoM(int N, int M)
{ 
	if (N <= M)  
	{      
		cout << M << endl;
		PrintNumbersFromNtoM(N , M-1); 
	}
}

int main()
{  
	PrintNumbersFromNtoM(1, 10); 
	return 0;
} 