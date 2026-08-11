class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int n1:nums){
            mp[n1]++;

            if(mp[n1]>n/2){
                return n1;
            }
       

        }     return -1;
    }
};