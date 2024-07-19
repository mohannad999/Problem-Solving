#include<stdio.h>

void Increment( int *ptr)
{
    *ptr = (*ptr) +1 ; //do forget the () 
}


int main()
{

int a; 
a =10;

Increment(&a);

printf("a = %d ",a); 
    return 0; 
}