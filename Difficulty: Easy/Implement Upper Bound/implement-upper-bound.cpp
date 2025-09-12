class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        // code here
        int index=arr.size() ;
        
        int start=0 ;
        int end=arr.size()-1 ;
        
        while(start <= end){
            
            int mid=start+(end-start)/2 ;
            
            if(arr[mid] > target){
                index = mid ;
                end = mid-1 ;
            }else if(target < arr[mid]){
                end = mid-1 ;
            }else{
                start = mid+1 ;
            }
        }
        return index ;
    }
};
