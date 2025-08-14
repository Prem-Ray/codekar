class Solution {
public:
    bool check(string str){
        int count=0 ;
        for(int i=0 ; i<str.size()-1 ; i++){
            if(str[i]!=str[i+1]){
                return false ;
            }
            count++ ;
        }
        if(count==2){
            return true ;
        }
        return false ;
    }

    string largestGoodInteger(string num) {
        string ans="" ;
        int number = -1 ;
        for(int i=0 ; i<num.size()-2 ; i++){
            string newsubstring = num.substr(i,3) ;
            if(check(newsubstring)==true){
                int newnum = stoi(newsubstring) ;
                number = max(number,newnum) ;
            }
        }
        if(number != -1){
            if(number == 0){
                return "000" ;
            }
            ans = to_string(number) ;
        }
        return ans ;
    }
};