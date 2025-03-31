class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // for row size
        int m = matrix.size() ; ;
        // row matrix--> matrix[i][0]

        // for column size
        int n = matrix[0].size();
        // column matrix--> matrix[0][j] 

        // for first column observation
        int col0 = 1 ;

        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                if(matrix[i][j] == 0){
                    // check it is you first column or not
                    if(j!=0){
                        // set your col matrix index 0
                        matrix[0][j] = 0 ;
                        // set your row matrix index 0
                        matrix[i][0] = 0 ;
                    }else{
                        // set your col0 to 0
                        col0 = 0 ;
                        // set your row matrix index 0
                        matrix[i][0] = 0 ;
                    }
                }
            }
        }


        // traverse without row and column matrix 
        for(int i=1 ; i<m ; i++){
            for(int j=1 ; j<n ; j++){
                if(matrix[i][j] != 0){
                // check their corresponding row and column matrix index if any is 0 or not
                    if(matrix[0][j]==0 || matrix[i][0]==0){
                        matrix[i][j] = 0 ;
                    }
                }
            }
        }

        // column matrix traverse for convert into 0
        if(matrix[0][0]==0){
            for(int j=0; j<n ; j++){
                matrix[0][j] = 0 ;
            }
        }

        // row matrix traverse for convert into 0 
        if(col0 == 0){
            for(int i=0 ; i<m ; i++){
                matrix[i][0] = 0 ;
            }
        }

        
    }
};