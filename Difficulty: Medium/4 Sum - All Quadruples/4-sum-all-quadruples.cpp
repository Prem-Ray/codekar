class Solution {
  public:
    vector<vector<int>> fourSum(vector<int> &arr, int target) {
        // code here
        
        vector<vector<int>>ans ;
        
        sort(arr.begin(),arr.end()) ;
        
        for(int i=0 ; i<arr.size() ; i++){
            
            if(i>0 && arr[i] == arr[i-1]) continue ;
            
            for(int j=i+1 ; j<arr.size() ; j++){
                
                if(j>i+1 && arr[j] == arr[j-1]) continue ;
                
                int start=j+1 ;
                int end=arr.size()-1 ;
                
                while(start < end){
                    
                    long long sum = 0 ;
                    
                    sum += arr[i] ;
                    sum += arr[j] ;
                    sum += arr[start] ;
                    sum += arr[end] ;
                    
                    if(sum == target){
                        vector<int>temp = {arr[i],arr[j],arr[start],arr[end]} ;
                        ans.push_back(temp) ;
                        start++ ;
                        end-- ;
                        while(start<end && arr[start] == arr[start-1]) start++ ;
                        while(start<end && arr[end] == arr[end+1]) end-- ;
                
                    }else if(sum < target){
                        start++ ;
                    }else{
                        end-- ;
                    }
                    
                    }
            }
        }
        
        return ans ;
    }
};