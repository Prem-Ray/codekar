class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        vector<int>nthrow(n,1) ;
        long long ans=1 ;
        
        for(int i=1 ; i<n-1 ; i++){
            ans = ans*(n-i) ;
            ans = ans/i ;
            nthrow[i] = ans ;
        }
        
        return nthrow ;
        
    }
};
