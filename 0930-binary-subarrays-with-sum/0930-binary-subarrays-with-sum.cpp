class Solution {
public:
    int numSubarraysWithAtMostSum(vector<int>& nums, int max_goal) {
        if (max_goal < 0) return 0;
        int low = 0, high = 0, res = 0, sum = 0;
        int n = nums.size();
        
        for (high = 0; high < n; high++) {
            sum += nums[high];
            
            while (sum > max_goal) {
                sum -= nums[low];
                low++;
            }
            res += (high - low + 1);
        }
        return res;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return numSubarraysWithAtMostSum(nums, goal) - numSubarraysWithAtMostSum(nums, goal - 1);
    }
};