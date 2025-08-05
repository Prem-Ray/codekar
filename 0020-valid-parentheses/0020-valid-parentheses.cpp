class Solution {
public:
    bool isValid(string s) {
        stack<char>stk ;
        for(int i=0 ; i<s.size() ; i++){
            // for opening tag
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                stk.push(s[i]) ;
            }else{
                // for closing tag
                if(stk.empty()){
                    return false ;
                }
                char top = stk.top() ;
                if((s[i]==')' && top=='(') || (s[i]=='}' && top=='{') || (s[i]==']' && top=='[')){
                    stk.pop() ;
                }else{
                    return false ;
                }
            }
        }
        if(!stk.empty()){
            return false ;
        }
        return true ;
    }
};