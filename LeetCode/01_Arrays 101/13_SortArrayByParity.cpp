class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) { //[0,1]  Begin=1  end=0
        int short end =nums.size()-1;
        int Begin=0;
        
        if (nums.size()<2)
        {return nums;}
        
        for(int i=0;i<nums.size();i++)
        {
           
            
            if(nums[Begin]%2 != 0 and nums[end]%2==0 and (Begin <end))
            {
                int temp =nums[Begin];
                nums[Begin]=nums[end];
                nums[end]=temp;
                end--;
                Begin++;
                //swap(nums[Begin],nums[end]);
             
            }
            
            else
            {
                  if(nums[Begin]%2 ==0)
            {Begin ++; }
            
            if(nums[end]%2 !=0)
            {end --; } 
                
            }
            
            if(Begin == end)
            {
                break;
            }
          
        }
        return nums;
        
    }
};