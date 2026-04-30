class Solution {
public:
    bool checkPalindrome(string s , int i , int j){
        while(i<j){
            if(s[i]!=s[j]) return false ;
            i++ ;
            j-- ;
        }
        return true ;
    }

    bool validPalindrome(string s) {
        int i=0 ;
        int j=s.size()-1 ;
        int count=0 ;

        while(i<j){
            if(s[i]!=s[j]){
                if(count==1) return false ;
                if(checkPalindrome(s,i+1,j)) i++ ;
                if(checkPalindrome(s,i,j-1)) j-- ;
                count++ ;
                continue ;
            }
            i++ ;
            j-- ;
        }

        if(count==0 || count==1) return true ;
        return false ;
    }
};