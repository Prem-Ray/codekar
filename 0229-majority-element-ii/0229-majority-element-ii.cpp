class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size() ;
        vector<int>list ; 
        int j = 0 ;
        for(int i=0 ; i<n ; i++){
            bool found = false ;
            for(auto item : list){
                if(item == nums[i]){
                    found = true ;
                    break ;
                }
            }

            int count = 0 ;
            if(!found){
                for(int j=0 ; j<n ; j++){
                    if(nums[j] == nums[i]){
                       count++ ;
                    }
                }
                if(count>n/3){
                    list.push_back(nums[i]) ;
                }
                if(list.size()==2){
                    break ;
                }
            }
        }
        return list ;
    }
};