class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int num1 = -1 ;
        int num2 = -1 ;
        map<int,int>mpp ;
        
        for(int i=0 ; i<nums.size() ; i++){
            mpp[nums[i]]++ ;
        }

        vector<int>arr ;

        for(auto it : mpp){
            if(it.second == 1){
                arr.push_back(it.first) ;
            }
        }
        return arr ;
    }
};