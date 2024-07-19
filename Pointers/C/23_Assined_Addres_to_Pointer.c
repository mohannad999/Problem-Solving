#include <stdio.h>
#include <stdint.h>

#define NULL ((void *)0)

int main()
{
    uint8_t num = 10;
    uint8_t num2 = 20;

    uint8_t *ptr1 = (uint8_t *)0x1000; // Choosing an address for this pointer
    uint8_t *ptr2 = &num;              // Pointing to the 'num' variable
    uint8_t *ptr3 = (uint8_t *)0x9000; // Choosing an address for this pointer

    ptr1 = &num2; // Now ptr1 points to 'num2'

    printf("ptr1 address: %p \n", (void *)ptr1);
    printf("ptr2 address: %p \n", (void *)ptr2);
    printf("ptr3 address: %p \n", (void *)ptr3);

    printf("ptr1 Value: %d\n", *ptr1);
    printf("ptr2 Value: %d\n", *ptr2);

    if (ptr3 == NULL)
    {
        printf("ptr3 is NULL\n");
    }
    else
    {
        printf("ptr3 is not NULL\n");
    }

    // Accessing the value pointed to by ptr3 without checking can lead to issues
    //printf("ptr3 Value: %d\n", *ptr3);
    printf("ptr2 Value: %d\n", *ptr2);
    return 0;
}
