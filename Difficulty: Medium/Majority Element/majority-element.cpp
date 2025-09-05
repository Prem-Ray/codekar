class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int count=0 ;
        int element=-1 ;
        
        int n=arr.size() ;
        
        for(int i=0 ; i<n ; i++){
            if(count == 0){
                element = arr[i] ;
                count=1 ;
            }else if(arr[i] == element){
                count++ ;
            }else{
                count-- ;
            }
        }
        
        int countmajority=0 ;
        
        for(int i=0 ; i<n ; i++){
            if(arr[i] == element){
                countmajority++ ;
            }
        }
        
        if(countmajority > n/2) return element ;
        
        return -1 ;
        
    }
};