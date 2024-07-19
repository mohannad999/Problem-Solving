class Solution {
public:
    vector<int> sortedSquares(vector<int>& A)
    {
        vector<int> res(A.size());
        int l = 0;
        int r = A.size() - 1;
        
        for (int k = A.size() - 1; k >= 0; k--) 
        {
            if (abs(A[r]) > abs(A[l])) 
                res[k] = A[r] * A[r--];
            else
                res[k] = A[l] * A[l++];
        }
        return res;
    }
};

//https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3240/discuss/495394/C++:-Simplest-one-pass-two-pointers