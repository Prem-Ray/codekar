class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0] ;
        int maxProfit = INT_MIN ;

        for(int i=1 ; i<prices.size() ; i++){
            int currentPrice = prices[i] ;
            int currentProfit = prices[i]-minPrice ;
            maxProfit = max(maxProfit,currentProfit) ;
            minPrice = min(minPrice,prices[i]) ;
        }

        if(maxProfit<0) return 0 ;
        return maxProfit ;
    }
};