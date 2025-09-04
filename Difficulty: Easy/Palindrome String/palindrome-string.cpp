class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
       int start = 0 ;
       int end = s.size()-1 ;
       
       while(start<end){
        //   this condition match means this is not palindrome
           if(s[start] != s[end]) return false ;
           
            //   if items match 
            start++ ;
            end-- ;
       }
       
       return true ;
    }
};