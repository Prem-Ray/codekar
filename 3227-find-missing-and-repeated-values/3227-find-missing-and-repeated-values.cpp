class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        int n=grid.size() ;
        int size = n*n ;
        vector<int>hashh(size+1,0) ;

        for(int i=0 ; i<n ; i++){
           for(int j=0 ; j<grid[i].size() ; j++){
                hashh[grid[i][j]]++ ;
           }
        }

        vector<int>ans ;
        int repeating=-1 ;
        int missing=-1 ;

        for(int i=1 ; i<hashh.size() ; i++){
            if(hashh[i]>1){
                cout<<i<<"1 " ;
                repeating = i ;
            }

            if(hashh[i]==0){
                cout<<i<<"2 " ;
                missing = i ;
            }
        }
        
        ans.push_back(repeating) ;
        ans.push_back(missing) ;

        return ans ;
        
    }
};