// PS#16.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int Reabdnumber(string messege)
{
    int num;
    do {
        cout << messege;
        cin >> num;
    } while (num <= 0);
    return num;
}



void PrintAAAtoZZZ()
{
    string word = "";
    for ( int i = 65; i <= 90; i++)
    {
        for ( int j = 65; j <= 90; j++)
        {

            for (int l = 65; l <= 90; l++)
            {
                word = (char)i;
                word += (char)j;
                word += (char)l;


                cout << word << endl;
                word = "";
            }
         
        }
        
    }
    cout << " \n\n --------------------------------------------------- \n\n";
}



int main()
{
    PrintAAAtoZZZ();

}





//void PrintAAAtoZZZ()
//{
//    int i, j, l;
//    for ( i = 65; i <= 90; i++)
//    {
//        for ( j = 65; j <= 90; j++)
//        {
//
//            for (l = 65; l <= 90; l++)
//            {
//                cout << char(i) << char(j) << char(l) << '\n';
//            }
//            cout << char(i) << char(j) << char(l) << '\n';
//        }
//        cout << char(i) << char(j) << char(l) << '\n';
//    }
//
//}