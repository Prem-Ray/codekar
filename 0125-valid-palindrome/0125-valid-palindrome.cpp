class Solution {
public:


    bool checkPointer(char ch){
        if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
            return true ;
        }
        return false ;
    }

    bool isPalindrome(string s) {
        // for check point
        string temp="" ;
        for(int i=0 ; i<=s.size()-1 ; i++){
            if(checkPointer(s[i])){
                temp.push_back(tolower(s[i])) ;
            }
        }
        
        int l=0 , h=temp.size()-1 ;
        while(l<h){
            if(temp[l]!=temp[h]){
                return false ;
            }
            l++ ;
            h-- ;
        }
        return true ;

        

    }
};