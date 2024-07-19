Lclass Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {  //[17,18,5,4,6,1]  current =17 , max=18
        int max=-1;
        
        for(int i=arr.size()-1;i>=0;i--)
        { 
         int current = arr[i];
            
         arr[i]=max;
         
         if(current>max)
             max=current;
            
        }
        return arr;
    }
};