class Solution {
public:
    bool isPalindrome(int x) {
        long long num=x ;
        long long ans=0 ;
        int digit=0 ;

        if(num<0) {
            return false ;
        }

        while(num!=0) {
            digit=num%10 ;
            ans=ans*10+digit ;
            num=num/10 ;
        }

        if(x==ans) {
            return true ;
        }
        else {
            return false ;
        }
    }
};