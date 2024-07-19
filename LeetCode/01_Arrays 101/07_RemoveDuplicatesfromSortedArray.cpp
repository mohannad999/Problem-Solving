class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
         short int shiftCount=0;
        for(int index=1;index<nums.size();index++)
        {
            int curruntNum =nums[index];
            {
             if(curruntNum==nums[index-1])
             {
                 shiftCount++;   
             }
                else{
                   if(shiftCount>0)   
             {
                 nums[index-shiftCount]=nums[index];
             } 
                
            
            }
        }
        }
        
        return nums.size()-shiftCount;
        
    }
};