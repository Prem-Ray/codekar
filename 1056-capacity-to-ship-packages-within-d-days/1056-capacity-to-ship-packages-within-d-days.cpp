class Solution {
public:
    bool chckCapacity(vector<int>& weights, int days, int capacity){
        int sum = 0 ;
        int count = 1 ;

        for(int i=0 ; i<weights.size() ; i++){

            if(sum+weights[i] > capacity){
                sum = 0 ;
                count++ ;
            }

            sum += weights[i] ;
        }

        if(count <= days) return true ;

        return false ;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi = INT_MIN ;
        long long maxCapacity = 0 ;

        for(int i=0 ; i<weights.size() ; i++){
            maxi = max(maxi,weights[i]) ;
            maxCapacity += weights[i] ;
        }

        int start = maxi ;
        int end = maxCapacity ;

        while(start <= end){
            int mid = start+(end-start)/2 ;

            if(chckCapacity(weights,days,mid) == true){
                end = mid-1 ;
            }else{
                start = mid+1 ;
            }
        }

        return start ;
    }
};