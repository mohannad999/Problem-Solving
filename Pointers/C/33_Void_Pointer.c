#include <stdio.h>
#include <stdint.h>

#define NULL ((void *)0)

int main()
{
    void *ptr1 = NULL;
    ptr1 = (void *)0x40000000;
    *((uint16_t *)ptr1) = 0x0202;

    return 0;
}

/*
Remember that in practice, you should ensure that you're accessing valid memory 
locations when writing to hardware registers or memory addresses directly. 
Writing to arbitrary memory addresses can have unintended consequences, including
 crashing your program or affecting hardware behavior.
 Always consult the hardware documentation and use memory-mapped registers responsibly.

*/