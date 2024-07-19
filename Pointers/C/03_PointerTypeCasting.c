#include <stdio.h>

int main()
{
    int a = 1025; // 00000100 00000001
    int *ptr_a;
    ptr_a = &a;

    printf("size of integer is   : %d bytes \n", sizeof(int));
    printf("Address : %p , value : %d \n", ptr_a, *ptr_a); // it will increse 4 bytes
    printf("Address : %p , value : %d \n", ptr_a +1 , *(ptr_a+1)); //Garbage

    char *ptr_0;
    ptr_0 = (char *)ptr_a; // typecasting   -->  00000001
    printf("size of char is      : %d bytes \n", sizeof(char));
    printf("Address : %p , value : %d \n", ptr_0, *ptr_0); // 00000001
    printf("Address : %p , value : %d \n", ptr_0 +1 , *(ptr_0+1)); //00000100

    return 0;
}
