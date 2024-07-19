class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int hiker=1;
        bool goingUphill =false;
        
        if(arr.size()<3)
            return false;
        
        for(int i =1; i<arr.size();i++)
        {
            if(arr[i-1]<arr[i])
            {
             hiker++;
             if(goingUphill==false)
                 goingUphill=true;
            }
            else
                break;
        }
        
        if(hiker==arr.size() or goingUphill==false)
         return false;
        
        for(int i =hiker;i<arr.size();i++)
        {
            if(arr[i-1]>arr[i])
            {
                hiker++;
            }
            else
                return false;
        }
        return true;
    }
};