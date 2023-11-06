#include <stdio.h>

int main()
{

    int a = 10;
    int *ptr_a;
    ptr_a = &a;

    printf("Address ptr_a   is           : %p\n", ptr_a);
    printf("size of integer is           : %d bytes \n", sizeof(int));
    printf("Address ptr_a + 1 is         : %p \n", ptr_a + 1);   // it will increse 4 byte
    printf("value at address ptr_a +1 is : %d\n", *(ptr_a + 1)); // it will be a Garbage  data
    return 0;
}