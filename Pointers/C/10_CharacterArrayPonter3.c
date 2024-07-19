#include <stdio.h>
#include <string.h>

void print(char *name)
{
    int i=0;
    while (*name != '\0') //name[i] 
    {
        printf("%c",*name); //name[i] 
      //  i++;
      name++; //increse the adderess counter
    }
    printf("\n");
}

int main() {
    char name[15] = "Mohannad";
    print(name);
    return 0;
}
