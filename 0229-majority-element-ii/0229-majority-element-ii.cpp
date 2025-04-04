class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        // Optimal Approach
        int count1 = 0 ;
        int count2 = 0 ;

        int el1 = INT_MIN ;
        int el2 = INT_MIN ;

        int n = nums.size() ;

        for(int i=0 ; i<n ; i++){
            if(count1==0 && nums[i]!=el2){
                count1 = 1 ;
                el1 = nums[i] ;
            }
            else if(count2==0 && nums[i]!=el1){
                count2 = 1 ;
                el2 = nums[i] ;
            }
            else if(el1 == nums[i]){
                count1++ ;
            }
            else if(el2 == nums[i]){
                count2++ ;
            }
            else{
                count1-- ;
                count2-- ;
            }
        }

        vector<int>list ;
        count1 = 0 ;
        count2 = 0 ;
       
        int mini = int((n/3))+1 ;
        for(int i=0 ; i<n ; i++){
            if(nums[i]==el1) count1++ ;
            if(nums[i]==el2) count2++ ;
        }

        if(count1 >= mini) list.push_back(el1) ;
        if(count2 >= mini) list.push_back(el2) ;

       return list ;

        // Better Approach

        // int n = nums.size() ;
        // map<int,int>mpp ;
        // vector<int>list ;

        // // we know major element occurence is greater than n/3 
        // // so we can say major element occurs minimum (n/3)+1 times
        // int mini = (n/3)+1 ;

        // for(int i=0 ; i<n ; i++){
            
        //     mpp[nums[i]]++ ;

        //     if(mpp[nums[i]] == mini){
        //         list.push_back(nums[i]) ;
        //     }

        //     if(list.size() == 2){
        //         break ;
        //     }

        // }

        // return list ;


        // Brute Force Approach
        
        // int n = nums.size() ;
        // vector<int>list ; 
        
        // for(int i=0 ; i<n ; i++){
        
        //     // check your current item is in the list or not
        //     bool found = false ;
        //     for(auto item : list){
        //         if(item == nums[i]){
        //             found = true ;
        //             break ;
        //         }
        //     }

        //     int count = 0 ;

        //     // if youur current item present in list so leave it
        //     // if not present in the list so then you find the item in array 
        //     if(!found){
        //         for(int j=0 ; j<n ; j++){
        //             // if your item is match then count
        //             if(nums[j] == nums[i]){
        //                count++ ;
        //             }
        //         }

        //     // if your current item appearance more than n/3 , then push it into list
        //         if(count>n/3){
        //             list.push_back(nums[i]) ;
        //         }

        //         // if your list already have 2 element so nothing to insert leave it
        //         if(list.size()== ceil(2)){
        //             break ;
        //         }
        //     }
        // }
        // return list ;
    }
};