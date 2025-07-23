class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int maximum = 0 ;
        int count1 = 0 ;
        
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]==0){
                count1 = 0 ;
            }else{
                count1++ ;
                maximum = max(maximum,count1) ;
            }
        }
        return maximum ;
    }
};