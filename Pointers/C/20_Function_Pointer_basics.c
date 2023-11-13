#include <stdio.h>

void func()
{
    printf("Hi this is func !!");
}


int main ()
{
    void(* func_ptr)(void); // func_ptr is a function pointer variable definition 
    //which doesn't take any input arguments (void) and doesn't return and value (void)

    func_ptr = &func;
   // func_ptr = func; // it's the same as above , 

    (func_ptr)();// jump to the function pointed by funct_ptr  (recommended)
    //func_ptr(); // it's the same as above ,  


    return 0;
}