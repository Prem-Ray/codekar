class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
    
    int start=0 ;
    int end=nums.size()-1 ;
    int mid;
    int ans ;
  
    while(start<=end) {
    
        mid=start+(end-start)/2 ;

        if(start==end) {
            return nums[start] ;
        }

        else if(mid%2==0) {
            if(nums[mid]==nums[mid+1]) {
                start=mid+2 ;
            }
            else {
                ans=nums[mid] ;
                end=mid ;
            }
        }
        else  {
            if(nums[mid]==nums[mid+1]) {
                end=mid-1 ;
            }
            else {
                start=mid+1 ;
            }
        }
    }
     return ans ;
    }
};