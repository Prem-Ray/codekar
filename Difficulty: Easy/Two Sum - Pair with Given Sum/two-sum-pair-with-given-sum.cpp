class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        int left=0 ;
        int right = arr.size()-1 ;
        
        sort(arr.begin(),arr.end()) ;
        
        while(left<right){
            if(arr[left]+arr[right]<target){
                left++ ;
            }else if(arr[left]+arr[right]>target){
                right-- ;
            }else{
                return true ;
            }
        }
        return false ;
    }
};