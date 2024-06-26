class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        vector<int>temp(nums.size());
        for(int i=0;i<nums.size();i++) {
            temp[(i+k)%n] = nums[i];
        }
        //element copy from temp vector 
        nums = temp ;
    }
};