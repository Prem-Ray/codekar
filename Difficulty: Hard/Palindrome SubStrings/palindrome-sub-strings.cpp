class Solution {
  public:
  
    int checkpalindrome(string s, int i, int j){
        int count=0 ;
        while(i>=0 && j<s.size() && s[i]==s[j]){
            if(i!=j) count++ ;  
            i-- ;
            j++ ;
        }
        return count ;
    }
    
    int countPS(string &s) {
        // code here
        int count=0 ;
        
        for(int i=0 ; i<s.size() ; i++){
            int count1 = checkpalindrome(s,i,i) ;
            // if(count1>=2){
                count+=count1 ;
            // }
            
            int count2 = checkpalindrome(s,i,i+1) ;
            // if(count2>=2){
                count+=count2 ;
            //}
        }
        return count ;
    }
};