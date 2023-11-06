/*
Pointers : Variables that store address
          to another variable
*/

#include <stdio.h>
#include <stdint.h>

int main()
{
    int a;
    int *ptr_a;

    ptr_a = &a;
    a = 5;

    printf("value of a                : %d\n", a);

    printf("address of a              : %p\n", &a);

    printf("value of ptr_a            : %p\n", ptr_a);
    printf("address of ptr_a          : %p\n", &ptr_a);

    printf("value which ptr_a point to:  %d\n", *ptr_a);

    // change value using pointer
    *ptr_a = 10;
    printf("value of a                : %d\n", a);

    return 0;
}
