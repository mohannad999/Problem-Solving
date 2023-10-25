class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int  counter=0;
        int maxConsecutive=0;
        for(int x:nums)
        {
            if(x != 1)
            {
                counter =0;
            }
            else{
                counter ++;
                 if(counter>maxConsecutive)
                    maxConsecutive=counter;
            }
            
               
        }
        return maxConsecutive;
    }
};