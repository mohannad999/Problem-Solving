#include <stdio.h>
#include <string.h>



int main() {
    char name[15] = "Mohannad";
    char *name2;
    name2= name;
    printf("%c\n",name2[3]);
    name2[7]='Z';
    printf("%s\n", name);
    return 0;
}
