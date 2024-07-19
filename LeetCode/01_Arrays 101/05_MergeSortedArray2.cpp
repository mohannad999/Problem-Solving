class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int short nums1_Indix= m-1;
        int short nums2_Indix= n-1;
        int short array_indix=n+m -1;
        
        while(nums1_Indix>0 and nums2_Indix>0)
        {
            
            if(nums1[nums1_Indix]>nums2[nums2_Indix])
            {
                nums1[array_indix--]=nums1[nums1_Indix--];
            }
            
            else
            {
                nums1[array_indix--]=nums2[nums2_Indix--];

            }
        }
        
        while(nums1_Indix>0)
        {
            nums1[array_indix--]=nums1[nums1_Indix--];
        }
        
         while(nums2_Indix>0)
        {
            nums1[array_indix--]=nums2[nums2_Indix--];
        }
    }
};