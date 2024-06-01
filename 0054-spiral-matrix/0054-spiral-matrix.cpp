class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int m = matrix.size() ;
        int n = matrix[0].size() ;
        int totalElmnts = m*n ;

        int startingRow = 0 ;
        int endingCol = n-1 ;
        int endingRow = m-1 ;
        int startingCol = 0 ;

        vector<int>ans ;
        int count = 0 ;

        while(count < totalElmnts)  {

            //staritng row print 
            for(int i=startingRow ; i<=endingCol && count<totalElmnts ; i++) {
                ans.push_back(matrix[startingRow][i]) ;
                count++ ;
            }

            startingRow++ ;

            //ending col print
            for(int i=startingRow ; i<=endingRow && count<totalElmnts ; i++) {
                ans.push_back(matrix[i][endingCol]) ;
                count++ ;
            }

            endingCol-- ;

            //ending row print 
            for(int i=endingCol ; i>=startingCol && count<totalElmnts ; i--) {
                ans.push_back(matrix[endingRow][i]) ;
                count++ ;
            }

            endingRow-- ;

            //starting col print 
            for(int i=endingRow ; i>=startingRow && count<totalElmnts ; i--) {
                ans.push_back(matrix[i][startingCol]) ;
                count++ ;
            }

            startingCol++ ;

        }    
        return ans ;    
    }
};