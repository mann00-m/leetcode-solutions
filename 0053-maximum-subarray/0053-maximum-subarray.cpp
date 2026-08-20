class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cuur=0;
        int maxi=INT_MIN;

        for(int i=0;i<nums.size();i++){
            cuur=max(nums[i],cuur+nums[i]);
            maxi=max(cuur,maxi);
        }
        return maxi;
    }
};