class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int maximum = 0 ;
        int count0 = 0 ;
        int count1 = 0 ;
        
        for(int i=0 ; i<arr.size() ; i++){
            if(arr[i]==0){
                count1 = 0 ;
                count0++ ;
                maximum = max(maximum,count0) ;
            }else{
                count0 = 0 ;
                count1++ ;
                maximum = max(maximum,count1) ;
            }
        }
        return maximum ;
    }
};