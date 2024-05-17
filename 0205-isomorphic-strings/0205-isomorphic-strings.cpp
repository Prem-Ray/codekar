class Solution {
public:
    bool isIsomorphic(string s, string t) {

      /*  int hash[256] = {0} ;
        bool isthash[256] = {0} ;

    // for mapping
        for(int i=0 ; i<s.size() ; i++) {
            if(hash[s[i]]==0 && isthash[t[i]]==0) {
                hash[s[i]] = t[i] ;
                isthash[t[i]] = true ;
            }
        }

    // for checking maping is successful or not
    for(int i=0 ; i<t.size() ; i++) {
        if(char(hash[s[i]])!=t[i]) {
            return false ;
        }
        
    } 
    return true ;*/

    int hash[256] = {0} ;
    int check[256] = {0} ;

    int i=0 ;

    for(int i=0 ; i<s.length() ; i++){
        if(hash[s[i]]==0 && check[t[i]] == 0) {
            //if not mapped
            hash[s[i]] = t[i] ;
            check[t[i]] = 1 ;
           
        }
        
    }

    //for checking the mapping is done or not
    for(int i=0 ; i<s.length() ; i++) {
        if(hash[s[i]] != t[i]) {
            return false ;
        }
    }

    return true ;



























        
    }
};