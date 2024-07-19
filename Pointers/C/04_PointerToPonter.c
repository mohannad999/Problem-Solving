#include <stdio.h>

int main()
{
    int x = 5;
    int *ptr_x = &x;
    *ptr_x = 6;

    int **ptr_ptr_x = &ptr_x;

    int ***ptr_ptr_ptr_x = &ptr_ptr_x;

    printf("Value   of x : %d\n", *ptr_x);           // 6
    printf("address of x : %p\n", ptr_x);            // address of x
    printf("address of x : %p\n", *ptr_ptr_x);       // address of x
    printf("Value   of x : %d\n", *(*ptr_ptr_x));    // 6
    printf("address of x : %p\n", **ptr_ptr_ptr_x);  // address of x
    printf("Value   of x : %d\n", ***ptr_ptr_ptr_x); // 6

    ***ptr_ptr_ptr_x = 10;
    printf("Value   of x : %d\n", x);
    **ptr_ptr_x = 12;
    printf("Value   of x : %d\n", x);
    return 0;
}