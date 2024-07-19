#include <stdio.h>

int main(int argc, char *argv[]) //**argv
{

    printf("Hello World !!\n");

    printf("argc : %d\n", argc);
    printf("argv : %s\n", argv[0]);
    printf("argv : %s\n", argv[1]);
    printf("argv : %s\n", argv[5]);
}

/*
1- cd C:\Users\USER\Desktop\Learn Programing\Problem-Solving\Command Line Arguments
2- gcc -o out HelloWorld.c     -> to compile the file  and generate .exe  file
3- .\out 4 5 6 4.0 run       -> to include the argumrnts
4- rm out                  -> to delete .exe



*/