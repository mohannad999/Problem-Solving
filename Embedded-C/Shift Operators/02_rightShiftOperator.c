// C Program to demonstrate
// use of right-shift operator
#include <stdio.h>

// Driver code
int main()
{
	// a = 5(00000101), b = 9(00001001)
	unsigned char a = 5, b = 9;

	// The result is 00000010
	printf("a>>1 = %d\n", (a >> 1));

	// The result is 00000100
	printf("b>>1 = %d", (b >> 1));

	return 0;
}

