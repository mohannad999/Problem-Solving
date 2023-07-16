#include <iostream>
using namespace std;

class clsPeson
{
private:
    short _Id;
    string _FirstName;
    string _LastName;
    string _FullName;
    string _Email;
    long int _phone;

public:
    clsPeson(short ID, string FirstName, string LastName, string Email, long int Phone)
    {
        _Id = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _phone = Phone;
    }

    void SetFirstName(string FirstName)
    {

        _FirstName = FirstName;
    }

    void SetLastName(string LastName)
    {

        _LastName = LastName;
    }

    void SetEmail(string Email)
    {

        _Email = Email;
    }

    void SetPhone(short Phone)
    {

        _phone = Phone;
    }

    string GetFirstName()
    {

        return _FirstName;
    }

    string GetLastName()
    {

        return _LastName;
    }

    string GetFullName()
    {

        return (_FirstName + " " + _LastName);
    }

    string GetEmail()
    {

        return (_Email);
    }

    long int GetPhone()
    {

        return (_phone);
    }

    short GetID()
    {

        return (_Id);
    }

    void Print()
    {
        cout << "\nInfo :\n";
        cout << "______________________\n";
        cout << "ID       : " << _Id << endl;
        cout << "FirstName: " << _FirstName << endl;
        cout << "LastName : " << _LastName << endl;
        cout << "FullName : " << GetFullName() << endl;
        cout << "Email    : " << _Email << endl;
        cout << "phone    : " << _phone << endl;
    }

    void SentEmail(string subject, string meesege)
    {
        cout << "\n\nThe following messege sent successfully to Email "<< _Email  << endl ;
        cout << "subject : " <<subject << endl ;
         cout << "meesege : " <<meesege << endl ;
    }

     void SentSMS( string meesege)
    {
        cout << "\n\nThe following messege sent successfully to phone "<< _phone  << endl ;
         cout << "meesege : " <<meesege << endl ;
    }
};

int main()
{

    clsPeson person(1999,"Mohannad","Al-Zaatreh","moha@gmail.com",73313123);
    person.Print();

person.SentEmail("PCB course","Welcome to this course");
person.SentSMS("please Call me "); 

    system("pause>0");
    return 0;
}