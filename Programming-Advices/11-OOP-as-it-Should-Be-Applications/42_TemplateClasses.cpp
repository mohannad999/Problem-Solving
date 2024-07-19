#include <iostream>
using namespace std;

template <class T>
class Calculator
{
private:
    T _Number1, _Number2;

public:
    Calculator(T n1 , T n2)
    {
        _Number1 = n1;
        _Number2 = n2;
    }

    void printResult()
    {
        cout << "Number: " << _Number1 << " and " << _Number2 << "." << endl;
        cout << _Number1 << "+" << _Number2 << "=" << Add() << endl;
        cout << _Number1 << "-" << _Number2 << "=" << Subtract() << endl;
        cout << _Number1 << "*" << _Number2 << "=" << Multiply() << endl;
        cout << _Number1 << "/" << _Number2 << "=" << Divide() << endl;
    }

    T Add()
    {
        return _Number1 + _Number2;
    }

    T Subtract()
    {
        return _Number1 - _Number2;
    }

    T Multiply()
    {

        return _Number1 * _Number2;
    }

    T Divide()
    {

        return _Number1 / _Number2;
    }
};

int main()
{
    Calculator<int> intCalc(1,4);

    Calculator<float> floatCalc(2.3, 2.5);

    cout << "Int result:" << endl;
    intCalc.printResult(); 
    cout << endl << "Folat result: " << endl;

floatCalc.printResult(); 

    return 0;
}

