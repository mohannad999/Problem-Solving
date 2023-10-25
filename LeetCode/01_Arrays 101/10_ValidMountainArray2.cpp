#include <iostream>
#include<vector>

class Solution {
public:
    bool validMountainArray(std::vector<int>& arr) {
       for(int i=1;i<arr.size();i++)
       {
           // if(arr[i]<arr[i-1] or arr[i]==arr[i-1])
           //     return false;
            int mountain;
           if(arr[i]>arr[i+1] and arr[i]>arr[i-1])
           {
                mountain =i;
           }
           
           for(int j=1;j<mountain;j++)
           {
               if(!(arr[j]>arr[j-1]))
                   return false;
           }
           
           for(int j=arr.size()-1;j>mountain;j--)
           {
               if(!(arr[j]<arr[j-1]))
                  return false;
           }
                  
       }
                  return true;
    }
};


int main()
{
    Solution solution;
   
    std::vector <int> array={3,5,5};
   //{0,3,2,1} , {3,5,5}
    if(solution.validMountainArray(array))
    {
        std::cout<<"it's Mounttain Array"<<std::endl;
    }
    else 
    std::cout<<"it's not a Mounttain Array"<<std::endl;

return 0;
}