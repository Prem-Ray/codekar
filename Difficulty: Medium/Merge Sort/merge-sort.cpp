class Solution {
  public:
  
    void merge(vector<int>&arr, int l , int mid , int r){
        
        // first array from low to mid 
        int left = l ;
        // second array from mid+1 to high 
        int right = mid+1 ;
        
        // take a temporary array to store the sorted elements
        vector<int>temp ;
        
        // compare the elements and push in temp array
        while(left<=mid && right<=r){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]) ;
                left++ ;
            }else{
                temp.push_back(arr[right]) ;
                right++ ;
            }
        }
        
        // only left array elements are present 
        while(left<=mid){
            temp.push_back(arr[left]) ;
            left++ ;
        }
        
        // only right array elements are present 
        while(right<=r){
            temp.push_back(arr[right]) ;
            right++ ;
        }
        
        // inserting all the elements from temp array to m=original array
        for(int i=l ; i<=r ; i++){
            arr[i] = temp[i-l] ;
        }
    }
    
    void mergeSort(vector<int>& arr, int l, int r) {
        // base case
        if(l>=r) return ;
        // calcualte the mid
        int mid = (l+r)/2 ; 
        // divide the array from low to mid 
        mergeSort(arr,l,mid) ;
        // divide the array from mid+1 to high
        mergeSort(arr,mid+1,r) ;
        // merge and sort the array 
        merge(arr,l,mid,r) ;
    }
};