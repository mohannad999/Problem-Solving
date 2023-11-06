#include <stdio.h>
#include <stdlib.h>

void PrintDynamicArray(int *DynamicArray,  int array_length); 

void GenerateDynamicArray(int * DynamicArray,  int array_length)
{
    DynamicArray = (int *)malloc(array_length * sizeof(int));

    int num;
    for (int i = 0; i < array_length; i++)
    {
        printf("Enter array[%d] elemints : ", i);
        scanf("%d", &num);
        DynamicArray[i] = num;
    }

    PrintDynamicArray(DynamicArray,array_length); 
}

void PrintDynamicArray(int *DynamicArray,  int array_length)
{
    for (int i = 0; i < array_length; i++)
    {
        printf("%d ", DynamicArray[i]);
    }
    printf("\n");
}
int main()
{


    int *DynamicArray;
    int array_length; //
    printf("Enter number of Array elemints : ");
    scanf("%d", &array_length);

GenerateDynamicArray(DynamicArray,array_length); 
//PrintDynamicArray(DynamicArray,array_length); 
    return 0;
}