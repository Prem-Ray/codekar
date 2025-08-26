class Solution {
  public:
    vector<int> prefSum(vector<int> &arr) {
        // code here
        vector<int>ans(arr.size(),0) ;
        
        int sum=0 ;
        
        for(int i=0 ; i<arr.size() ; i++){
            sum = sum+arr[i] ;
            ans[i] = sum ;
        }
        return ans ;
    }
};