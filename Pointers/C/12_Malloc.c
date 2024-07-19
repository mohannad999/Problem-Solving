#include<stdio.h>
#include<stdlib.h>

int main()
{
 int a ; // goes on stack 

 int *p;
 p = (int*)malloc(sizeof(int)); 
 *p = 10; 
free(p); 
// printf("%d\n",*p); 
  p = (int*)malloc(20*sizeof(int)); 
 *p = 20; 
 
 printf("%d\n",*p); 



    return 0;
}