#include<stdio.h>

int main()
{
int A[]={2,4,5,1};
printf("%d\n",A);
printf("%d\n",&A[0]);
printf("%d\n",A[0]);
printf("%d\n",*A);
///////////
printf("--------------\n");
printf("%d\n",A[1]);
printf("%d\n",*(A+1));
printf("--------------\n");
printf("%d\n",A[2]);
printf("%d\n",*(A+2));

    return 0;
}