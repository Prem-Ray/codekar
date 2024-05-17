class Solution {
public:
    int findDuplicate(vector<int>& nums) {


//negative marketing method
    //     int ans=-1;

    //     for(int i=0;i<nums.size();i++) {
    //          int index=abs(nums[i]);
    //         if(nums[index]<0) {
    //             ans=index;
    //             break;
    //         }

    //         nums[index] *= -1;
    //     }
    //     return ans;

    // }

    //positioning method
    int i=0;
    while(nums[i] != nums[nums[i]]) {
        swap(nums[i],nums[nums[i]]);
    }

    return nums[i];
    }

};