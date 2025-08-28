class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        vector<int>altitude(gain.size()+1,0) ;
        int maxgain = INT_MIN ;

        for(int i=0 ; i<gain.size() ; i++){
            altitude[i+1] = (altitude[i]+gain[i]) ;
            maxgain = max(maxgain,altitude[i]) ;
        }

        maxgain = max(maxgain,altitude[altitude.size()-1]) ;

        return maxgain ;
    }
};