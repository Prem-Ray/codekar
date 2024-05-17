class Solution {
public:

    void solvemaxprofit(vector<int>&prices , int&minPrice , int&maxprofit,int i) {

        //base case 
        if(i>=prices.size()) {
            return ;
        }

        //ek case solve karo 
        minPrice = min(minPrice , prices[i]) ;
        maxprofit =max(maxprofit , prices[i]-minPrice) ;

        solvemaxprofit(prices,minPrice,maxprofit,i+1) ;

    }

    int maxProfit(vector<int>& prices) {

        // int maxprofit=0 ;
        // int mini=INT_MAX ;

        // for(int i=0 ; i<prices.size() ; i++) {
        //     mini=min(mini,prices[i]) ;
        //     maxprofit=max(maxprofit,prices[i]-mini) ;
        // }

        int minPrice = INT_MAX ;
        int maxprofit = INT_MIN ;
        int i=0 ;

        solvemaxprofit(prices,minPrice,maxprofit,i) ;

        return maxprofit ;
    }
};