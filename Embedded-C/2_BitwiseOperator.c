<<<<<<< Updated upstream
#include <stdint.h>
#include <stdio.h>

int main() {
  uint8_t num = 0x84; // 0b 1000 0100

  // 1- Set Bits 3&4 ;
  uint8_t Mask = 0b10011100; // 0b00011000
  uint8_t num_1 = num | Mask;

  printf("set bits 3&4 in %x = %x \n", num, num_1); // num_1 = 1001 1100

  num |= Mask;
  printf("set bits 3&4 = %x\n", num); // another method

  // #############################################//

  // 2- Clear Bit 5&6

  uint8_t num2 = 0xFF;  // 11111111
  uint8_t Mask2 = 0x9F; // 10011111

  uint8_t num_2 = num2 & Mask2;

  printf("clear bits 5&6 in %x = %x \n", num2, num_2); // num_1 = 1001 1111

  num2 &= Mask2;
  printf("clear bits 5&6  = %x\n", num2); // another method  same result

  // another way to clear bit 6&7
  num2 = 0xFF;
  Mask2 = 0x60; // 01100000
  num2 &= ~(Mask2);
  printf("clear bits 5&6  = %x\n", num2); // another method  same result

  // 3- Toggle bits 0,1 & 2   ^ = Xor
  uint8_t num3 = 0x0c; // 1100
  uint8_t Mask3 = 0xF; // 1111
  uint8_t num_3;
  num_3 = num3 ^ Mask3;
  printf(" Toggle bits 0,1 & 2  = %x \n", num_3);

  num3 ^= Mask3;
  printf(" Toggle bits 0,1 & 2   = %x\n", num3); // another method  same result

  // Use Preprocessors to make code more readable
  return 0;
=======
#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t num = 0x84; // 0b 1000 0100

    // 1- Set Bits 3&4 ;
    uint8_t Mask = 0b10011100;
    uint8_t num_1 = num | Mask;

    printf("set bits 3&4 in %x = %x \n", num, num_1); // num_1 = 1001 1100

    num |= Mask;
    printf("set bits 3&4 = %x\n", num); // another method

    // #############################################//

    // 2- Clear Bit 5&6

    uint8_t num2 = 0xFF;  // 11111111
    uint8_t Mask2 = 0x9F; // 10011111

    uint8_t num_2 = num2 & Mask2;

    printf("clear bits 5&6 in %x = %x \n", num2, num_2); // num_1 = 1001 1111

    num2 &= Mask2;
    printf("clear bits 5&6  = %x\n", num2); // another method  same result

    // another way to clear bit 6&7
    num2 = 0xFF;
    Mask2 = 0x60; // 01100000
    num2 &= ~(Mask2);
    printf("clear bits 5&6  = %x\n", num2); // another method  same result

    // 3- Toggle bits 0,1 & 2   ^ = Xor
    uint8_t num3 = 0x0c; // 1100
    uint8_t Mask3 = 0xF; // 1111
    uint8_t num_3;
    num_3 = num3 ^ Mask3;
    printf(" Toggle bits 0,1 & 2  = %x \n", num_3);

    num3 ^= Mask3;
    printf(" Toggle bits 0,1 & 2   = %x\n", num3); // another method  same result

    // Use Preprocessors to make code more readable
    return 0;
>>>>>>> Stashed changes
}