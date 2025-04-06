class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> arr;
        // sort the array
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            // avoiding the duplicates
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            for (int j = i + 1; j < n; j++) {
                // avoiding the duplicates
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;
                int k = j + 1;
                int l = n - 1;
                while (k < l) {
                    long long sum = 0;
                    sum += nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    // if sum > target then decrease the right
                    if (sum > target)
                        l--;
                    // if sum < target then decrease the left
                    else if (sum < target)
                        k++;
                    // if sum == target
                    else {
                        vector<int> temp = {
                            {nums[i], nums[j], nums[k], nums[l]}};
                        arr.push_back(temp);
                        k++;
                        l--;
                        // for avoiding the duplicates
                        while (k < l && nums[k] == nums[k - 1])
                            k++;
                        while (k < l && nums[l] == nums[l + 1])
                            l--;
                    }
                }
            }
        }
        return arr;
    }
};