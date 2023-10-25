class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
       vector<int> sortedArray(n+m);
       short int indix_nums1=0;
       short int indix_nums2=0;
       short int indix_array=0; 
        
        while(indix_nums1<m and indix_nums2<n)
        {
            if(nums1[indix_nums1]<nums2[indix_nums2])
            {
                sortedArray[indix_array++]=nums1[indix_nums1++];
            }
            
            else
            {
               sortedArray[indix_array++]=nums2[indix_nums2++];

            }
            
        }
        
        while(indix_nums1<m)
        {
            sortedArray[indix_array++]=nums1[indix_nums1++];
        }
        
        while(indix_nums2<n)
        {
             sortedArray[indix_array++]=nums2[indix_nums2++];
        }
        
        nums1=sortedArray;
    }
};