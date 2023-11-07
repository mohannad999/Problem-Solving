class Solution {
public:
    void moveZeroes(vector<int>& nums) { //[0,1,0,3,12]
        short int ZeroPosition=0;
        
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]!=0 and i==ZeroPosition)
            {
                ZeroPosition++;
            }
            
            else if (nums[i]!=0 and i!=ZeroPosition)
            {
               nums[ZeroPosition]= nums[i];
                nums[i]=0;
                ZeroPosition++;
            }
        }
        
    }
};