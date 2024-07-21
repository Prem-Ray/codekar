class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
      
      vector<int>arr ;
      
      int s=0 ;
      int e=mountain.size()-1 ;
      
      for(int i=1 ; i<mountain.size()-1 ; i++) {
        if(mountain[i]>mountain[i-1] && mountain[i]>mountain[i+1]) {
             arr.push_back(i) ;
             i++ ;
        }
      }
        return arr ;
    }
};