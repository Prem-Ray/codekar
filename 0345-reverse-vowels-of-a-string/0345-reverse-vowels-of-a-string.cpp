class Solution {
public:

    bool isvowel(char ch) {
    /*if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
        return true ;
    }
    else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
        return true ;
    }*/

    ch = tolower(ch) ;
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
        return true ;
    }

    return false ;

    }

    string reverseVowels(string s) {
        int start = 0 ;
        int end = s.length()-1 ;

        while(start<=end) {
           if((isvowel(s[start])==1) && (isvowel(s[end])==1)) {
                swap(s[start],s[end]) ;
                start++ ;
                end-- ;
           }
           else if(isvowel(s[start])==1) {
                end-- ;
           }
           else {
            start++ ;
           }
        }

        return s ;
    }
};