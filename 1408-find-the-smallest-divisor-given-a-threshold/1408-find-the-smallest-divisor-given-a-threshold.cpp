class Solution {
public:

    bool checkPosibilty(vector<int>& arr, int num, int threshold){
        long long sum = 0 ;

        for(int i=0 ; i<arr.size() ; i++){
            long long value = (arr[i]+num-1LL)/num ;
            sum += value ;
        }

        if(sum <= threshold) return true ;

        return false ;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi = INT_MIN ;

        for(int i=0 ; i<nums.size() ; i++){
            maxi = max(maxi,nums[i]) ;
        }

        int start = 1 ;
        int end = maxi ;
        int ans = 1 ;

        while(start <= end){
            int mid = start+(end-start)/2 ;

            if(checkPosibilty(nums,mid,threshold) == true){
                ans = mid ;
                end = mid-1 ;
            }else{
                start = mid+1 ;
            }
        }

        return ans ;
    }
};