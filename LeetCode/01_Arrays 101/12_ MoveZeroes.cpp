class Solution {
public:
    void moveZeroes(vector<int>& nums) { //[0,1,0,3,12]  
        short int CountZeros=0;
        
        if(nums.size() <2)
        {
            return;
        }
        
        for(int i=0 ; i < nums.size() ;i++)
        {
            if(nums[i] == 0)
            {     CountZeros++;}
            else
            { nums[ i- CountZeros]=nums[i];}
        }
        
        
        if(CountZeros ==nums.size())
        {
            return;
        }
        
        int IndexZeros=nums.size()-CountZeros;
        
        for(int i =nums.size()-1;i>=IndexZeros;i--)
        {
            if(nums[i]!=0)
            {
                nums[i]=0;
            }
           else{
               continue;
               }
               }
    
        
        }
        
    
};