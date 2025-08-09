class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()) return false ;

        // Brute Force Appraoch

        // sort(s.begin(),s.end()) ;
        // sort(t.begin(),t.end()) ;
        // if(s==t) return true ;
        // return false ;


        int hashh[27] = {0} ;

        for(int i=0 ; i<s.size() ; i++){
            int index = s[i]-'a' ;
            hashh[index]++ ;
        }

        for(int i=0 ; i<t.size() ; i++){
            int index = t[i]-'a' ;
            hashh[index]-- ;
        }

        for(int i=0 ; i<27 ; i++){
            if(hashh[i] > 0){
                return false ;
            }
        }

        return true ;
    }
};