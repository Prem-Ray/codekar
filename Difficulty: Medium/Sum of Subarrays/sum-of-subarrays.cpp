class Solution {
  public:
    int subarraySum(vector<int>& arr) {
        // code here
        int n=arr.size() ;
        int sum=0 ;
        
        for(int i=0 ; i<n ; i++){
            sum += (i+1)*(n-i)*arr[i] ;
        }
        return sum ;
    }
};