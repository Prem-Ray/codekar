class Solution {
public:

    void reversethepart(vector<int>&nums, int start,int end){
        while(start<end){
            swap(nums[start],nums[end]) ;
            start++ ;
            end-- ;
        }
    }

    bool check(vector<int>& nums) {

        // vector<int>arr(nums) ;
        // sort(arr.begin(),arr.end()) ;

        int count=0 ;
        for(int i=0 ; i<nums.size()-1 ; i++){
            if(nums[i] > nums[i+1]){
                count=i+1 ;
            }
        }

        reversethepart(nums,0,count-1) ;
        reversethepart(nums,count,nums.size()-1) ;
        reversethepart(nums,0,nums.size()-1) ;

        // 
        
        for(int i=0 ; i<nums.size()-1 ; i++){
            if(nums[i] > nums[i+1]){
                return false ;
            }
        }

        return true ;
    }
};