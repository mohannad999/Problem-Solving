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


int *Double_DynamicArray= (int *)realloc(DynamicArray,(numOfElements/2)*sizeof(int)) ;
printf("Prev Block address = %d , new address = %d\n",DynamicArray,Double_DynamicArray);

for ( int  i=0 ; i<numOfElements;i++)
{
    printf("%d\n",Double_DynamicArray[i]);
}
printf("\n");


    return 0;
}