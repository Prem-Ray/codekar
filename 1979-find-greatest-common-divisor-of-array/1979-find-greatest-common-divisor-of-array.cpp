class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi = INT_MIN ;
        int mini = INT_MAX ;

        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i] > maxi) maxi = nums[i] ;
            if(nums[i] < mini) mini = nums[i] ;
        }

       
        while(maxi!=0 && mini!=0){
            if(maxi>mini) maxi = maxi%mini ;
            else mini = mini%maxi ;
        }

        if(maxi==0) return mini ;
        return maxi ;
    }
};