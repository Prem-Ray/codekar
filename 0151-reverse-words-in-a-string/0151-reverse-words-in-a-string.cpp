class Solution {
public:
    string reverseWords(string s) {

        stringstream str(s) ;
        vector<string>arr ;

        string word ;
        while(str>>word){
            arr.push_back(word) ;
        }

        reverse(arr.begin(),arr.end()) ;

        string temp ;

        for(int i=0 ; i<arr.size() ; i++){
            temp += arr[i] ;
            if(i<arr.size()-1){
                temp += " " ;
            }
        }
        return temp ;
    }
};