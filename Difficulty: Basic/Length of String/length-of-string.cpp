// User function Template for C++

class Solution {
  public:
    int lengthString(string &s) {
        int size=0 ;
        int i=0 ;
        
        while(s[i]!='\0'){
            size++ ;
            i++ ;
        }
        return size ;
    }
};