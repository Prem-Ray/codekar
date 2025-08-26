class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int totalSum = 0 ;
        for(int i=0 ; i<arr.size() ; i++){
            totalSum += arr[i] ;
        }
        
        int prefixSum=0 ;
        for(int i=0 ; i<arr.size() ; i++){
            prefixSum += arr[i] ;
            int suffixSum = totalSum-prefixSum ;
            if(prefixSum == suffixSum) return true ;
        }
        return false ;
    }
};
