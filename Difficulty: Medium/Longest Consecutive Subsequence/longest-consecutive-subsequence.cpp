class Solution {
  public:
    #include<bits/stdc++.h>
    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        
        if(arr.size()==0) return 0 ;
        int maxlength=1 ;
        
        unordered_set<int>st ;
        for(int i=0 ; i<arr.size() ; i++){
            st.insert(arr[i]) ;
        }
        
        
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int count=1 ;
                int nextitem=it+1 ;
                while(st.find(nextitem)!=st.end()){
                    count++ ;
                    nextitem++ ;
                }
                maxlength=max(maxlength,count) ;
            }
        }
        
         return maxlength ;
    }
};