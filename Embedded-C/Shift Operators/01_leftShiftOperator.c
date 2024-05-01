// C Program to demonstrate use
// of left shift operator
#include <stdio.h>

// Driver code
int main()
{
	// a = 5(00000101), b = 9(00001001)
	unsigned char a = 5, b = 9;

	// The result is 10(00001010)
	printf("a<<1 = %d\n", (a << 1));

	// The result is 18(00010010)
	printf("b<<1 = %d", (b << 1));
	return 0;
}


/*
Example

12 << 3

= 12 * (23)

= 12 * 8

= 96.


*/