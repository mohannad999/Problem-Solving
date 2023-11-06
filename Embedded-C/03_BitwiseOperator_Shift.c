#include<stdio.h>
#include<stdint.h>


int main()
{
uint16_t num1 = 1; //0b 00000000 00000001
uint16_t num2= num1<<8 ; // num2 = 0b 00000001 00000000 = 256
printf("%d",num2); 


    return 0; 
}