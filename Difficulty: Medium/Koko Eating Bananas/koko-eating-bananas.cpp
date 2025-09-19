class Solution {
  public:
    
    long long findTotalHour(vector<int>& arr , int banana){
        long long totalHour = 0 ;
        
        for(int i=0 ; i<arr.size() ; i++){
            long long hour = (arr[i]+banana-1LL)/banana ;
            totalHour += hour ;
        }
        return totalHour ;
    }
    
    int maxelement(vector<int>& arr){
        int maxi = INT_MIN ;
        
        for(int i=0 ; i<arr.size() ; i++){
            maxi = max(arr[i],maxi) ;
        }
        
        return maxi ;
    }
    
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int start = 1 ;
        int end = maxelement(arr) ;
        
        
        while(start <= end){
            int mid = start+(end-start)/2 ;
            
            long long hour =  findTotalHour(arr,mid) ;
            
            if(hour <= k){
                end = mid-1 ;
            }else{
                start = mid+1 ;
            }
        }
        
        return start ;
    }
};