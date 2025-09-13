// User function Template for C++
class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        // code here
        int index = -1 ;
        int start = 0 ;
        int end = arr.size()-1 ;
        
        while(start <= end){
            
            int mid = start+(end-start)/2 ;
            
            if(arr[mid] >= x){
                index = mid ;
                end = mid-1 ;
            }
            else{
                start = mid+1 ;
            }
        }
        return index ;
    }
};