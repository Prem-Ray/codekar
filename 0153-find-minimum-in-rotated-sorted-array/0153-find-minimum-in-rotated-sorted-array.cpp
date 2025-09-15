class Solution {
public:
    int findMin(vector<int>& nums) {

        int ans = INT_MAX ;

        int start = 0 ;
        int end = nums.size()-1 ;

        while(start <= end){
            
            int mid = start+(end-start)/2 ;

            if(nums[start] <= nums[mid]){
                // left part is sorted
                ans = min(ans,nums[start]) ;
                start = mid+1 ;
            }else{
                // right part is sorted
                ans = min(ans,nums[mid]) ;
                end = mid-1 ;
            }
        }
        return ans ;
    }
};