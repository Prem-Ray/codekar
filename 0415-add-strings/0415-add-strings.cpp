class Solution {
public:

    void addkaro(string&num1 , int p1 , string&num2 , int p2 , int carry , string&ans) {
        
        //base case
        if(p1<0 && p2<0) {
            if(carry != 0) {
                ans.push_back(carry+'0') ;
            }
            return ;
        } 

        //ek case solve karo
        int a = (p1>=0 ? num1[p1] : '0') - '0' ;
        int b = (p2>=0 ? num2[p2] : '0') - '0' ; ;

        int sum = a + b + carry ;

        int digit = sum % 10 ;
        carry = sum / 10 ;

        ans.push_back(digit+'0') ;
 
        //recursion call karo
        addkaro(num1 , p1-1 , num2 , p2-1 , carry , ans) ;

    }
    string addStrings(string num1, string num2) {

        int p1 = num1.size()-1 ;
        int p2 = num2.size()-1 ;

        int carry = 0 ;
        string ans = "" ;

        addkaro(num1 , p1 , num2 , p2 , carry , ans) ;
        reverse(ans.begin(),ans.end()) ;
        return ans ;

    }
};