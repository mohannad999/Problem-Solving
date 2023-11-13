/*
Function Pointer
- Pointers can point to Data
- Pointers can point to Address
- Pointers can point to Code

- Syntax

<type> (* Fuction_Pointer_Name)(Parameter list) = Function Address

- Initialization and assignment to a function pointer shoud have 
  matching return types and prameter list

*/

#include <stdio.h>
#include <stdint.h>

int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int multi(int a,int b)
{
    return a*b;
}

int (*ptrCalcuaton)(int a, int b); //Declaring a fuction pointer

int main()
{

    printf(" 8 + 4 = %d\n", sum(8, 4));
    printf(" 8 - 4 = %d\n", sub(8, 4));
    printf("after using Fuction to Pointer\n");

    ptrCalcuaton = &sum;
    printf(" 8 + 4 = %d\n", ptrCalcuaton(8, 4)); //Defrencing and executing thr function

    ptrCalcuaton = sub; //Function name will return us pointer 
    printf(" 8 - 4 = %d\n", ptrCalcuaton(8, 4));

    int result; 
    ptrCalcuaton = multi; //Function name will return us pointer 
    //result=  (*ptrCalcuaton)(8, 4); //it's work well 
    result=  ptrCalcuaton(8, 4); //de-refencing and executing the functoin //the same result 
    printf(" 8 * 4 = %d\n",result);
    return 0;
}