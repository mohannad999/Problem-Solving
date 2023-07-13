// PS#19.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<cstdlib>

using namespace std; 
int RandomNumber(int From, int To) 
{ 
	int randNum; 
	//Function to generate a random numberint 
	randNum = rand() % (To - From + 1) + From;
	return randNum;
} 

int main() 
{ 
	//Seeds the random number generator in C++, called only once  
		srand((unsigned)time(NULL));  

		cout << RandomNumber(1000, 9999) << endl;   
		cout << RandomNumber(1000, 9999) << endl;
		cout << RandomNumber(1000, 9999) << endl;
		cout << RandomNumber(1000, 9999) << endl;
		cout << RandomNumber(1000, 9999) << endl;
		cout << RandomNumber(1000, 9999) << endl;
		cout << RandomNumber(1000, 9999) << endl;
		cout << RandomNumber(1000, 9999) << endl;
 

		return 0; 
	}
