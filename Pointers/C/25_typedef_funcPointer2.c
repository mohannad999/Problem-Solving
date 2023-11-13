#include <stdio.h>

typedef int(* oper_t)(int,int);

int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int multi(int a,int b)
{
    return a*b;
}

int opreation(oper_t funcptr ,int a,int b){
     return (*funcptr)(a,b);
    //funcptr(a,b);

}

int main()
{
oper_t oper[]={sum,sub,multi};

int cmd ,a,b;
//0 --> a+b 
//1 --> a-b
//2 --> a*b
//3 --> a/b

a=10;
b=15;
cmd=2;

int result=opreation((oper[cmd],a,b));
printf("Result = %d \n",result);
    return 0;
}