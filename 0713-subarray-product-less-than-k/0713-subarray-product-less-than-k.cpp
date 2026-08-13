class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int c = 0;

        for(int i = 0; i < nums.size(); i++) {
            int sum = 1;

            for(int j = i; j < nums.size(); j++) {
                sum *= nums[j];

                if(sum < k) {
                    c++;
                }
                else {
                    break;
                }
            }
        }

        return c;
    }
};