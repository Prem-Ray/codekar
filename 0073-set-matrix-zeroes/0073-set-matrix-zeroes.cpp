class Solution {
public:

  /*  void colSet(vector<vector<int>>& matrix , int j) {
        for(int i=0 ; i<matrix.size() ; i++) {
            if(matrix[i][j]!=0) {
                matrix[i][j]='k' ;
            }
        }
    }

    void rowSet(vector<vector<int>>& matrix , int i) {
        for(int j=0 ; j<matrix[0].size() ; j++) {
            if(matrix[i][j]!=0) {
                matrix[i][j]='k' ;
            }
        }
    } */
    
    void setZeroes(vector<vector<int>>& matrix) {
     /*   for(int i=0 ; i<matrix.size() ; i++) {
            for(int j=0 ; j<matrix[0].size() ; j++) {
                if(matrix[i][j]==0) {
                    //colset elements marking 
                    colSet(matrix,j) ;
                    //rowset elements marking
                    rowSet(matrix,i) ;
                }
            }
        }

        for(int i=0 ; i<matrix.size() ; i++) {
            for(int j=0 ; j<matrix[0].size() ; j++) {
                if(matrix[i][j]=='k') {
                    matrix[i][j]=0 ;
                }
            }
        } */

        int col0=1 ;
        
        for(int i=0 ; i<matrix.size() ; i++) {
            for(int j=0 ; j<matrix[0].size() ; j++) {
                if(matrix[i][j]==0) {
                    matrix[i][0]=0 ;
                    if(j==0) {
                        col0=0 ;
                    }
                    else {
                        matrix[0][j]=0 ;
                    }
                }
            }
        }

        for(int i=1 ; i<matrix.size() ; i++) {
            for(int j=1 ; j<matrix[0].size() ; j++) {
                if(matrix[i][j]!=0) {
                    if(matrix[0][j]==0 || matrix[i][0]==0) {
                        matrix[i][j]=0 ;
                    }
                }
            }
        }

        if(matrix[0][0]==0) {
            for(int j=0 ; j<matrix[0].size() ; j++) {
                matrix[0][j]=0 ;
            }
        }

        if(col0==0) {
            for(int i=0 ; i<matrix.size() ; i++) {
                matrix[i][0]=0 ;
            }
        }
    }

};