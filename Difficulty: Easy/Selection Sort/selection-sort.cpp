class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        for(int i=0 ; i<=arr.size()-2 ; i++){
            // consider current index is the min index
            int min = i ;
            // serch the min item from current position to last index
            for(int j=i ; j<=arr.size()-1 ; j++){
                if(arr[j]<arr[min]){
                    // this is your min item 
                    min = j ;
                }
            }
            // swap the min item with the current item
            swap(arr[i],arr[min]) ;
        }
    }
};