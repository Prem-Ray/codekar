class Solution {
public:

    // bool isaphabet(char ch) {
    //     if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)) {
    //         return true ;
    //     }
    //     else {
    //         return false ;
    //     }
    // }
 
    string reverseOnlyLetters(string s) {

        int start = 0 ;
        int end = s.length()-1 ;

       while(start<end) {
        
        if(isalpha(s[start]) && isalpha(s[end]) ) {
            //ch is alphabet
            //swap
            swap(s[start],s[end]) ;
            //starting and ending index updation 
            start++ ;
            end-- ;
        }

        else if(!isalpha(s[start])){
                //start ch is not alphabet 
                //starting index updation
                start++ ;
            }


            else {
                //end ch is no alphabet
                //ending index updation
                end-- ;
            }

        }
    
        return s ;
    }
};