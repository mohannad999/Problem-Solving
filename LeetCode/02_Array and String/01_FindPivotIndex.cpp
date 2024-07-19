class Solution {
public:
    int pivotIndex(vector<int>& nums) {  //[1,7,3,6,5,6]
        
        short int LiftSum=0;
        short int RightSum=0;
        
        
        for(int item:nums)  
        {
            RightSum +=item;    // 28 
        }
        
        for(int i =0; i<nums.size();i++)  // R=11   L= 11  i=  3
        {
            RightSum-=nums[i];
            if(LiftSum==RightSum)
            {
                return i;
            }
            
            
            else
            {
                LiftSum +=nums[i];
            }
        }
        
        return -1;
    }
};