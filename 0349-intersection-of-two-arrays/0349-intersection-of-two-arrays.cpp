class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       /* sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int l=0;
        int h=0;

        vector<int>ans;

        while(l<nums1.size() && h<nums2.size()) {
            if(nums1[l] == nums2[h]) {
                if(ans.size()==0 || ans.back()!=nums1[l]) {
                    ans.push_back(nums1[l]);
                }
                l++;
                h++;
            }

            else if(nums1[l] < nums2[h]) {
                l++;
            }

            else {
                h++;
            }
        }*/

        set<int>ans ;
        for(int i=0;i<nums1.size();i++) {
            for(int j=0;j<nums2.size();j++) {
                if(nums1[i]==nums2[j]) {
                    ans.insert(nums1[i]);
                }
            }
        }
        
      
       vector<int>unionarr;
       for (auto& it : ans) {
        unionarr.push_back(it);
    }
 

    

        return unionarr;
    }
};