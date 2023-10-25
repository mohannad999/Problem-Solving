class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int NOevenNumber=0;
        for(int i:nums)
        {
            int NODigit=0;
            while(i >0)
            {
                i /=10;
                NODigit++;
            }
             if (NODigit%2 ==0)
             NOevenNumber++;
        }
        return NOevenNumber;
    
    }
};