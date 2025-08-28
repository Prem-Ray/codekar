class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>altitude(gain.size()+1,0) ;
        for(int i=0 ; i<gain.size() ; i++){
            altitude[i+1] = (altitude[i]+gain[i]) ;
        }

        int maxgain = INT_MIN ;
        for(int i=0 ; i<altitude.size() ; i++){
            maxgain = max(maxgain,altitude[i]) ;
        }

        return maxgain ;
    }
};