class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        // int n = nums.size() ;
        // map<int,int>mpp ;
        // vector<int>list ;

        
        // for(int i=0 ; i<n ; i++){
        //     mpp[nums[i]]++ ;

        //     if(mpp[nums[i]]>n/3){
        //         list.push_back(nums[i]) ;
        //     }

        //     if(list.size() == ceil(n/3)){
        //         break ;
        //     }

        // }

        // return list ;





        int n = nums.size() ;
        vector<int>list ; 
        
        for(int i=0 ; i<n ; i++){
        
            // check your current item is in the list or not
            bool found = false ;
            for(auto item : list){
                if(item == nums[i]){
                    found = true ;
                    break ;
                }
            }

            int count = 0 ;

            // if youur current item present in list so leave it
            // if not present in the list so then you find the item in array 
            if(!found){
                for(int j=0 ; j<n ; j++){
                    // if your item is match then count
                    if(nums[j] == nums[i]){
                       count++ ;
                    }
                }

            // if your current item appearance more than n/3 , then push it into list
                if(count>n/3){
                    list.push_back(nums[i]) ;
                }

                // if your list already have 2 element so nothing to insert leave it
                if(list.size()== ceil(2)){
                    break ;
                }
            }
        }
        return list ;
    }
};