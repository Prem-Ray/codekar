class Solution {
  public:
    void fxn(vector<int>&arr,int i){
        if(i==arr.size()/2) return ;
        swap(arr[i],arr[arr.size()-i-1]) ;
        fxn(arr,i+1) ;
    }
    void reverseArray(vector<int> &arr) {
        // code here
        int i=0 ;
        fxn(arr,i) ;
    }
};