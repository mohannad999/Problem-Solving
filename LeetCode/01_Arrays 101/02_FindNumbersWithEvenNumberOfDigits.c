int findNumbers(int* nums, int numsSize){
 
int number_digits=1;    
int numberOfEvenNum=0;   
    
for (int i =0; i<numsSize; i++)
{
    int tempNum=nums[i];
    while((tempNum/10)>0)
    {
       number_digits ++; 
       tempNum=tempNum/10;
       
    }
    
if (number_digits%2==0)
{
    numberOfEvenNum++;
}
number_digits=1;
}
    return numberOfEvenNum;
}