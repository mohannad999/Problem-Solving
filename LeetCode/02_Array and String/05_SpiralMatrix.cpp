class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        short int toplimit =0;
        short int leftlimit =0;
        short int bottomlimit= matrix.size()-1;
        short int rightlimit = matrix[0].size()-1;
        int i=0;
        int j=0;
        vector<int> spiralOrder;
        
        
        //Handle edge case of m and n being 1
        if(matrix.size()==1 && matrix[0].size()==1){
            return matrix[0];
        }
        
        //Add starting point to the new vector
        spiralOrder.push_back(matrix[0][0]);
        
        
        while(bottomlimit>=toplimit && rightlimit >=leftlimit)
        {
            //Moving Right
            if(i==toplimit && j<rightlimit)
            {
                while(i==toplimit && j<rightlimit)
                {
                    j++;
                     spiralOrder.push_back(matrix[i][j]);
                    if(j==rightlimit)
                    {
                        toplimit++;
                    }
                }
            }
            
            //Moving Down
            else if (j==rightlimit && i<bottomlimit)
            {
                while(j==rightlimit && i<bottomlimit)
                {
                    i++;
                    spiralOrder.push_back(matrix[i][j]);
                    if(i==bottomlimit)
                    {
                        rightlimit--;
                    }
                }
            }
            
            //Moving Left
            else if (i==bottomlimit && j>leftlimit)
            {
                while(i==bottomlimit && j>leftlimit)
                {
                    j--;
                    spiralOrder.push_back(matrix[i][j]);
                    if(j==leftlimit)
                    {
                        bottomlimit --;
                    }
                }
            }
            
            //Moving up 
            else if (j==leftlimit && i>toplimit)
            {
                while(j==leftlimit && i>toplimit)
                {
                    i--;
                    spiralOrder.push_back(matrix[i][j]);
                    if(i==toplimit)
                    {
                        leftlimit++;
                    }
                }
            }  
            
        }
        
         return spiralOrder; 
    }
};