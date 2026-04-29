class Solution {
public:
    bool isPalindrome(string s) {
        string str="" ;
        for(int i=0 ; i<s.size() ; i++){
            char ch = s[i] ;

            if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
                str.push_back(tolower(ch)) ;
            }
        }

        cout<<str ;

        int i=0 ;
        int j=str.size()-1 ;
        while(i<j){
            if(str[i]!=str[j]){
                return false ;
            }
            i++ ;
            j-- ;
        }
        return true ;
    }
};