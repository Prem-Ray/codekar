class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        sort(s.begin(),s.end()) ;
        
        int char_freq = 0 ;
        int max_freq = 0 ;
        char ans = s[0] ;
        for(int i=0 ; i<s.size() ; i++){
            if(s[i] == s[i-1]){
                char_freq++ ;
            }else{
                char_freq = 1 ;
            }
            
            if(char_freq > max_freq){
                max_freq = char_freq ;
                ans = s[i] ;
            }
        }
        return ans ;
    }
};