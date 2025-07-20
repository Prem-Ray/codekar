// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n = arr.size() ;
        int zeroIndex = -1 ;
        
        //searh your first zero position
        for(int i=0 ; i<n ; i++){
            //if you find out first zero index then update zeroIndex and break the loop
            if(arr[i]==0){
                zeroIndex = i ;
                break ;
            }
        }
        

       // if your array donesn't contain any zeros then zeroIndex remains -1 
      // in that case do not any operation
       if(zeroIndex != -1){
                // traverse after the zeroIndex and using swapping move zero at the end
            for(int i=zeroIndex+1 ; i<n ; i++){
                // if non-zero no present in you current index , then only swap and increment zeroIndex
                if(arr[i] != 0){
                    swap(arr[zeroIndex],arr[i]) ;
                    zeroIndex++ ;
                }
            }
       }
    }
};