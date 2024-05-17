class Solution {
public:

    int expandIndex(string s , int left , int right) {
        int count=0 ;
        while( left>=0 && right<s.length() && s[left]==s[right] ) {
            count++ ;
            left-- ;
            right++ ;
        }
        return count ;
    }
    int countSubstrings(string s) {

        int n = s.length() ;
        int totalCount = 0 ;

        for(int i=0 ; i<n ; i++) {
            //odd
            int oddAns = expandIndex(s,i,i) ;
            totalCount = totalCount+oddAns ;
            //even
            int evenAns = expandIndex(s,i,i+1) ;
            totalCount = totalCount+evenAns ;
        }
        return totalCount ;
    }
    
};