class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp ;
        vector<int>arr ;
        for(int i=0 ; i<nums.size() ; i++){
            int a=nums[i] ;
            int more=target-a ;

            if(mpp.find(more) != mpp.end()){
                arr.push_back(mpp[more]) ;
                arr.push_back(i) ;
                break ;
            }

            mpp[a]=i ;
        }
        return arr ;
    }
};