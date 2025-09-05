class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // Code here
        int count1=0 ;
        int element1=0 ;
        
        int count2=0 ;
        int element2=0 ;
        
        vector<int>ans ;
        
        for(int i=0 ; i<arr.size() ; i++){
            if(count1==0 && arr[i]!=element2){
                count1=1 ;
                element1=arr[i] ;
            }else if(count2==0 && arr[i]!=element1){
                count2=1 ;
                element2=arr[i] ;
            }else if(arr[i] == element1){
                count1++ ;
            }else if(arr[i] == element2){
                count2++ ;
            }else{
                count1-- ;
                count2-- ;
            }
        }
        
        int c1=0 ;
        int c2=0 ;
        for(int i=0 ; i<arr.size() ; i++){
            if(arr[i] == element1) c1++ ;
            if(arr[i] == element2) c2++ ;
        }
        
        if(c1 > arr.size()/3)ans.push_back(element1) ;
        if(c2 > arr.size()/3)ans.push_back(element2) ;
        
        sort(ans.begin(),ans.end()) ;
        
        return ans ;
    }
};