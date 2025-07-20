class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        
        // return vector with correct order of elements
        
        // take an union array
        vector<int>unionArray  ;
        
        int i=0 ;
        int j=0 ;
        
        int n1 = a.size() ;
        int n2 = b.size() ;
        
        while(i<n1 && j<n2){
            if(a[i]<=b[j]){
                if(unionArray.size()==0 || unionArray.back()!=a[i]){
                    unionArray.push_back(a[i]) ;
                }
                i++ ;
            }else{
                if(unionArray.size()==0 || unionArray.back()!=b[j]){
                    unionArray.push_back(b[j]) ;
                }
                j++ ;
            }
        }
        
        
        while(i<n1){
            if(unionArray.size()==0 || unionArray.back()!=a[i]){
                unionArray.push_back(a[i]) ;
            }
            i++ ;
        }
        
        while(j<n2){
             if(unionArray.size()==0 || unionArray.back()!=b[j]){
                    unionArray.push_back(b[j]) ;
                }
                j++ ;
        }
        
        return unionArray ;
    }
};