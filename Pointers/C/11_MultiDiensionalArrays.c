#include <stdio.h>

int main()
{

    int B[2][3]; // 1-D-Array of 3 integers

//by defult it's called by address 
    printf("%p\n", B);
    printf("%p\n", *B);

    printf("%p\n", B[0]); 
    printf("%p\n", &B[0]);

    printf("%p\n\n", &B[0][0]);

    printf("%p\n", B+1);
    printf("%p\n", *(B+1));

    
    printf("%p\n", B[1]); 
    printf("%p\n", &B[1]);

    
    printf("%p\n\n", &B[1][0]);

    return 0;
}