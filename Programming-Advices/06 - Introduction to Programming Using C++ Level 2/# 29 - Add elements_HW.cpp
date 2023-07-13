// # 29 - Add elements_HW.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include<vector>
#include<iostream>
using namespace std;

int ReadInt();
void PrintNumber(vector <int>& vNumbers);

int main()
{
	vector <int> vNumbers;

	string again = "";
	 
	do 
	{
		vNumbers.push_back(ReadInt());

		cout << "Do you want to add number YES[y,Y] : "; 
		cin >> again; 
	} while ((again =="Y") || again == "y");
	PrintNumber(vNumbers);
}



int ReadInt()
{
	int num; 
	cout << "Please Enter a number "; 
	cin >> num; 
	return num; 
}


void PrintNumber(vector <int> &vNumbers)
{
	cout << "Numbers Vector: \n\n";

	// ranged loop

	for (int& Number : vNumbers)
	{
		cout << Number << endl;
	}     cout << endl;
}