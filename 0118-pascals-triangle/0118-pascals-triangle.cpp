class Solution {
public:

    vector<int>generateRows(int row){
        vector<int>ansrow ;
        ansrow.push_back(1) ;
        int res = 1;
        for(int col=1 ; col<row ; col++){
            res = res*(row-col) ;
            res = res/col ;
            ansrow.push_back(res) ;
        }
        return ansrow ;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans ;
        for(int i=1 ; i<=numRows ; i++){
            ans.push_back(generateRows(i)) ;
        }
        return ans ;
    }
};