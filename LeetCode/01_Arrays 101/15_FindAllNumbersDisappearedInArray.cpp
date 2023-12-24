class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {  //[2,1,2]
        
        vector <int> countvalues (nums.size(),0); //[0,0,0]
        vector <int> missingvalues ;
        
        for (int i =0; i<nums.size();i++)
        {
            countvalues[nums[i]-1]++; //[1,2,0]
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(countvalues[i]==0)
            {
                missingvalues.push_back(i+1);
            }
        }
        
        return missingvalues;
        
        
    }
};