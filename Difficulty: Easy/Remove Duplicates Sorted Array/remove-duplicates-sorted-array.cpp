class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int i=0 ; 
        for(int j=1 ; j<arr.size() ; j++){
            if(arr[i] != arr[j]){
                arr[i+1] = arr[j] ;
                i++ ;
            }
        }
        i += 1 ;
        vector<int>v ;
        for(int j=0 ; j<i ; j++){
            v.push_back(arr[j]) ;
        }
        return v ;
    }
};