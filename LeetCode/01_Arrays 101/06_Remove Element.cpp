class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        short int Vectorlenght=nums.size();
        short int finallength=Vectorlenght;
        short int countvalue=0;
    
        for(int index =0;index<Vectorlenght;index++)
        {
            if(nums[index]==val)
            { 
                 countvalue++;
                     finallength--;
            }
            else
            {
                if(countvalue>0)
                  nums[index-countvalue]= nums[index];
            }
       
        }
        return finallength;
    }
};