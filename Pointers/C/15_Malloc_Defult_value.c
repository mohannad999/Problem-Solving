#include<stdio.h>
#include<stdlib.h>


int main ()
{

int numOfElements;
printf("Enter number of Array elemints : ");
scanf("%d",&numOfElements);

int *DynamicArray = (int *) malloc(numOfElements*sizeof(int)); //dyanamically allocated array

for ( int  i=0 ; i<numOfElements;i++)
{
    printf("%d ",DynamicArray[i]);
}
printf("\n");


    return 0;
}