class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        int mini = INT_MAX;
        for (int i = 0; i + k <= nums.size(); i++) {
            int diff = nums[i + k - 1] - nums[i];
            mini = min(mini, diff);
        }

        return mini;
    }
};