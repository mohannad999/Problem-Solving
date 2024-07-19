#include <stdio.h>

int PrintAge(int age){
printf("is %d years old \n\n",age);
return age;
}


typedef int(*f_t)(int);

int main ()
{

f_t Ali_age ,Fadi_Age,sami_Age;

Ali_age=&PrintAge;
printf("Ali ");
int age =(Ali_age)(29);


Fadi_Age =&PrintAge;
printf("Fadi ");
age =Fadi_Age(23);

    return 0;
}