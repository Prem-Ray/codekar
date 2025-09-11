class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int>mpp ;
        int count=0 ;
        int prexor=0 ;
        
        for(int i=0 ; i<arr.size() ; i++){
            // this is prexor tiil current index
            prexor = prexor^arr[i] ;
            
            // find the remaining 
            int remaining = prexor^k ;
            
            // find remaining in map
            if(mpp.find(remaining) != mpp.end()){
                count += mpp[remaining] ;
            }
            
            if(prexor == k){
                count++ ;
            }
            
            mpp[prexor]++ ;
        }
        
        return count ;
    }
};