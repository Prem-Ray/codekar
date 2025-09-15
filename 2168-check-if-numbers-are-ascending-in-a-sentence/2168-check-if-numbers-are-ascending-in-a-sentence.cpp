class Solution {
public:
    bool areNumbersAscending(string s) {
        istringstream str(s) ;
        string token ;
        int prev=-1 ;
        while(str>>token){
            if(isdigit(token[0])){
                int current = stoi(token) ;
                if(current <= prev) return false ;
                prev = current ;
            }
        }
        return true ;
    }
};