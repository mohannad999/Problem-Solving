#include<stdio.h>
#include<stdlib.h>


int main ()
{

int numOfElements;
printf("Enter number of Array elemints : ");
scanf("%d",&numOfElements);

int *DynamicArray = (int *) malloc(numOfElements*sizeof(int)); //dyanamically allocated array

for(int i =0; i < numOfElements;i++)
{
    DynamicArray[i]=i; 
}


int *Double_DynamicArray= (int *)realloc(DynamicArray,2*numOfElements*sizeof(int)) ;
printf("Prev Block address = %d , new address = %d\n",DynamicArray,Double_DynamicArray);

for ( int  i=0 ; i<2*numOfElements;i++)
{
    printf("%d\n",DynamicArray[i]);
}
printf("\n");


    return 0;
}