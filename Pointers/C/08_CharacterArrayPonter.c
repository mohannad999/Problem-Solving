#include <stdio.h>
#include <string.h>

void ReverseName(char name[15], short length) //char name[] or char *name
{
    char xName[15];
    short j = 0;
    for (int i = length - 1; i >= 0; i--) { // Start from length - 1 to avoid accessing out-of-bounds memory
        xName[j] = name[i];
        j++;
    }
    xName[j] = '\0'; // Null-terminate the reversed string
    strcpy(name, xName); // Copy the reversed string back to the original array
}

int main() {
    char name[15] = "Mohannad";
    short length = strlen(name);
    ReverseName(name, length);
    printf("Reversed name: %s\n", name);
    return 0;
}
