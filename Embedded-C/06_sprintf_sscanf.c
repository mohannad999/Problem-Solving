/*
Use sscanf to convert data from a string to another type (e.g., int).
Use sprintf to convert data from various types (e.g., int) to a string.
*/

#include <stdio.h>

int main() {
  int number = 456;
  char string_number[20]; // Make sure the array is large enough to hold the
                          // number and the null terminator

  // Using sprintf to convert integer to string
  sprintf(string_number, "%d", number);

  // Displaying the converted string
  printf("The string is: %s\n", string_number);

  // Using sscanf to convert string to integer
  sscanf(string_number, "%d", &number);

  // Displaying the converted integer
  printf("The integer is: %d\n", number);

  return 0;
}
