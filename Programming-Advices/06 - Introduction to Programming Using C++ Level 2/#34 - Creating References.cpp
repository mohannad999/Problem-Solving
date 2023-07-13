// #34 - Creating References.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include<iostream>

using namespace std;


int main()
{
	int a = 10; 
	int & x = a; 
	int* pnum;

	pnum = &a;
	/*cout << &a << endl; 
	cout << &x << endl; 
	cout << a <<endl; 
	cout << x <<endl;  
	x = 20;

	cout << a << endl;
	cout << x << endl;  
	a = 30; 

	cout << a << endl;
	cout << x << endl; */
	
	return 0;

} 