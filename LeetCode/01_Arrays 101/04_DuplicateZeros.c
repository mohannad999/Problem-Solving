#include <stdio.h>
#include <stdlib.h>

void duplicateZeros(int* arr, int arrSize){

 
    for(int i=0;i<arrSize;i++)
        
    {
        if(arr[i]==0)
        {
            for(int x=arrSize-1;x>i;x--)
            {
                arr[x]=arr[x-1];
                
                 
            }
          arr[i]=0;
          i++;
        }
         
    }
}

int main()
{
    int arr[] ={1,0,2,3,0,4,5,0};
    int arrsize=sizeof(arr)/sizeof(arr[0]);
   //  printf("%d ", arrsize);
    duplicateZeros(arr,arrsize);
    
  printf(" duplicate Zeros array: ");
    for (int i = 0; i < arrsize; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}