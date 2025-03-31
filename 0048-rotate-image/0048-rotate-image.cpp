class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        // row size
        int m = matrix.size() ;
        // col size
        int n = matrix[0].size() ;

        // transpose the matrix 
        for(int i=0 ; i<m ; i++){
            for(int j=i+1 ; j<n ; j++){
                swap(matrix[i][j],matrix[j][i]) ;
            }
        }

        // reverse all rows
        for(int i=0 ; i<m ; i++){
            reverse(matrix[i].begin(),matrix[i].end()) ;
        }
    }
};