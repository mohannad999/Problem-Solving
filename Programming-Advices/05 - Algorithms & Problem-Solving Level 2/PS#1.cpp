// PS#1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

void PrintTableHeader() 
{     cout << "\n\n\t\t\t Multipliaction Table From 1 to 10\n\n";   
cout << "\t";
for (int i = 1; i <= 10; i++)    
{         cout << i << "\t";     }  
cout << "\n___________________________________________________________________________________\n";
}

string ColumSperator(int i) 
{ 
	if (i < 10) return"   |";
	else
		return"  |";
} 


void PrintMultiplicationTable()
{   
	PrintTableHeader();

for (int i = 1; i <= 10; i++) 
{       
	cout << " " << i << ColumSperator(i) << "\t";

      for (int j = 1; j <= 10;j++ )
      {        
	cout << i * j << "\t";        
      }  
  cout << endl;     
} 

}

int main()
{   

	PrintMultiplicationTable(); 
} 









// this my solution before saw how he solve it 


//int main()
//{
//    cout << "\n\n\t\t\t\t Multiplacation Taple from 1 to 10 \n\n" << endl; 
//  
//    for (int num = 1; num <= 10; num++)
//    {
//        cout << '\t' << num; 
//    }
//
//    cout << "\n\n";
//    for (int num = 1; num <= 90; num++)
//    {
//        cout << '-';
//    }
//
//    cout << '\n';
//    for (int num = 1; num <= 10; num++)
//    {
//        cout << num << "   |    " ;
//
//      /*  for (int i = 1; i <= 10; i++)
//        {*/
//
//            for (int j = 1; j <= 10; j++)
//            {
//                cout << j * num << '\t'; 
//            }
//            cout << endl; 
//        //}
//
//    }
//}

