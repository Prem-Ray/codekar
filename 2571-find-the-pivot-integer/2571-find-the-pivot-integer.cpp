class Solution {
public:
    int pivotInteger(int n) {
        
        if(n==1) return 1 ;

        vector<int>prefixSum(n+1,1) ;
        int j=1 ;
        int totalSum = n*(n+1)/2 ;
        
        for(int i=2 ; i<n+1 ; i++){
            prefixSum[j] = prefixSum[j-1] + i ;
            int suffixSum =  totalSum-prefixSum[j] ;
            if(prefixSum[j-1] == suffixSum) return i ;
            j++ ;
        }
        return -1 ;
    }
};