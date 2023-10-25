int findMaxConsecutiveOnes(int* nums, int numsSize){

    int consecutive =0;
    int max_consecutive=0;
    
    for(int i =0 ;i<numsSize;i++)
    {   
       if(nums[i]==1)
       {
           consecutive++;
           if(consecutive>max_consecutive)
           max_consecutive=consecutive;
       }
        else
            consecutive=0;
    }
    return max_consecutive ;
}