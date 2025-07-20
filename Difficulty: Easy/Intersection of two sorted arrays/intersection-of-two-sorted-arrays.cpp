class Solution {
  public:
    // Function to return a list containing the intersection of two arrays.
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        // Your code here
        int n1 = arr1.size() ;
        int n2 = arr2.size() ;
        
        int i=0 ;
        int j=0 ;
        
        vector<int>arr ;
        
        while(i<n1 && j<n2){
            if(arr1[i] == arr2[j]){
                if(arr.size()==0 || arr.back()!=arr1[i]){
                    arr.push_back(arr1[i]) ;
                }
                i++ ;
                j++ ;
            }else if(arr1[i]<arr2[j]){
                i++ ;
            }else {
                j++ ;
            }
        }
        
        return arr ;
        
    }
};