// User function template for C++

// Function to return the count of the number of elements in
// the intersection of two arrays.

class Solution {
  public:
    int numberofElementsInIntersection(vector<int> &a, vector<int> &b) {
        // Your code goes here
        int n1 = a.size() ;
        int n2 = b.size() ; 
        
        unordered_map<int,int>mpp ;
        
        for(int i=0 ; i<n1 ; i++){
            mpp[a[i]]++ ;
        }
        
        int count=0 ;
        
        for(int j=0 ; j<n2 ; j++){
            if(mpp[b[j]]==1){
                count++ ;
            }
        }
        
        return count ;
        
    }
};