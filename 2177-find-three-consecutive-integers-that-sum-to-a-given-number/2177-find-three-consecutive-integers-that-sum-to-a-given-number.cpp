class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long>ans{} ;

        long mid=0 ;
        long prev=0 ;
        long nxt=0 ;

        if(num%3 == 0) {
            mid=num/3 ;
            prev=mid-1 ;
            nxt=mid+1 ;
        }
        else {
            return ans ;
        }
        
        ans.push_back(prev) ;
        ans.push_back(mid) ;
        ans.push_back(nxt) ;

        return ans ;        
    }
};