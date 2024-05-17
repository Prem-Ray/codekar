class Solution {
public:
    int trap(vector<int>& height) {

      int cont=0 ;
        int n=height.size() ;

        for(int i=0 ; i<n ; i++) {

            int left_max=height[0] ;
             int right_max=height[n-1] ;

            //which is the left max from 0 index to courrent index
            for(int j=0 ; j<=i ; j++) {
                left_max=max(left_max,height[j]) ;
            }

            //which is the right max from current index to last index
            for(int k=i ; k<n ; k++) {
                right_max=max(right_max,height[k]) ;
            }

            cont=cont+min(left_max,right_max)-height[i] ;

        }
        return cont ; 

        
    }
};