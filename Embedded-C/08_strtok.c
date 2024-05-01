#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "This,is a sample,string";
  char *token = strtok(str, ", ");

  while (token != NULL) {
    printf("%s\n", token);
    token = strtok(NULL, ", ");
  }

  return 0;
}

/*
When using strtok() and specifying a list of delimiter characters as ", ", it
means the function will treat both commas (,) and spaces ( ) as delimiters. This
allows strtok() to split the string not just at commas but also at spaces

*/