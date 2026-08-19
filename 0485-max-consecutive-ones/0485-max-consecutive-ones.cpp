class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int left=0;
        int maxlen=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=1){
                left=i+1;
            }
            maxlen=max(maxlen,i-left+1);
        }
        return maxlen;
    }
};