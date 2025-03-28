class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count = 0 ;
        int maxlength = 1 ;

        // if your array is empty
        if(nums.size() == 0){
            return 0 ;
        }

        // all array elements push into the set
        unordered_set<int>st ;
        for(int i=0 ; i<nums.size() ; i++){
            st.insert(nums[i]) ;
        }

        for(auto i:st){
            // check if you element is starter or not
            // if previous element is present in set so this is not starter
            int prev = i-1 ;
            // if previous not present
            if(st.find(prev) == st.end()){
                // this is starter
                count = 1 ;
                // so check the later consecutive element
                int nextelement =i+1 ;
                while(st.find(nextelement) != st.end()){
                    //next consecutive element is present in there
                    count++ ;
                    // update the nextelement with next consecutive value 
                    nextelement += 1 ;
                }
            }
            // update if this length is your maxlength
            maxlength = max(maxlength,count) ;
        }
        return maxlength ;
    }
};