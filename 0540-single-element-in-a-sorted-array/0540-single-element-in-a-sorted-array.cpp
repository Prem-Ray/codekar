class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int n=nums.size() ;

        // if only one element
        if(n == 1) return nums[0] ;

        // if your first element is your unique element
        if(nums[0] != nums[1]) return nums[0] ;

        // if your last element is the unique element
        if(nums[n-1] != nums[n-2]) return nums[n-1] ;

        int start=0 ;
        int end=nums.size()-1 ;

        while(start <= end){

            int mid = start+(end-start)/2 ;

            // we found the unique element
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
                return nums[mid] ;
            }
            // stand on left part
            else if((mid%2==1 && nums[mid]==nums[mid-1]) || (mid%2==0 && nums[mid]==nums[mid+1])){
                start = mid+1 ;
            }
            // stand on right part
            else{
                end = mid-1 ;
            }
        }
        return -1 ;
    }
};