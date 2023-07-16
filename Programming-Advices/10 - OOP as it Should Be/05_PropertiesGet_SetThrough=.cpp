#include <iostream>
using namespace std;

class clsPerson
{

private:
    string _FirstName;

public:
    void SetFirstName(string FirstName)
    {

        _FirstName = FirstName;
    }

    string GetFirstName()
    {

        return _FirstName;
    }

    __declspec(property(get = GetFirstName, put = SetFirstName)) string FirstNamexx;

};

int main()

{

    clsPerson Person1;
   // clsPerson person2;

    Person1.SetFirstName("Mohannad");
    cout << Person1.GetFirstName() << endl;

    // instead of the above we only write this
    Person1.FirstNamexx = "Mohannad";
    cout << Person1.FirstNamexx<<endl;


    // person2.FirstNamexx="Amjad";
    // cout<< person2.FirstNamexx;

    system("pause>0");
    return 0;
};
