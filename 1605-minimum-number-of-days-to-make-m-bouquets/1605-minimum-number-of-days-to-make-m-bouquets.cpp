class Solution {
public:
    bool checkposibility(vector<int>& arr, int day, int m, int k) {
        int count = 0 ;
        int noOfBotq = 0 ;

        for(int i=0 ; i<arr.size() ; i++){
            int currentDay = arr[i] ;

            if(currentDay <= day){
                count++ ;
                if(count == k){
                    noOfBotq ++ ;
                    count = 0 ;
                }
            }else{
                count = 0 ;
            }
        }
        
        if(noOfBotq >= m) return true ;
        
        return false ;
    }
    int minvalue(vector<int>& bloomDay){
        int mini = INT_MAX ;

        for(int i=0 ; i<bloomDay.size() ; i++){
            mini = min(mini,bloomDay[i]) ;
        }

        return mini ;
    }
    int maxvalue(vector<int>& bloomDay){
        int maxi = INT_MIN ;

        for(int i=0 ; i<bloomDay.size() ; i++){
            maxi = max(maxi,bloomDay[i]) ;
        }

        return maxi ;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long value = m * 1LL * k * 1LL ;
        if(bloomDay.size()< value) return -1 ;

        int start = minvalue(bloomDay) ;
        int end = maxvalue(bloomDay) ;

        while(start <= end){
            int mid = start+(end-start)/2 ;
            
            if(checkposibility(bloomDay,mid,m,k) == true){
                end = mid-1 ;
            }else{
                start = mid+1 ;
            }
        }
        
        return start ;
    }
};