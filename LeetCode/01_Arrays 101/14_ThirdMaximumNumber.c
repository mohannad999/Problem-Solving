#include <stdio.h>
#include <stdlib.h>


int thirdMax(int* nums, int numsSize) {
    long long int MaxNum=-3000000000;
    long long int SecondMax=-3000000000;
    long long int ThirdMax =-3000000000;
    
    
    for (int i =0 ;i<numsSize;i++)
    {  if(MaxNum==nums[i]||SecondMax==nums[i]||ThirdMax==nums[i])
        {
            continue;
        }
    
        if(nums[i]>MaxNum )
        {
            ThirdMax=SecondMax;
            SecondMax=MaxNum;
            MaxNum=nums[i];
        }
    else if (nums[i]<MaxNum && nums[i]>SecondMax)
              {
                  ThirdMax=SecondMax;
                  SecondMax=nums[i];
              }
    
              else if(nums[i]<MaxNum && nums[i]<SecondMax && nums[i]>ThirdMax)
              {
                  ThirdMax=nums[i];
              }
}
    if(ThirdMax==-3000000000)
    {
        return MaxNum;
    }
    else
    {
        return ThirdMax;
    }
}


int main ()
{
int arr[] ={4,2,2,3,1};
int short arrSize =sizeof(arr)/sizeof(arr[0]);
int x=thirdMax(arr,arrSize);


printf("\n\nThird Maximum Number : %d\n",x);
    return 0;
}