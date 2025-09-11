class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i=0 ;
        int j=0 ;
        int k=m ;

        while(i<m && j<n){
            if(nums1[i] <= nums2[j]){
                i++ ;
            }
            else{
                nums1[k] = nums1[i] ;
                nums1[i] = nums2[j] ;
                j++ ;
                k++ ;
            }
        }

        while(j<n){
            nums1[k] = nums2[j] ;
            j++ ;
            k++ ;
        }

        sort(nums1.begin(),nums1.end()) ;
    }
};