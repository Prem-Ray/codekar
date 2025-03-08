class Solution {
private:
    bool checkindex(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            return true ;
        }
        return false ;
    }
public:
    bool isPalindrome(string s,int l=0, int e=-1) {
        string temp = "" ;
        for(int i=0 ; i<s.size() ; i++){
            if(checkindex(s[i])){
                temp.push_back(tolower(s[i])) ;
            }
        }
        if(e==-1){
            e=temp.size()-1 ;
        }

        while(l<e){
            if(temp[l] != temp[e]){
                return false ;
            }
            l++ ;
            e-- ;
        }
        return true ;
    }
    
};