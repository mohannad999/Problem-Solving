<<<<<<< Updated upstream
#include <stdint.h>
#include <stdio.h>

int main() {
  uint16_t num1 = 1;         // 0b 00000000 00000001
  uint16_t num2 = num1 << 8; // num2 = 0b 00000001 00000000 = 256
  printf("%d\n", num2);

  uint8_t x1 = 0b00001111;
  uint8_t x2 = 0b01110000;

  uint8_t x3 = x2 | x1;
  printf("%d\n", x3);

  x2 |= x1;
  printf("%d\n", x2);

  return 0;
=======
#include<stdio.h>
#include<stdint.h>


int main()
{
uint16_t num1 = 1; //0b 00000000 00000001
uint16_t num2= num1<<8 ; // num2 = 0b 00000001 00000000 = 256
printf("%d",num2); 


    return 0; 
>>>>>>> Stashed changes
}