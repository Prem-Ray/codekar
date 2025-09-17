class Solution {
  public:
  
    int fn(int mid , int n){
        int val=1 ;
        
        for(int i=1 ; i<=n ; i++){
            val = val*mid ;
        }
        return val ;
    }
    int nthRoot(int n, int m) {
        // Code here
        int start=1 ;
        int end=m ;
        
        int ans=-1 ;
        
        while(start <= end){
            
            int mid = start+(end-start)/2 ;
            
            if(fn(mid,n) == m){
                return mid ;
            }
            else if(fn(mid,n) > m){
                end = mid-1 ;
            }
            else{
                start = mid+1 ;
            }
        }
        return -1 ;
    }
};