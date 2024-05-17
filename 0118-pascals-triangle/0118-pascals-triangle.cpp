class Solution {
public:

    vector<int>generatRow(int row) {
        long long ans = 1 ; 
        vector<int>res ;
        res.push_back(ans) ;
        
        for(int col=1 ; col<row ; col++) {
            ans=ans*(row-col)/col ; 
            res.push_back(ans) ;
        }
        return res ;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans ;
        for(int i=1 ; i<=numRows ; i++) {
            ans.push_back(generatRow(i)) ;
        }
        return ans ;
    }
    
};