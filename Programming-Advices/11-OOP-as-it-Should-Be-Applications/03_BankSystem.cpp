
#include <iostream>
#include "03_clsBankClient.h"

int main()

{

    clsBankClient Client1 = clsBankClient::Find("A101");
    if (!Client1.IsEmpty())
    {
        cout << "\nClient Found :-)\n";
    }
    else
    {
        cout << "\nClient Was not Found :-(\n";
    }

    Client1.Print();

    cout << "Account Balnce : " << Client1.AccountBalance<< endl;
    cout << "Email : "<< Client1.GetEmail()<<endl;

    clsBankClient Client2 = clsBankClient::Find("A201", "1234");
    if (!Client2.IsEmpty())
    {
        cout << "\nClient Found :-)\n";
    }
    else
    {
        cout << "\nClient Was not Found :-(\n";
    }
    Client2.Print();


    cout << "\nIs Client Exist? " << clsBankClient::IsClientExist("A131");




    system("pause>0");
    return 0;
}