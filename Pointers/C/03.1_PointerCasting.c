#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t* ptr3 = (uint32_t*)0x100;

    uint16_t* ptr2 = (uint16_t*)ptr3;

    uint8_t* ptr1 = (uint8_t*)ptr3;

    printf(" ptr3 : %p \n", ptr3);
    printf(" ptr2 : %p \n", ptr2);
    printf(" ptr1 : %p \n", ptr1);

    return 0;
}