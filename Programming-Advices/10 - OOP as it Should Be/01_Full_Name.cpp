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
    Person1.FirstName = "Mohannd";
    Person1.LastName = "Al-Zaatreh";
    cout << Person1.FullName() << endl;

    return 0;
}