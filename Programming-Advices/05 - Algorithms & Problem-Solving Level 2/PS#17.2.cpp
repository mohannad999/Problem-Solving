// PS#17.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std; 

//#define PassWord "AAF"
int traial = 0;
string pass ="";
string EnterPassword()
{
    
    cout << "\nPlease Enter the password (3 capital lattter) : ";
    cin >> pass; 
    return pass; 


}



string FindPassWard(string messenge)
{
    string word = "";
    
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {

            for (int l = 65; l <= 90; l++)
            {
                word = (char)i;
                word += (char)j;
                word += (char)l;
                traial++; 

                if (pass == word)
                {
                 return word;
                }

                word = "";
            }

        }

    }
    cout << " \n\n --------------------------------------------------- \n\n";
}


void PrintResult(string Passward)
{
    cout << "PassWord is " ;
    cout << Passward << endl;
    cout << "\nFound After  " << traial << " Traial " << endl;
}

int main()
{
   
    PrintResult(FindPassWard(EnterPassword())); 
}

