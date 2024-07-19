#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) //**argv
{
int lower =atoi(argv[1]); 
int Higher=atoi(argv[2]);

for ( int i = lower; i<=Higher;i++)
{
printf("%d\n",i); 

}

}

/*
1- cd C:\Users\USER\Desktop\Learn Programing\Problem-Solving\Command Line Arguments
2- gcc -o out2 02_Convert_To_Int.c     -> to compile the file  and generate .exe  file
3- .\out 2 5        -> to include the argumrnts
4- rm out                  -> to delete .exe



*/