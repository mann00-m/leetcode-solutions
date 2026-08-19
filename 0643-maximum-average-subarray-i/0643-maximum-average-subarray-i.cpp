class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
         for(int i=0;i<k;i++){
            sum+=nums[i];
         }
         int maxi=sum;

         for(int j=k;j<nums.size();j++){
            sum=sum+nums[j];
            sum=sum-nums[j-k];
            maxi=max(maxi,sum);
         }
         return (double)maxi/k;
    }
};