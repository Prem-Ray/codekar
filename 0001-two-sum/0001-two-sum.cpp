class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    
        map<int,int>mp ;
        
        for(int i=0 ; i<nums.size() ; i++){
            int num = nums[i] ;
            int partnernum = target - num ;
            if(mp.find(partnernum) != mp.end()){
                return {mp[partnernum],i} ;
            }
            mp[num] = i ;
        }
        return {-1,-1} ;

    }
};