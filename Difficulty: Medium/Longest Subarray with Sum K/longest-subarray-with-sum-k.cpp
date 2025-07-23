class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int maxlen=0 ;
        int n=arr.size() ;
        int sum=0 ;
        map<int,int>mpp ;
        
        for(int i=0 ; i<n ; i++){
            
            sum += arr[i] ;
           
            if(sum==k){
                maxlen = max(maxlen,i+1) ;
            }
            
            int rem=sum-k ;
            
            if(mpp.find(rem) != mpp.end()){
                maxlen = max(maxlen,i-mpp[rem]) ;
            }
            
            if(mpp.find(sum) == mpp.end()){
                mpp[sum]=i ;
            }
        }
        return maxlen ;
    }
};