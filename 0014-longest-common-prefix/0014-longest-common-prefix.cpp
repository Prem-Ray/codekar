class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans ;
        char curr_ch = 0 ;
        int i = 0 ;  
        while(true) {
            for(auto str : strs) {

                if(i>=str.size()) {
                    curr_ch = 0 ;
                    break ;
                }

                if(curr_ch == 0) {
                    curr_ch = str[i] ;
                }

                else if(curr_ch == str[i]) {
                    continue ;
                }

                else {
                    curr_ch = 0 ;
                    break ;
                }
            }

            if(curr_ch == 0) {
                break ;
            }

            ans.push_back(curr_ch) ;
            curr_ch = 0 ;
            i++ ;

        }
        return ans ;
    }
};