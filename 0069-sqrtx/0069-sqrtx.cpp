class Solution {
public:
    int mySqrt(int n) {

        if(n == 0) return 0 ;

        int start=1 ;
        int end=n ;
        
        int ans=-1 ;
        
        while(start <= end){
            
            long long mid = start+(end-start)/2 ;
            
            if(mid*mid <= (long long)n){
                ans = mid ;
                start = mid+1 ;
            }else{
                end = mid-1 ;
            }
        }
        return ans ;
    }
};