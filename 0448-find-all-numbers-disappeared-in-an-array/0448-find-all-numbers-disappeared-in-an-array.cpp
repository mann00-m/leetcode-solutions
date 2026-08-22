class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;

        sort(nums.begin(), nums.end());

        int j = 0;
        int n = nums.size();

        for (int i = 1; i <= n; i++) {
            while (j < n && nums[j] < i) {
                j++;
            }

            if (j >= n || nums[j] != i) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};