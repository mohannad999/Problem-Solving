class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int colSizeM = mat[0].size()-1;  //
        int rowSizeN = mat.size()-1; 
        
        vector<int> diagonalOrder;
        
        int i=0;
        int j=0;
        
        //Handles edge cases of m or n being 1
        
        if(mat.size()==1){ //{3,4,1,5}
            return mat[0];
        }
        
        else if (mat[0].size()==1){ //{ {3},{4},{1},{5} }
            for(vector<int> value :mat)
            {
                diagonalOrder.push_back(value[0]); // 3
            }
            return diagonalOrder;
        }
        
        //Add Starting point value to the new vector
        diagonalOrder.push_back(mat[0][0]);
        
        
        //once j and i both equal their limit , you have reached
        // the opposite end of the matrix and can end

        while(i <= rowSizeN || j<=colSizeM)
        {
            //path section : shift right , diogonal down 
            if (i == 0 && j <colSizeM){
                j++;
                diagonalOrder.push_back(mat[i][j]);
                   while(j>0 && i !=rowSizeN) {
                 j--;
                 i++;
             diagonalOrder.push_back(mat[i][j]);
             }
                
            }
            
         //path section : shift down , diogonal up 
          else if ( j==0 && i <rowSizeN){
               i++;
                diagonalOrder.push_back(mat[i][j]);
              
             while(j!=colSizeM && i>0){
                 i--;
                 j++;
                  diagonalOrder.push_back(mat[i][j]);
             }
          }
            
            //pathsection : shift down ,digonal down
            else if (j==colSizeM && i<rowSizeN){
                i++;
                diagonalOrder.push_back(mat[i][j]);
                
                while (j>0 && i !=rowSizeN)
                {
                    i++;
                    j--;
                    diagonalOrder.push_back(mat[i][j]);
                }
            }
            
            //pathsection :shift right , digonal up
            else if ( i==rowSizeN && j  <colSizeM)
            {
                j++;
                diagonalOrder.push_back(mat[i][j]);
                while (i> 0&& j!= colSizeM)
                {
                    i--;
                    j++;
                    diagonalOrder.push_back(mat[i][j]);
                }
            }
            
            else {
                break;
            }
        }

         return diagonalOrder;
    }
};
//[[3,4,1,5]]  case one
//[[3],[4],[1],[5]]  case two
//[[1,2,3],[4,5,6],[7,8,9]]