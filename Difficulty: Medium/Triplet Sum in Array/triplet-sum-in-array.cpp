class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        sort(arr.begin(),arr.end()) ;
        
        for(int i=0 ; i<arr.size()-2 ; i++){
            
            if(i>0 && arr[i]==arr[i-1]) continue ;
            
            int j = i+1 ;
            int k = arr.size()-1 ;
            
            while(j<k){
                int sum = arr[i]+arr[j]+arr[k] ;
                if(sum < target){
                    j++ ;
                }else if(sum > target){
                    k-- ;
                }else{
                    return true ;
                    j++ ;
                    k-- ;
                    
                    while(j<k && arr[j] == arr[j-1]) j++ ;
                    while(j<k && arr[k] == arr[k+1]) k-- ;
                }
            }
            
        }
        
        return false ;
        
    }
};