class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
        // Your code here
        for(int i=arr.size()-1 ; i>=0 ; i--){
            int isSwap = 0 ;
            for(int j=0 ; j<i ; j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]) ;
                    isSwap = 1 ;
                }
            }
            if(isSwap == 0){
                break ;
            }
        }
    }
};