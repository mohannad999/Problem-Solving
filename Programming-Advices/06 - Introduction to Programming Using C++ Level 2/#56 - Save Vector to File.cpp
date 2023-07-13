// #56 - Save Vector to File.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

void SaveVectorToFile(string FileName, vector <string> vFileContent)

{
	fstream MyFile;   
	MyFile.open("MyFile.txt", ios::out);
	
	if (MyFile.is_open())  
	{ 
		for (string &Line : vFileContent)    
		{ if (Line != "")    
		{         
			MyFile << Line << endl; 
		}      
		}     
		MyFile.close();
	} 
}

int main()  
{
	vector <string> vFileContenet{ "Ali","Shadi","Maher","Fadi","Lama"}; 
	SaveVectorToFile("MyFile.txt", vFileContenet); return 0; 

} 