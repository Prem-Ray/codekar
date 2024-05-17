class Solution {
public:

    void remvelmnt(string&s , string&part , int&pos) {
        
        //base case 
        if(pos == string::npos) {
            return ;
        }

        //ek case solve karo 
        pos = s.find(part) ;
        if(pos != string::npos) {
          //  s.erase(pos , part.length()) ;
          string left_side = s.substr(0 , pos) ;
          string right_side = s.substr(pos+part.size() , s.size()) ;

          s = left_side + right_side ;
          
        }

        

        //recursion call karo 
        remvelmnt(s,part,pos) ;

    }

    string removeOccurrences(string s, string part) {

    /*    //findout the substring part
        int pos = s.find(part) ;
        //as long as we can find the subdtring part until then the loop  is continue
       // while(pos!=string::npos) {
        while(pos<s.size()) {
            //erase the substring part from the main string
            s.erase(pos,part.length()) ;
            //update the position of the substring part 
            pos = s.find(part) ; */
        int pos = s.find(part) ;
        remvelmnt(s,part,pos) ;

        
        return s ;
    }
};