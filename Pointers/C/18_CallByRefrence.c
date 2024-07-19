#include <stdio.h>
#include<stdlib.h>


int Add (int *a , int *b)
{
    printf("Address of an in Add  = %p\n",&a);
    int c= (*a)+(*b);
    return c; 
}


int main()
{

int a=2,b=4;
    printf("Address of an in main = %p\n",&a);
    int c = Add(&a,&b); 
    printf("Sum : %d\n",c); 

    return 0; 
}