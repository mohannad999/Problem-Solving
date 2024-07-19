// # 31 - Remove elements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<vector>
#include<iostream>

using namespace std;

int main()
{ 
	vector <int> vNumbers;
	vNumbers.push_back(10); 
	vNumbers.push_back(20);  
	vNumbers.push_back(30);  
	vNumbers.push_back(40);  
	vNumbers.push_back(50); 

	cout << vNumbers.size() << endl;

	vNumbers.clear();
/*	vNumbers.pop_back();   
	vNumbers.pop_back();
	vNumbers.pop_back(); 
	vNumbers.pop_back();  
	vNumbers.pop_back(); */ 

	cout << vNumbers.size() << endl;

	if(!vNumbers.empty())
		vNumbers.pop_back();


	cout << "Numbers Vector: \n\n";
	
	// ranged loop
	
	for (int & Number : vNumbers) 
	{        
		cout << Number << endl; 
	}     cout << endl; 
	return 0; 
} 