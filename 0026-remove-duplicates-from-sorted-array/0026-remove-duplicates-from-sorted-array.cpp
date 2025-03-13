class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // vector<int>arr ;
        int uniqindex = 0 ;
        // arr.push_back(nums[0]) ;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i] != nums[uniqindex]){
                nums[uniqindex+1] = nums[i] ;
                // arr.push_back(nums[i]) ;
                uniqindex++ ;
            }
        }
        return  uniqindex+1;
    }
};