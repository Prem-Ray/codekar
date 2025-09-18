class Solution {
public:
    long long calculateHours(vector<int>& piles,int hour){
        long long totalHour = 0 ;
        int n = piles.size() ;

        for(int i=0 ; i<n ; i++){
            totalHour += (piles[i] + hour - 1LL)/ hour; 
        }
        return totalHour ;
    }

    int findMax(vector<int>&piles){
        int maxi = INT_MIN ;
        int n = piles.size() ;

        for(int i=0 ; i<n ;i++){
            maxi = max(maxi,piles[i]) ;
        }
        return maxi ;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        
        int low = 1 ;
        int high = findMax(piles) ;

        while(low <= high){
            int mid = (high + low)/2 ;
            long long totalhour = calculateHours(piles,mid) ;

            if(totalhour <= h){
                high = mid-1 ;
            }else{
                low = mid+1 ;
            }
        }
        return low ;

    }
};