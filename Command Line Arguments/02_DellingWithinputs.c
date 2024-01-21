#include <stdio.h>

int main(int argc, char *argv[]) //**argv
{

printf("argc : %d\n",argc);

for ( int i = 0; i<argc;i++)
{
printf("argv[%d]=%s\n",i,argv[i]); 
}

}

/*
1- cd C:\Users\USER\Desktop\Learn Programing\Problem-Solving\Command Line Arguments
2- gcc -o out3 03_Convert_To_Int2.c     -> to compile the file  and generate .exe  file
3- .\out3 1 2 3 4 5 6       -> to include the argumrnts
4- rm out                  -> to delete .exe



*/