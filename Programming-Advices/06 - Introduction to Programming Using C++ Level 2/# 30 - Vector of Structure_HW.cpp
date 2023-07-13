// # 30 - Vector of Structure_HW.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// # 30 - Vector of Structure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<vector>
#include<iostream>
#include <string>
using namespace std;

struct stEmployee
{

	string FirstName;
	string LastName;
	float Salary;

}; 


void ReadEmpolyInfo(vector <stEmployee> & vEmployees);
void PrintEmpolyInfo(vector <stEmployee>& vEmployees);

int main()
{
	// std::vector<T>vector_name;


	vector <stEmployee> vEmployees;


	ReadEmpolyInfo(vEmployees); 
	PrintEmpolyInfo(vEmployees);

	
	return 0;

}



void ReadEmpolyInfo(vector <stEmployee> & vEmployees)
{
	stEmployee tempEmployee;
	char again;

	do
	{
		cout << "Please Enter the Employees Inforamtion:  \n\n";

		cout << "Enter First name : "; 
		cin >> tempEmployee.FirstName; 
		cout << "Enter Seconed name : ";
		cin >> tempEmployee.LastName; 
		cout << "Enter  the Salary : ";
		cin >> tempEmployee.Salary ;
		
		vEmployees.push_back(tempEmployee);

		cout << "Do you want to add more date? [Y|y or N]"; 
		cin >> again;
	} while (again == 'y' || again == 'Y');

}

void PrintEmpolyInfo(vector <stEmployee>& vEmployees)

{
	cout << "Employees Vector: \n\n";

	for (stEmployee & Employee : vEmployees)
	{
		cout << "FirstName: " << Employee.FirstName << endl;
		cout << "LastName : " << Employee.LastName << endl;
		cout << "Salary   : " << Employee.Salary << endl;
		cout << endl;
	}

	cout << endl;

}