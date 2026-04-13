class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mpp ;
        for(auto it:nums){
            mpp[it]++ ;
        }

        if(mpp.size()==nums.size()) return nums.size() ;

        int maxi=0 ;
        for(auto it:mpp){
            if(it.second > maxi){
                maxi = it.second ;
            }
        }

        int sum=0 ;
        for(auto it:mpp){
            if(it.second == maxi){
                sum += it.second ;
            }
        }
        return sum ;
    }
};