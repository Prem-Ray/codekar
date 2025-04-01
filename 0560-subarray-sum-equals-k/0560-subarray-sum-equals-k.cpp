class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp ;
        // initialize the map with assuming there have a prefix sum 0 with it's occurence 1
        mpp[0] = 1 ;

        int prefixsum = 0 ;
        int count = 0 ;

        for(int i=0 ; i<nums.size() ; i++){
            // calculate the prefix sum
            prefixsum += nums[i] ;
            // calculate the remaining sum
            int remaining = prefixsum-k ;
            // if remaining not exists so it's value is 0 , if exists take it's value    and add with count to get the total occurences
            count += mpp[remaining] ;
            // update the prefix sum with incrementing ocuurence in the map
            mpp[prefixsum] +=1 ;
        }
        return count ;
    }
};