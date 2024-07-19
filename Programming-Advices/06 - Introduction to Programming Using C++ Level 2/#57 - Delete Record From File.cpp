// #57 - Delete Record From File.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<fstream>
#include<string>

#include<vector>

using namespace std;

void LoadDataFromFileToVector(string FileName, vector <string>& vFileContent) 
{ 
fstream MyFile; 
MyFile.open("MyFile.txt", ios::in);//read Mode

if (MyFile.is_open())    
{ 
	string Line;
	while (getline(MyFile, Line))   
	{ 
		vFileContent.push_back(Line);  
	}   
	MyFile.close();   
}
}
void SaveVectorToFile(string FileName, vector <string> vFileContent) 
{
	fstream MyFile;  
	MyFile.open("MyFile.txt", ios::out);
	if (MyFile.is_open()) 
	{ for (string Line : vFileContent)     
	{ 
		if (Line != "")    
		{          
			MyFile << Line << endl;    
		}     
	}     
	MyFile.close();    
	}
} 

void DeleteRecordFromFile(string FileName, string Record)
{
	vector <string> vFileContent;
	LoadDataFromFileToVector(FileName, vFileContent);
	for (string& Line : vFileContent)
	{
		if (Line == Record) {
			Line = "Omar";

		}
		SaveVectorToFile(FileName, vFileContent);
	}
}
	void PrintFileContent(string FileName)
	{
	fstream MyFile;   
	MyFile.open(FileName, ios::in);//read Mode
	if (MyFile.is_open())
	{ 
		string Line; 
		while (getline(MyFile, Line))
		{        
			cout << Line << endl;  
		} 
		MyFile.close(); 
	} 
	
	}


	int main()
	{   
		cout << "File Content Before Delete.\n"; 
		PrintFileContent("MyFile.txt"); 
		DeleteRecordFromFile("MyFile.txt","Ali");
		cout << "\n\nFile Content After Delete.\n";
		PrintFileContent("MyFile.txt"); 
		return 0;
	} 