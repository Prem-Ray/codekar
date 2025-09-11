class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans ;

        intervals.push_back({newInterval[0],newInterval[1]}) ;

        // if(intervals.empty()){
        //     return {{newInterval[0],newInterval[1]}} ;
        // }

        sort(intervals.begin(),intervals.end()) ;

        for(int i=0 ; i<intervals.size() ; i++){
            if(ans.empty() || intervals[i][0]>ans.back()[1]){
                ans.push_back(intervals[i]) ;
                // if(ans.back()[1]>=newInterval[0]){
                //     ans.back()[1] = max(ans.back()[1],newInterval[1]) ;
                // }
            }else{
                ans.back()[1] = max(ans.back()[1],intervals[i][1]) ;
            }

        }
        return ans ;
    }
};