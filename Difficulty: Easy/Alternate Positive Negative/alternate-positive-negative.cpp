// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int>pos ;
        vector<int>neg ;
        
        for(int i=0 ; i<arr.size() ; i++){
            if(arr[i] >= 0){
                pos.push_back(arr[i]) ;
            }else{
                neg.push_back(arr[i]) ;
            }
        }
        
        
        int posIndex=0 ;
        int negIndex=0 ;
        int i=0 ;
        
        while(posIndex<pos.size() && negIndex<neg.size()){
            arr[2*i]=pos[posIndex] ;
            arr[2*i+1]=neg[negIndex] ;
            i++ ;
            posIndex++ ;
            negIndex++ ;
        }
        
        int index=2*posIndex ;
        while(posIndex<pos.size()){
            arr[index]=pos[posIndex] ;
            index++ ;
            posIndex++ ;
        }
        
        while(negIndex<neg.size()){
            arr[index]=neg[negIndex] ;
            index++ ;
            negIndex++ ;
        }
        
    }
};