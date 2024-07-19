#include <stdio.h>
#include <stdint.h>

 typedef struct 
 {
int8_t var1;
int32_t var2;
int8_t var3;

 } st_dataAligned __attribute__((aligned));

  typedef struct 
 {
int8_t var1;
int32_t var2;
int8_t var3;

 } st_dataPacked __attribute__((packed));




int main()
{
 


st_dataAligned myData;

st_dataPacked packedData ; 


 printf("size of struct : %d",sizeof(myData));

  printf("size of struct : %d",sizeof(packedData));
 
    return 0;
}