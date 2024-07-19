// #52 - Write Mode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<fstream>
#include<string>

using namespace std;
void PrintFileContenet(string FileName);
void WriteFile();

int main() 
{

	PrintFileContenet("MyFile.txt");

	return 0;
} 



 void PrintFileContenet(string FileName)
 {
	 fstream MyFile;
	 MyFile.open( FileName, ios::in );//read Mode
	 if (MyFile.is_open()) 
	 { 
		 string Line;
		 while (getline(MyFile, Line))
		 { cout << Line << endl; } 

		 MyFile.close();
	 }
 } 


 void WriteFile()
 {

	 fstream MyFile;
	 MyFile.open("MyFile.txt", ios::out | ios::app);//Write Mode


	 fstream DataFile;
	 DataFile.open("DadaFile.csv", ios::out | ios::app);//Write Mode

	 if (MyFile.is_open())
	 {
		 MyFile << "Hi, this is the 7th line\n";
		 MyFile << "Hi, this is the 8th line\n";
		 MyFile << "Hi, this is the 9th line\n";
		 MyFile.close();

	 }

	 if (DataFile.is_open())
	 {
		 DataFile << "Hi, this is the 4th line\n";
		 DataFile << "Hi, this is the 5th line\n";
		 DataFile << "Hi, this is the 6th line\n";
		 DataFile.close();

	 }
	 else
	 {
		 cout << "error can't open the Dara file\n ";
	 }
 }