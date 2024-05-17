class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = nums[0] ;
        for(int i=0 ; i<nums.size() ; i++) {

            //sum calculation
            sum = sum+nums[i] ;

            //maxi updation
            maxi = max(maxi , sum);

            //-ve sum result cancel out and sum again initaialise
            if(sum<0) {
                sum = 0 ;
            }
        }

        return maxi;
    }
};