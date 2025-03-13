class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int uniqindex = 0 ;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i] != nums[uniqindex]){
                nums[uniqindex+1] = nums[i] ;
                uniqindex++ ;
            }
        }
        return  uniqindex+1;
    }
};