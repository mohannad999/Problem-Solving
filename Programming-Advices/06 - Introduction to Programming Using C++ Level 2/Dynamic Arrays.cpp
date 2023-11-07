#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter total number of students: ";
    cin >> num;

    float *ptr; // memory allocation of num number of floats
    string *name;
    name = new string;

    cout << "Enter your name to chech the access :  ";
    cin >> *name;

    ptr = new float[num];
    cout << "Enter grades of students." << endl;

    for (int i = 0; i < num; i++)
    {
        cout << "Student" << i + 1 << ": ";
        cin >> *(ptr + i);
        // cin >> ptr[i]
    }
    cout << "\nDisplaying grades of students." << endl;

    cout << "your name is : " << *name << endl;
    for (int i = 0; i < num; i++)
    {
        cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
    }
    // ptr memory is released
    delete[] ptr;
    delete[] name;
    return 0;
}