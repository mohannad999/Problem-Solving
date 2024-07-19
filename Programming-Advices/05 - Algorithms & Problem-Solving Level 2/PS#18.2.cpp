// PS#18.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// PS#17.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

//#define PassWord "AAF"
int traial = 0;
string pass = "";
string EnterMessege()
{
    cout << "\nPlease Enter the password (3 capital lattter) : ";
    getline(cin, pass);
    return pass;

}


string  EncryptText(string Text, short EncryptionKey) {

    for (int i = 0; i <= Text.length(); i++)
    { 
        Text[i] = char((int)Text[i] + EncryptionKey); 
    } 
return Text;
}

string  DecryptText(string Text, short EncryptionKey)
{
    for (int i = 0; i <= Text.length(); i++)
    { 
        Text[i] = char((int)Text[i] - EncryptionKey);
    } 
    return Text;
}

int main()
{
    const short EncryptionKey = 2; //this is the key.
    string TextAfterEncryption, TextAfterDecryption; 
    string Text = EnterMessege();
    TextAfterEncryption = EncryptText(Text, EncryptionKey); 
    TextAfterDecryption = DecryptText(TextAfterEncryption,EncryptionKey);  
    cout << "\nText Before Encryption : ";  
    cout << Text << endl;
    cout << "Text After Encryption  : "; 
    cout << TextAfterEncryption << endl;  
    cout << "Text After Decryption  : "; 
    cout << TextAfterDecryption << endl; 
    return 0;
}

