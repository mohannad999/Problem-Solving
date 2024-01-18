class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTriangle;
        int counter=1;
        
        //Set the size of each vector one higer thean the previous row 
        for(int i =0; i< numRows; i++)
        {
            pascalTriangle.push_back(vector<int> (counter,1));
            counter++;
        }
        
        //need to reset the conter
        counter=1;
        
        
        for(int i=0; i<numRows;i++) 
        {
            for(int j=0; j<counter;j++)
            {
                    if(j != 0 && j != counter - 1)
                    {
                       pascalTriangle[i][j]=pascalTriangle[i-1][j-1]+pascalTriangle[i-1][j]; 
                    }
            }
             counter++;
        
        }
        
        return pascalTriangle;
    }
};