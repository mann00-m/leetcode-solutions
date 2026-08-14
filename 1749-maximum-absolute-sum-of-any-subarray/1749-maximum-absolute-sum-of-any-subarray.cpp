class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
      int currsum=nums[0];
       int maxsum=nums[0];

        int currmin=nums[0];
        int minsum=nums[0];

        for(int i=1;i<nums.size();i++){
            currmin=min(nums[i],currmin+nums[i]);
            minsum=min(currmin,minsum);
        }
        for(int i=1;i<nums.size();i++){
            currsum=max(nums[i],currsum+nums[i]);
            maxsum=max(currsum,maxsum);
        }



       return max(abs(maxsum), abs(minsum));
    }
};