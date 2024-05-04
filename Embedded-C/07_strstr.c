#include <stdio.h>

/*
strstr(): 
It is used to find the first occurrence of a substring within a string. 
*/
int main() {
  const char *haystack = "Hello, world!";
  const char *needle = "HE"; //"world";//

  char *result = strstr(haystack, needle);

  if (result) {
    printf("Found '%s' in '%s' at position: %ld\n", needle, haystack,result - haystack);
  } else {
    printf("Substring not found.\n");
  }

  return 0;
}
