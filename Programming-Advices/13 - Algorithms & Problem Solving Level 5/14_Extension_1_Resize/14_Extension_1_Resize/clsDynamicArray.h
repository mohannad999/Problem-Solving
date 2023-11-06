#pragma once

#include <iostream>
using namespace std;

template <class T>
class clsDynamicArray
{

protected:
    int _Size = 0;


public:
    T* OriginalArray;

    clsDynamicArray(int Size = 0)
    {
        if (Size < 0)
            Size = 0;

        _Size = Size;

        OriginalArray = new T[_Size];

    }

    ~clsDynamicArray()
    {

        delete[]  OriginalArray;

    }

    bool SetItem(int index, T Value)
    {

        if (index >= _Size || _Size < 0)
        {
            return false;
        }

        OriginalArray[index] = Value;
        return true;

    }


    int Size()
    {
        return _Size;
    }

    bool IsEmpty()
    {
        return (_Size == 0 ? true : false);

    }

    void PrintList()

    {

        for (int i = 0; i <= _Size - 1; i++)
        {
            cout << OriginalArray[i] << " ";
        }

        cout << "\n";

    }


    bool  Resize(int newIndex)
    {
        if (newIndex < 0 || newIndex == _Size)
        {
            return false;
        } 

        int* tempArray; 
        tempArray = new int[_Size];

            for (int i = 0; i <= _Size - 1; i++)
            {
                tempArray[i] = OriginalArray[i] ;
            }

            delete[]  OriginalArray;
        
            _Size = newIndex; 
            OriginalArray = new T[_Size];

            for (int i = 0; i <= _Size - 1; i++)
            {
                OriginalArray[i] = tempArray[i];
            }
            delete[] tempArray; 
            return true; 

    }


};
