#pragma once

#include <iostream>
using namespace std;

template <class T>
class clsDynamicArray
{

protected:
    int _Size = 0;
    T* _TempArray;

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

    void Resize(int NewSize)
    {

        if (NewSize < 0)
        {
            NewSize = 0;
        };

        _TempArray = new T[NewSize];

        //limit the original size to the new size if it is less.
        if (NewSize < _Size)
            _Size = NewSize;

        //copy all data from original array until the size
        for (int i = 0; i < _Size; i++)
        {
            _TempArray[i] = OriginalArray[i];
        }

        _Size = NewSize;

        delete[] OriginalArray;
        OriginalArray = _TempArray;

    }


    T GetItem(int index)
    {
        return OriginalArray[index];

    }


    void  Reverse()
    {

        _TempArray = new T[_Size];

        int counter = 0;

        for (int i = _Size - 1; i >= 0; i--)
        {
            _TempArray[counter] = OriginalArray[i];
            counter++;
        }

       delete[] OriginalArray;
        OriginalArray = _TempArray;

    }


    void Clear()
    {
        _Size = 0;
        _TempArray = new T[0];
        delete[] OriginalArray;
        OriginalArray = _TempArray;
    }



};
