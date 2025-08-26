class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int pivot = -1 ;
        int totalSum = 0 ;

        //total sum calculation 
        for(int i=0 ; i<nums.size() ; i++){
            totalSum += nums[i] ;
        }

        // prefix sum calculation and check pivot index
        if(nums[0] == totalSum) return 0 ;
        for(int i=1 ; i<nums.size() ; i++){
            nums[i] = nums[i-1]+nums[i] ;
            cout<<nums[i]<<" " ;
            int suffixSum = totalSum-nums[i] ;
            int prefixSum = nums[i-1] ;
            if(prefixSum == suffixSum) return i ;
        }
        return pivot ;
    }
};