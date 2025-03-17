class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0 ;
        int n = nums.size() ;
        int maxcount = -1 ;

        for(int i=0 ; i<=n-1 ; i++){
            
            if(nums[i] == 1){
                count++ ;
            }
            else{
                count = 0 ;
            }
            maxcount = max(maxcount,count) ; 
        }

        return maxcount ;
        
    }
};