class Solution {
  public:
  
    int merge(vector<int> &arr , int low , int mid, int high){
        
        int count=0 ;
        
        int left=low ;
        int right=mid+1 ;
        
        vector<int>temp ;
        
        while(left<=mid && right<=high){
            
            
            if(arr[left] <= arr[right]){
                temp.push_back(arr[left]) ;
                left++ ;
            }else{
                count += (mid-left+1) ;
                temp.push_back(arr[right]) ;
                right++ ;
            }
        }
        
        while(left <= mid){
            temp.push_back(arr[left]) ;
            left++ ;
        }
        
        while(right <= high){
            temp.push_back(arr[right]) ;
            right++ ;
        }
        
        for(int i=low ; i<=high ; i++){
            arr[i] = temp[i-low] ;
        }
        
        return count ;
    }
    
    int mergesort(vector<int> &arr , int low , int high){
        
        int count=0 ;
        
        if(low >= high) return 0;
        
        int mid=(low+high)/2 ;
        
        count += mergesort(arr,low,mid) ;
        count += mergesort(arr,mid+1,high) ;
        count += merge(arr,low,mid,high) ;
        
        return count ;
    }
    
    int inversionCount(vector<int> &arr) {
        // Code Here
        int low=0 ;
        int high=arr.size()-1 ;
        
        return mergesort(arr,low,high) ;
    }
};