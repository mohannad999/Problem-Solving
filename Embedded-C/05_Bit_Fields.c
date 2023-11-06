#include <stdio.h>
#include <stdint.h>

typedef struct
{
    uint8_t OneBitVar : 1;
    uint8_t TwoBitVar : 2;
    uint8_t sixBitVar : 6;
    uint32_t TwentyBitsVAr : 20;
} stBitField;

int main()
{
    stBitField BitField;

    BitField.OneBitVar = 1;  // 0b0001
    BitField.TwoBitVar = 2;  // 0b0010
    BitField.sixBitVar = 50; // 0011 0010 //0x32
    // BitField.sixBitVar= 90; //0101 1010 //0x5A   ERROR Becuase it's 7 Bits
    BitField.TwentyBitsVAr = 90; // 0101 1010 //0x5A

    printf("Value of OneBitVar     : %x\n", BitField.OneBitVar);
    printf("Value of TwoBitVar     : %x\n", BitField.TwoBitVar);
    printf("Value of sixBitVar     : %x\n", BitField.sixBitVar);
    printf("Value of TwentyBitsVAr : %X\n", BitField.TwentyBitsVAr);

    return 0;
}