class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTriangle;
        int counter=1;
        
        //Set the size of each vector one higer thean the previous row 
        for(int i =0; i< numRows; i++)
        {
            pascalTriangle.push_back(vector<int> (counter));
            counter++;
        }
        
        //need to reset the conter
        counter=1;
        
        
        for(int i=0; i<numRows;i++) 
        {
            for(int j=0; j<counter;j++)
            {
                if(i<2)
                      {
                    pascalTriangle[i][j]=1;
                       }
                
                else   {
                    //Handles the selection where the value is the sum of the two prior row values
                    if(j != 0 && j != counter - 1)
                    {
                       pascalTriangle[i][j]=pascalTriangle[i-1][j-1]+pascalTriangle[i-1][j]; 
                    }
                    else
                    {
                    pascalTriangle[i][j]=1;
                    }
                      }
                
               
             }
             counter++;
        
        }
        
        return pascalTriangle;
    }
};