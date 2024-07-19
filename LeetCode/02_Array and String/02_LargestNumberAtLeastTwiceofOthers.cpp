class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int Maxnum=0;
        int SecondMax=0;
        int MaxIndex=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>Maxnum)
            {
                SecondMax=Maxnum;
                Maxnum=nums[i];
                MaxIndex=i;
            }
            
            else if  (nums[i]<Maxnum && nums[i]>SecondMax)
            {
                SecondMax=nums[i];
            }
        }
        
        if(Maxnum>= 2*SecondMax)
        {
            return MaxIndex;
        }
        
        else 
        {
            return -1;
        }
        
    }
};