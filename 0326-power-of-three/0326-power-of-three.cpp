class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 0) return false ;
        if(n == 1 ) return true ;

        long long ans=1 ;

        while(ans<n){
            ans = ans*3 ;
            if(ans == n) return true ;
        }

        return false ;
    }
};