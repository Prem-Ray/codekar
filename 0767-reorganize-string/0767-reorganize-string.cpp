class Solution {
public:
    string reorganizeString(string s) {

      /*  int hash[26] = {0} ;

        for(int i=0 ; i<s.size() ; i++) {
            hash[s[i]-'a']++ ;
        }

        //find the most occurent character 
        int max_freq = INT_MIN ;
        char max_chr ;
        for(int i=0 ; i<26 ; i++) {
            if(hash[i]>max_freq) {
                max_freq = hash[i] ;
                max_chr = i+'a' ;
            }
        }

        int index = 0 ;
        while(max_freq>0 && index<s.size()) {
           
                s[index] = max_chr ;
                max_freq--;
                index+=2 ;
            
        }

        if(max_freq != 0) {
            return  "";
        }

        hash[max_chr - 'a'] = 0 ; // for not placing again 

        // for rest of the character placing  
        for(int i=0 ; i<26 ; i++) {
            while(hash[i]>0){
                index = index>=s.size() ? 1 : index ;
                s[index]='a'+i;
                hash[i]-- ;
                index+=2 ;
            }
        }

        return s ; */


        int hash[26] = {0} ;

        //counting 
        for(int i=0 ; i<s.size() ; i++) {
            hash[s[i]-'a']++ ;
        }

        //max chr and max freq finding 
        int max_freq = INT_MIN;
        char max_chr ; 
        for(int i=0 ; i<26 ; i++) {
            if(hash[i] > max_freq) {
                max_freq = hash[i] ;
                max_chr = i+'a' ;
            }
        }

        //replacing maxchar in one go into the string
        int index = 0 ;
        while(index<s.size() && max_freq>0) {
            s[index] = max_chr ;
            max_freq-- ;
            index+=2 ;
        }

        if(max_freq != 0) {
            return "" ;
        }

        //rest fo character replacing into the string
        hash[max_chr - 'a'] = 0 ;
        for(int i=0 ; i<26 ; i++) {
            while(hash[i]>0) {
               // index = index>=s.size() ? 1 : index ;
               if(index>=s.size()) {
                index = 1 ;
               }
                s[index] = i+'a' ;
                hash[i]--;
                index+=2 ;
            }
        }

        return s ;

        


    }
};