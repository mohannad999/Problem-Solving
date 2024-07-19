class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) { //[17,18,5,4,6,1]
        int maxnum=0;
        for(int i=0; i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[j]>maxnum)
                    maxnum=arr[j];
            }
            
            arr[i]=maxnum;
            maxnum=0;
            
        }
     
        arr[arr.size()-1]=-1;
        
        return arr;
        
    }
};