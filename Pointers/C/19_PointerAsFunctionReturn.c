#include <stdio.h>
#include <stdlib.h>

int *Add(int *a, int *b) //Declearing a function that would return  int*
{
    int *c = (int *)malloc(sizeof(int)); // Allocate memory on the heap
    if (c == NULL)
    {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    *c = (*a) + (*b);
    return c; //return the location in the heap 
}

int main()
{
    int a = 2, b = 4;

    int *ptr_c = Add(&a, &b);
    if (ptr_c != NULL)
    {
        printf("Sum: %d\n", *ptr_c);
        free(ptr_c); // Free the allocated memory
    }

    return 0;
}
