class Solution {
public:
    bool isAnagram(string s, string t) {

    //sorting 

    /*
    sort(s.begin(),s.end()) ;
    sort(t.begin(),t.end()) ;
    if(s==t) {
        return true ;
    }
    else {
        return false ;
    } */

    //counting

  /*  int freqTable[256] = {0} ;

    for(int i=0 ; i<s.length() ; i++) {
        freqTable[s[i]]++ ;
    }

    for(int j=0 ; j<t.length() ; j++) {
        freqTable[t[j]]-- ;
    }

    for(int i=0 ; i<256 ; i++) {
        if(freqTable[i] == 0 ) {

        }
        else {
            return false ;
        }
    }

    return true ;*/




    // sort(s.begin(),s.end()) ;
    // sort(t.begin(),t.end()) ;
    // if(s.size() != t.size()) {
    //     return false ;
    // }

    // for(int i=0 ; i<s.size() ; i++) {
    //     if(s[i] != t[i]) {
    //         return false ;
    //     }
        
    // }

    int hash[256] = {0} ;
    
    if(s.size() != t.size()) {
        return false ;
    }

    for(int i=0 ; i<s.size() ; i++) {
        hash[s[i]]++ ;
    }

    for(int j=0 ; j<t.size() ; j++) {
        hash[t[j]]-- ;
    }

    for(int i=0 ; i<256 ; i++) {
        if(hash[i]>0) {
            return false ;
        }
    }

    return true ;
    

 }

};