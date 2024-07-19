class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {   //1239
        
        int countNine =0;
        
        for(int i =digits.size()-1;i>=0;i--)
        {
            
            if(digits[i]==9)     //1230
            {
            digits[i]=0;
            countNine++;
            }
            
            else if(digits[i] !=9)
            { 
                digits[i] +=1; 
                break;
            }
        }
        
        if(countNine ==digits.size())
        {
            digits.insert(digits.begin(),1);
        }
        
        return digits;
        
    }
};