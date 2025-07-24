class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int element=0 ;
        int count=0 ;
        
        if(arr.size()==0) return -1 ;
        if(arr.size()==1) return arr[0] ;
        
        for(int i=0 ; i<arr.size() ; i++){
            if(count==0){
                element=arr[i] ;
                count++ ;
            }else if(arr[i]==element){
                count++ ;
            }else{
                count-- ;
            }
        }
        
        if(count==0) return -1 ;
        
        int counter=0 ;
        for(int i=0 ; i<arr.size() ; i++){
            if(arr[i]==element) counter++ ;
            if(counter>(arr.size())/2) return element ;
        }
        
        return -1 ;
        
    }
};