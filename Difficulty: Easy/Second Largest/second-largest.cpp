class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end()) ;
        int maxElem = arr[arr.size()-1] ;
        int secondMax = -1 ;
        for(int i=arr.size()-2 ; i>=0 ; i--){
            if(arr[i]<maxElem){
                secondMax = arr[i] ;
                break ;
            }
        }
        return secondMax ;
    }
};