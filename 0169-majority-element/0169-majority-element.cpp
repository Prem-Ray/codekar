class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0 ;
        int element = 0 ;
        int n = nums.size() ;

        for(int i=0 ; i<nums.size() ; i++){
            if(count == 0){
                // update the element 
                element = nums[i] ;
                // initialize the count with 1 
                count = 1 ;
            }else if(nums[i] == element){
                count++ ;
            }else{
                count-- ;
            }
        }

        // get the tototal count of the max element
        int countelement = 0 ;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i] == element){
                countelement++ ;
            }
        }

        if(countelement>(n/2)){
            return element ;
        }

        return -1 ;

    }
};
