class Solution {
public:

    int firstoccurence(vector<int>& nums, int target){
        
        int index = -1 ;

        int start = 0;
        int end = nums.size()-1 ;

        while(start <= end){

            int mid = start+(end-start)/2 ;

            if(nums[mid] == target){
                index = mid ;
                end = mid-1 ;
            }
            else if(nums[mid] < target){
                start = mid+1 ;
            }
            else{
                end = mid-1 ;
            }
        }
        return index ;

    }

    int secondoccurence(vector<int>& nums, int target){
        
        int index = -1 ;
        
        int start = 0;
        int end = nums.size()-1 ;

        while(start <= end){

            int mid = start+(end-start)/2 ;

            if(nums[mid] == target){
                index = mid ;
                start = mid+1 ;
            }
            else if(nums[mid] < target){
                start = mid+1 ;
            }
            else{
                end = mid-1 ;
            }
        }
        return index ;

    }

    vector<int> searchRange(vector<int>& nums, int target) {
       
        int firstoccur = firstoccurence(nums,target) ;
        int lastoccur =  secondoccurence(nums,target) ;

        vector<int> ans ;
        ans.push_back(firstoccur) ;
        ans.push_back(lastoccur) ;

        return ans ;
    }
};