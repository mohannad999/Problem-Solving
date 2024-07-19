#include <stdio.h>
#include <stdint.h>
/*

The purpose of this macro is to provide an easy way to access
hardware registers in embedded systems programming.

it's important to use the volatile qualifier to prevent
the compiler from optimizing away these accesses.

(x): This is the memory address passed as an argument to
the macro HWREG8(x). It's cast to a pointer to volatile uint8_t.

*((volatile uint8_t *)(x)): This dereferences the pointer,
effectively reading or writing the value stored at the memory address x.

*/
#define HWREG8(x) (*((volatile uint8_t *)(x)))
#define HWREG16(x) (*((volatile uint8_t *)(x)))
#define HWREG32(x) (*((volatile uint8_t *)(x)))

#define P1IN HWREG8(0x40004C00)
#define P1OUT HWREG8(0x40004C02)
#define P1DIR HWREG8(0x40004C04)
#define P1SELO HWREG8(0x40004C0A)
#define P1SEL1 HWREG8(0x40004C0C)

int main()
{
    printf("Addres of P1IN   : %p \n", &P1IN);
    printf("Addres of P1OUT  : %p \n", &P1OUT);
    printf("Addres of P1DIR  : %p \n", &P1DIR);
    printf("Addres of P1SELO : %p \n", &P1SELO);
    printf("Addres of P1SEL1 : %p \n", &P1SEL1);

    return 0;
}