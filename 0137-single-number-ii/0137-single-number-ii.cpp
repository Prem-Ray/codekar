class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int n=nums.size() ;
        map<int,int>mpp ;
        int num = -1 ;

        for(int i=0 ; i<n ; i++){
            mpp[nums[i]]++ ;
        }

        for(auto it : mpp){
            if(it.second == 1){
                num = it.first ;
                break ;
            }
        }
        return num ;
    }
};