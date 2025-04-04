class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        // Optimal Approach
        set<vector<int>>st ;
        sort(nums.begin(),nums.end()) ;
        for(int i=0 ; i<nums.size() ; i++){

            // if your current item is similar to previous element
            // so dont need to stay here , hust continue your process
            if(i>0 && nums[i]==nums[i-1]) continue ;

            // create next to sorted pointer
            int j=i+1 ;
            int k=nums.size()-1 ;

            while(j<k){
                int sum = nums[i]+nums[j]+nums[k] ;
                if(sum<0){
                    j++ ;
                }
                else if(sum>0){
                    k-- ;
                }
                else{
                    vector<int>temp = {nums[i],nums[j],nums[k]} ;
                    st.insert(temp) ;
                    j++ ;
                    k-- ;
                    // while(j<k && nums[j] == nums[j-1]) j++ ;
                    // while(j<k && nums[k] == nums[k+1]) k-- ;
                }
            }
        }

        vector<vector<int>>ans ;
        for(auto item:st){
            ans.push_back(item) ;
        }

        return ans ;


        // Better Approach
        // give TLE
        // set<vector<int>>ans ;
        // for(int i=0 ; i<nums.size()-1 ; i++){
        //     // create a searchspace to avoid third inner loop
        //     // this searchspace is initialize for every interval
        //     set<int>searchspace ;

        //     for(int j=i+1 ; j<nums.size() ; j++){
        //         // calculate the third element
        //         int third = -(nums[i]+nums[j]) ;
        //         // search the third element is in the search space or not
        //         if(searchspace.find(third) != searchspace.end()){
        //             //third element is in the search space
        //             vector<int>temp = {nums[i],nums[j],third} ;
        //             sort(temp.begin(),temp.end()) ;
        //             // push the array into the set
        //             ans.insert(temp) ;
        //         }
        //         // take the element which is between that two ponters
        //         // push that into the search space 
        //         searchspace.insert(nums[j]) ;
        //     }
        // }
        // vector<vector<int>>res ;
        // for(auto item:ans){
        //     res.push_back(item) ;
        // }
        // return res ;
    }
};