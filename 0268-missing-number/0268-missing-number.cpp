class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size() ;
        int xor1 = 0 ;
        int xor2 = 0 ;

        for(int i=0 ; i<=n ; i++){

            xor1 = xor1 ^ i ;
            if(i<=n-1){
                xor2 = xor2 ^ nums[i] ;
            }
        }

        int missingelement = xor1^xor2 ;

        return missingelement ;
    }
};