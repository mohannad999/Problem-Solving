#include <iostream>
#include <string>
using namespace std;

class clsPerson
{

public:
    string FirstName;
    string LastName;

    string FullName() { return FirstName + " " + LastName; }
};

int main()
{
    clsPerson Person1;

    clsPerson Person2;
    Person1.FirstName = "Mohannd";
    Person1.LastName = "Al-Zaatreh";
    cout << Person1.FullName() << endl;

    Person2.FirstName="Ahmad";
    Person2.LastName="Fadi";
    cout<< Person2.FullName()<<endl;

    return 0;
}