class Solution {
  public:
  
    int firstoccurence(vector<int>& nums, int target){
        
        int index = -1 ;

        int start = 0;
        int end = nums.size()-1 ;

        while(start <= end){

            int mid = start+(end-start)/2 ;

            if(nums[mid] == target){
                index = mid ;
                end = mid-1 ;
            }
            else if(nums[mid] < target){
                start = mid+1 ;
            }
            else{
                end = mid-1 ;
            }
        }
        return index ;

    }
  
    int secondoccurence(vector<int>& nums, int target){
        
        int index = -1 ;
        
        int start = 0;
        int end = nums.size()-1 ;

        while(start <= end){

            int mid = start+(end-start)/2 ;

            if(nums[mid] == target){
                index = mid ;
                start = mid+1 ;
            }
            else if(nums[mid] < target){
                start = mid+1 ;
            }
            else{
                end = mid-1 ;
            }
        }
        return index ;

    }
    
    int countFreq(vector<int>& nums, int target) {
        // code here
        int firstoccur = firstoccurence(nums,target) ;
        int lastoccur =  secondoccurence(nums,target) ;
        
        if(firstoccur==-1) return 0 ;
        
        return (lastoccur-firstoccur+1) ;
    }
};
