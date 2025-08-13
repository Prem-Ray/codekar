class Solution {
public:

    bool check(char ch){
        if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') ){
            return true ;
        }
        return false ;
    }

    string reverseOnlyLetters(string s) {
        int i=0 ;
        int j=s.size()-1 ;

        while(i<j){

            char let1 = s[i] ;
            char let2 = s[j] ;

            if(check(let1) && check(let2)){
                swap(s[i],s[j]) ;
                i++ ;
                j-- ;
            }else if(check(let1) &&  !check(let2)){
                j-- ;
            }else{
                i++ ;
            }
        }
        return s ;
    }
};